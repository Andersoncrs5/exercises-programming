# Even or Odd Checker

# Write a Python program that determines whether a given number (accepted from the user) 
# is even or odd, and prints an appropriate message to the user.

num = int(input("Input value: "))

if num % 2 > 0:
    print("Value is odd")
else :
    print("Value is even")