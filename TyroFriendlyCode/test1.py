num = 3         #int(input("Enter an integer value: "))
fact = 1
for i in range(1,(num+1)):
    fact *= i
print(f"The Factorial of {num} is {fact}.")

num = 3      #int(input("Enter any number: "))
for i in range(1, 11):
    print(f"{num} * {i} = {num*i}")
else:   
    print("Loop completed")


square = []
num = 5         #int (input("Enter an integer value: "))
for i in range(1,num+1):
    square.append(i*i)
print(list(square))


for i in range(10,0,-1):
    print(i)


num = 5 #int(input("Enter an integer: "))
for i in range(2,num):
    if(num % i == 0):
        print("Number is not prime.")
        break
else: 
    print("Number is prime.")


#list("s")
#print(list('10'))
#sport = ["Cricket","Hockey","Football"]
#sport[1:3] = ["Tennis","BasketBall"]
#print(sport)

#print(sport.pop(1)) #  ->take index   ->reomove value at that index    ->return the value
#print(sport)

#my_string = 'xz abc'
#new_string = []
#for i in my_string:
# #   new_string.append(i)
#print(list(new_string))

#x = []
#[x for x in my_string]
#print(list(x))

oddNums = []
for i in range(1,20):
    if(i % 2 != 0):
        oddNums.append(i**2)
    
print(list(oddNums))

