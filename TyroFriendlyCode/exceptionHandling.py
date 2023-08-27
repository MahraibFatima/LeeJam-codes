from datetime import date
print(date.today())
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = a/b         #if b=0 (will be a runtime error)
print(f"a/b: {c}")

import math
try: 
    num = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    #res = num/num2
    print(f"div: {num / num2}")
    print(math.exp(num))
except ZeroDivisionError as e:      #Child class ()     #here 'e' is an obj
    print(e)       #print("Demoninator will not be zero!!!")
except ValueError:          #Child class ()
    print("Entered value should be integer!!!")
except ArithmeticError:     #Parent Class()..should be in the last
    print("Calculation failed!")
#  print(f"sum is: {num +num2}")          
# #instead of this...
finally:                #it always run
    print(f"sum is: {num +num2}")

#Write a program to ask the user to input 2 integers and calculate and print their division. Make sure you
#If denominator is 0, then ask him to input non-zero denominator
#If the user enters a non integer value then ask him to enter only integers 
#Repeat the process until correct input is given
#Only if the inputs are correct then display their division and terminate the code

def div():      #while True
    try:
        var = int(input("Enter first number: "))
        var2 = int(input("Enter second number: "))
        print(var/var2)
        return      #break
    except (ZeroDivisionError, ValueError) as e:
        print(e)            #print("Divisible can't be zero!!") 
        div()
    #except ValueError:
    #     print("Enter integer value!!")
    #     div()
div()       # call div() function

import sys          #print(dir(sys))
while True:
    try:
        item = int(input("Enter first number: "))
        item2 = int(input("Enter second number: "))
        print("Div: ", item/item2)
        break
    except :
        a, b, c = sys.exc_info()       #print(sys.exc_info())
        print("Exception class: ", a)
        print("Erro type: ", b)
        print("Line number: ",c.tb_lineno)


#Custom Exception:
while True:
    try:
            val = int(input("Enter first number: "))
            val2 = int(input("Enter second number: "))
            if val2 < 0:
                raise Exception ("Less than Zero is not allowed")
            print("Div: ", val/val2)
            break
    except Exception as e:
        print(e)
