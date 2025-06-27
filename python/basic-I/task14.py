"""
Days Between Dates

Write a Python program to calculate the number of days between two dates.

Python datetime.date(year, month, day) :

The function returns date object with same year, month and day. All arguments are required.
Arguments may be integers, in the following ranges:

MINYEAR <= year <= MAXYEAR
1 <= month <= 12
1 <= day <= number of days in the given month and year
If an argument outside those ranges is given, ValueError is raised.

Note: The smallest year number allowed in a date or datetime object. MINYEAR is 1.
The largest year number allowed in a date or datetime object. MAXYEAR is 9999.
"""

from datetime import date

f_date = date(2022, 7, 2)
l_date = date(2012, 7, 2)
delta = f_date - l_date

print(f"The value of days is: {delta}")