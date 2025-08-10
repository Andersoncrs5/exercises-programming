"""
Vowel Tester

Write a Python program to test whether a passed letter is a vowel or not.
"""

def check(char: str):
    return char in 'aeiou'

print(check('c'))
print(check('e'))