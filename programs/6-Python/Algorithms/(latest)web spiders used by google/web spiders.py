import requests
from bs4 import BeautifulSoup
import time

# Function to fetch the page content
def fetch_page(url):
    try:
        response = requests.get(url)
        response.raise_for_status()  # Will raise an error if the response is not successful (e.g., 404)
        return response.text
    except requests.exceptions.RequestException as e:
        print(f"Error fetching {url}: {e}")
        return None

# Function to extract all links from a webpage
def extract_links(page_content):
    soup = BeautifulSoup(page_content, 'html.parser')
    links = set()  # Set to avoid duplicate links
    for anchor in soup.find_all('a', href=True):  # Find all <a> tags with an href attribute
        link = anchor['href']
        if link.startswith('http'):
            links.add(link)
    return links

# Simple spider function that crawls from a start URL
def spider(start_url, max_pages=10):
    visited = set()  # Keep track of visited URLs
    to_visit = [start_url]  # Initialize the list of URLs to visit

    while to_visit and len(visited) < max_pages:
        url = to_visit.pop(0)  # Get the next URL to visit
        if url not in visited:
            print(f"Visiting: {url}")
            visited.add(url)

            # Fetch the page content
            page_content = fetch_page(url)
            if page_content:
                # Extract all links from the page
                links = extract_links(page_content)
                print(f"Found {len(links)} links.")

                # Add new links to the to_visit list, avoiding already visited links
                for link in links:
                    if link not in visited:
                        to_visit.append(link)

            # Be respectful to the server by pausing between requests
            time.sleep(1)  # Wait for 1 second before making another request

    print(f"Visited {len(visited)} pages")

# Start the spider with an initial URL
start_url = 'https://example.com'  # Replace with the starting URL you want to crawl
spider(start_url)