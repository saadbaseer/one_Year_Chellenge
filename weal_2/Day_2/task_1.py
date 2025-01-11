# o	Write a program to swap two numbers without using a third variable.
num1=int(input("enter number 1 :"))
num2=int(input("enter number 2:"))

print(num1,num2)

num1= num1+num2
num2=num1-num2
num1=num1-num2

print(num1,num2)
