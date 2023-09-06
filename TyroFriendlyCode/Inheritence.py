#                       Simple inheritence
class A:
    pass
class B(A):
    pass
#                       multiLevel inheritence
class A:
    pass
class B(A):
    pass
#                       multiple inheritence
class A:
    pass
class B:
    pass
class C(A,B):
    pass
#                       heirarical inheritence
class A:
    pass
class B(A):
    pass
class C(A):
    pass

class Parent:
    def __init__(self, name, age) -> None:
        self._name = name #Protected members
        self._age = age
    
class Child(Parent):
    def printStatement(self):
        print("Child class!!!")
    def printData(self):
        print("Name: ", self._name)
        print("Age: ", self._age)

obj = Child("Abx", 17)
obj.printData()
obj.printStatement()

class A:
    def __init__(self) -> None:
        pass
    def __repr__(self) -> str:
        return "class A"
a = A()
a           #return what func. return
print(a,"\n")    #return what func. return

class B:
    def __init__(self) -> None:
        pass
    def __str__(self) -> str:
        return "class B"
b = B()
b                #return address
print(b,"\n")    #return what func. return

class C:
    def __init__(self) -> None:
        pass
c = C()
c
print(c,"\n")       #return address


class A1:
    def __init__(self) -> None:
        print("Class A1 called!!")
class B1:
    def __init__(self) -> None:
        print("Class B1 called!!")      
class C1(A1, B1):               #constructor of is A1 called
    #def __init__(self) -> None:
        pass

c = C1()
class A2:
    def __init__(self) -> None:
        print("Class A2 called!!")
class B2:
    def __init__(self) -> None:
        print("Class B2 called!!")
class C2(B2, A2):       #constructor of is B2 called
    #def __init__(self) -> None:
        pass

c2 = C2()
#print(c2.mro())