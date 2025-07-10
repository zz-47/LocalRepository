Num = int(input("Enter a number: "))
entered_Num = Num  # Store the original number
Sum1 = 0
while  Num>0:

    digit= Num%10  # Getting the last digit by returning the remainder of the number divided by 10
    Sum1 += digit  #  Adding the digit to the sum 
    Num //=10     # Removing last digit from Num ,so it gets progressively smaller with each iteration
print(f'Sum of the digits of given number {entered_Num} is {Sum1}')    

