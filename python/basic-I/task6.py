# List and Tuple Generator
#
# Write a Python program that accepts a sequence of comma-separated numbers from the user and generates a
# list and a tuple of those numbers.
#
# Sample data: 3, 5, 7, 23

values = str(input("Input your numbers:\n"))

numbers = values.split(",")

print("List: ", list(numbers))
print("List: ", tuple(numbers))