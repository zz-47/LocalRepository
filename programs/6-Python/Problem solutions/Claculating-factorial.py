#   this is a program to calculate factorial of a number

Num1 = int(input("Enter a number to calculate its factorial: "))
factorial = 1  # initial value of factorial variable

for i in range(1, Num1 + 1):
    factorial *= i  # multiplying the factorial by i at every loop
    
print(f'The factorial of {Num1} is {factorial}')
