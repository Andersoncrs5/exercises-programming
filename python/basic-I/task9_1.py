# Exam Schedule Formatter
#
# Write a Python program to display the examination schedule. (extract the date from exam_st_date).
import datetime

now = str(datetime.datetime.now())
time = now.split(" ")[0]
date = time.split("-")

years = int(date[0])
month = int(date[1])
day = int(date[2])

print(f"The examination will start from : {years}/{month}/{day}")