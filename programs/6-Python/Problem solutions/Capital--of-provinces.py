#  this program is to print the capital letters of the provinces in the Pakistan.

provinces = {

"Punjab":"Lahore",
 "Sindh":"Karachi",
 "Balochistan":"Quetta",
   "K-P-K":"Peshawar",
     "Kashmir":"Muzafarabad",
       "Gilgit Baltistan":"Gilgit"}

province_name = input("Enter the name of the province: ")

# Convert input to title case to match dictionary keys (e.g., "punjab" -> "Punjab")
 
province_name_formatted = province_name.title()

# checking the provinces name for finding the capital city.

if province_name_formatted in provinces:
    capital = provinces[province_name_formatted]
    print(f"The capital of {province_name_formatted} is {capital}.")
else:
    print(f"Sorry, the province '{province_name}' was not found in our list.")
