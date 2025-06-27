# Prefix "Is" String Modifier
#
# Write a Python program to get a newly-generated string from a given string where "Is" has been added
# to the front. Return the string unchanged if the given string already begins with "Is".

def check(text: str) -> bool:
    return text[0] == "i" or text[0] == "I" or text[1] == "s" or text[1] == "S"

print(check("IsEmpty"))
print(check("isEmpty"))
print(check("sEmpty"))
print(check("Empty"))
