def Factorial():
#Getting the input from the user and assigning it to the num variable
   num = int(input("Please Enter a number: "))    
   #Assigning 1 to the variable constant
   constant = 1    
   #checking to see if the users input is less than 0 and if it is then we throw an error because of a negative number
   #and if it is equal to 0 than we print out the factorial is 1
   if num < 0:    
     print(" No Negative Factorial...")    
   elif num == 0:    
     print("The factorial of 0 is ",constant)    
   #looping through to find the factorial of the number entered by the user.
   else:    
      for i in range(1,num + 1):    
       constant = constant*i    
   print("The factorial of",num,"is",constant)  



##menu handler and we keep all our menu options as fucnctions above here
ans=True
while ans:
    print ("""
    1.Factorial Of A Number
    """)
    ans=input("Please Select A Menu Option ") 
    if ans=="1": 
      Factorial() 
    elif ans !="":
      print("\n Invalid Menu Option...") 