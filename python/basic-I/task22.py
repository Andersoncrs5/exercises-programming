# Count 4 in List
# Write a Python program to count the number 4 in a given list.

def count_value(array, value):
    count = 0
    
    for i in array:
        if i == value:
            count += 1
            
    return count

print(f"The amount of {4} in {[1,2,4,3,4,4]} is : {count_value([1,2,4,3,4,4], 4)}")