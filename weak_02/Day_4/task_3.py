# Write a program to check if a given year is a leap year.
year=int(input("Enter Year"))
if year%4==0 and year%100 and year%400:
    print("Leap yaear")
else:
    print("Not a leap year")