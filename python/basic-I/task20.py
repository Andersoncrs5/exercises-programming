# String Copy Generator
#
# Write a Python program that returns a string that is n (non-negative integer) copies of a given string.

def multi(text: str, amount: int) -> str :
    if not isinstance(text, str):
        raise Exception("Text should be a string type")

    if not isinstance(amount, int):
        raise Exception("Amount should be a Integer type")

    return text * amount

print(multi("True", 3))
print(multi(".test", 3))
print(multi("hello", 3))
print(multi("bye", 6))
