# Write a program to reverse a given string using a loop.

input_string=input("Enter a string :")
reversed=""
for i in range(len(input_string)-1,-1,-1):
    reversed+=input_string[i]
print("the inversed stirng is :",reversed)
    