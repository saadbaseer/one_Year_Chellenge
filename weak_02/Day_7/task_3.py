#Looping through a String: Write a program to count vowels in a given string.
vowels=input("Enter any string :")
vowels.lower()
count=0
for i in vowels:
    if i=="a"or i=="e"or i=="i"or i=="o"or i=="u":
         count= count+1
    else:
         pass
print(f"ther are { count} vowels in the string")
    