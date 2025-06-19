import requests
from bs4 import BeautifulSoup
import time

# Function to fetch a webpage and parse its content
def fetch_page(url):
    try:
        response = requests.get(url)
        response.raise_for_status()  # Raise error if the request failed (non-2xx status)
        return response.text
    except requests.exceptions.RequestException as e:
        print(f"Error fetching {url}: {e}")
        return None

# Function to parse a webpage and extract links
def parse_links(page_content):
    soup = BeautifulSoup(page_content, 'html.parser')
    links = set()  # Using a set to avoid duplicate links
    for a_tag in soup.find_all('a', href=True):
        link = a_tag['href']
        # Only add links that start with 'http' or 'https'
        if link.startswith('http'):
            links.add(link)
    return links

# Simple crawler function
def crawl(start_url, max_pages=10):
    visited = set()  # Set to track visited URLs
    to_visit = [start_url]  # List to track URLs to visit

    while to_visit and len(visited) < max_pages:
        url = to_visit.pop(0)
        if url not in visited:
            print(f"Visiting: {url}")
            visited.add(url)
            page_content = fetch_page(url)
            if page_content:
                links = parse_links(page_content)
                for link in links:
                    if link not in visited:
                        to_visit.append(link)

            # Be respectful, avoid hammering servers too fast
            time.sleep(1)  # Sleep for 1 second between requests

    print(f"Visited {len(visited)} pages")

# Start the crawler from a specific URL
start_url = 'https://example.com'
crawl(start_url)