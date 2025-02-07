n = int(input("Please enter value of n: "))  # Always convert user input to int , so its used in loop.

   # defining a function to itterate upto a number n or An in the sequence logic.

def fib(n):
   
   #  In sequencing a is recognized as , A1 and B as, A2 , as in a sequence having limit upto An

    a = 0
    b = 1

    # here if value o n == 1 , it gives an error as , 0

    if n >= 1:
        print(a)
    
    # This scenario is , if value is more than digit 1 .

    if n >= 2:
        print(b)

    
     # statring a loop with int i , where  ( i + i ) loop of two goes upto limitaional number n or An.

    for i in range(2, n):
        c = a + b
        a = b
        b = c
        print(c)     # print each number after everysingle loop , until ( c ) is printed  n times.

fib(n)