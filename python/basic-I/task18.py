# Triple Sum Calculator
#
# Write a Python program to calculate the sum of three given
# numbers. If the values are equal, return three times their sum.

num1 = int(input("Input number 1 value: "))
num2 = int(input("Input number 2 value: "))
num3 = int(input("Input number 3 value: "))

def check(n1: int, n2: int, n3: int):
    if n1 == n2 == n3:
        print((n1 + n2 + n3)*3)

    if n1 != n2 != n3:
        print(n1 + n2 + n3)

check(num1, num2, num3)