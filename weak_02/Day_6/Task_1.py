# Write a program to print a triangle pattern like this:
i=0

while i<5:
    j=0
    while j<=i:
        print("*",end="")
        j+=1
    i+=1
    print("")
    
    