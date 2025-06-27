# Number Range Tester
#
# Write a Python program to test whether a number is within 100 of 1000 or 2000.
#
# Python abs(x) function:
#
# The function returns the absolute value of a number. The argument may be an integer or a floating point number. If the argument is a complex number, its magnitude is returned.

def check(num: int) -> bool :
    return (abs(1000 - num) <= 100) or (abs(2000 - num) <= 100)

print(check(1000))
print(check(2200))