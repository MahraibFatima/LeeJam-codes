first_number = int(input("Enter any number: "))
second_number = int(input("Enter any second number: "))
sum = first_number + second_number
print("Numbers are ", first_number, "and", second_number)
print("The sum is: " , sum)


#[start: end: step_value]   #end is excluded from it    #step_value by defualt is zero
word = "I love Moon!!"
print(len(word))    #len = 13
print(word[0:12:1])     #print ..."I love Moon!"
print(word[12::-1])     #print the string in reverse order
print(word[0:12:2])


first_name = input("Enter your first name: ")
second_name = input("Enter your second name: ")#
print(second_name[::-1] , "", first_name[::-1]) #reverse the order 

num=int(input("Enter any integer number: "))
if(num% 2==0):
    print(f"{num} is an even digit.")
else:
    print(f"{num} is n odd digit..")

#string = input("Enter any stringaracter: ")
#if (string.islower() == True):
#   print(f"{string[0]} is in lower case")
#elif (string.isupper() == True):
#    print(f"{string[0]} is in upper case..")
#else:
#    print("out..")

#string = input("Enter a stringing: ")
i=0
string ="ABCDEFGHI"
while(i < len(string)):
    #if(string[i] != 'a' and string[i] != 'e' and string[i] != 'i' and string[i] != 'o' and string[i] != 'a'):  
    #if(string[i] not in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']):     
    if string[i] not in 'aeiou' and string[i] not in 'AEIOU':
        print(f"{string[i]}")
    i += 1


#split(sperator,max split)
string = "HE@HE@HE@HE@HE"  
print(string.split('@')) 
#OUTPUT: ['HE', 'HE', 'HE', 'HE', 'HE']
#print(string.split('@',3)) 
#OUTPUT:['HE', 'HE', 'HE', 'HE@HE']
x = input("Enter two numbers: ")
#x="5 6"
num1,num2 = x.split()
print(f"first number is: {num1}, Sencond number is: {num2}")
print(f"The Sum is: {int(num1)+int(num2)}")
#print('the sum is: ' + str(int(num1)+int(num2)))

for i in 'Python':
    print(i, end = '')

a = range(1,20,2)
print(list(a), end = '')

ch = "2"
print(int(ch))