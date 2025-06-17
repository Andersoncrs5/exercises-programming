# File Extension Extractor
#
# Write a Python program that accepts a filename from the user and prints the extension of the file.
#
# Sample filename: abc.java

filename = str(input("Filename: \n"))
print("The file type is:", filename.split(".")[1])