#include <curl/curl.h>

int main() {
    CURL *curl = curl_easy_init();  // Initialize a CURL session
    if(curl) {  // Check if initialization was successful
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.example.com/data");  // Set the URL for the request
        curl_easy_perform(curl);  // Perform the request and get a response
        curl_easy_cleanup(curl);  // Clean up the CURL session
    }
    return 0;
}