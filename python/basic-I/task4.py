# Circle Area Calculator
# Write a Python program that calculates the area of a circle based on the radius entered by the user.
import math

r = float(input("Put the value:\n"))
area = math.pi * (r * r)

print("The value of area is: " + str(area))