"""
Monthly Calendar Display

Write a Python program that prints the  calendar for a given month and year.

Note: Use 'calendar' module.

"""

import calendar

y = int(input("Input year value: "))
m = int(input("Input month value: "))

print(calendar.month(y, m))
