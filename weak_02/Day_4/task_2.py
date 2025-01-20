#o	Create a program to calculate a user’s grade based on marks:
#90-100: A, 80-89: B, 70-79: C, else F.
marks=float(input("Enter your marks :"))
if marks>=90 and marks <=100:
    print("You got A grade")
elif  marks>=80 and marks <90:
     print("You got B grade")
elif marks>=70 and marks <80:
     print("You got C grade")  
else:
     print("You got F grade")


