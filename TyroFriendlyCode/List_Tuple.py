x = 1,2,3,4     #Packing
print(x)        #(1, 2, 3, 4)
a,b,c,d = x     #unPacking
print(f"a = {a}, b = {b}, c = {c}, d = {d}")

#Concatination in Tuple: 
odd = (1, 3, 5, 7)
even = (2, 4, 6, 8)
all = even + odd
print(all)


a = (1, 17, 2)
b = (1, 3, 19)
print(a<b)      #return True or False



myString = "ABCDEFG"        #input("Enter any name: ")
for i in range(len(myString)-1, -1, -1):
    print(myString[i], end = " ")

print(list(range(5, 0, -1)))
print(list(range(1, 9, 1)))
print(list(range(-6, 3, 1)))
print(list(range(-10, -3, 1)))
print(list(range(-3, -10, -1)))

print("bye"*2)
print("ba" + "na"*2)
print(" ".join("Jami"))

a ,b = 10, 20
print(f"First number: {a}, Second number is {b} and the Max is {max(a,b)}")