
String = input("Enter value to be checked : ")

# defining the length of the string
str_len = len(String)
 
 # using the loop to compare the string with its reverse
for i in range ( 0 , str_len ):
    if  String[i] != String[str_len-1-i]:
        a = "False"
    else:
        a = "True" 

# printing the result
if a == "False" :
        print("It is not a palindrome")

else:
        print("Its a palindrome")