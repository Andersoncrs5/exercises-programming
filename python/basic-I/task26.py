"""
Value in Group Tester

Write a Python program that checks whether a specified value is contained within a group of values
"""

def check(num: int):
    return num in [1,5,8,3,3]

print(check(1))
print(check(12))
print(check(8))
print(check(4))