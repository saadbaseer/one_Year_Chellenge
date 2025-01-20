# o	Create a program to check whether a given input is numeric or not.
user_input=input("enter any input:")
try:
    number=float(user_input)
    print("The users value is numeric ")
except:
    print("The value is not numeric")
    

    
