# Write a program to sum the digits of a number (e.g., 123 → 1+2+3 = 6).

num=int(input("Enter a number :"))
str_n=str(num)
sum=0
if num !=0:
    for i in str_n:
        sum = sum+int(i)
    print(f"the sum is {sum}")
else :
    print("The number is Zero")
