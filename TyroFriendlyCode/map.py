def square(n):
    return n**2
mylist = [1,2,3,4,5]

print(list(map(square,mylist)))

monthName = ["January", "February", "March"]

def inspect(name):
    if (len(name)%2==0):
        return "Even"
    else:
        return name[0]

print(list(map(inspect,monthName)))