# Create a program to calculate the sum of the first n natural numbers.
number=int(input("Enter the number"))
sum=0
for i in range(number+1):
    sum+=i
print("The sum of the first n numbers is :",sum)