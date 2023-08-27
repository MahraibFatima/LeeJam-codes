#POP(Procedure Oriented Programming)
#OOP(Object Oriented Programming)

class employe:
    emp = "emp name!"

    def __init__(self, name) :
        self.name = name
        print("hi", self.name)
        print("Comtructor: ",employe.emp)
        print("Cons: ",self.emp)
 #   def empFunction():
  #      print("Function: ",employe.emp)

empl = employe("abc")
#emp.empFunction()
print(empl.emp)

class Employee:
    office_name = "PQR private limited"
    def __init__(self,empName, empID, empSalary) :
        self.empName = empName
        self.empID  = empID
        self.empSalary = empSalary
    def PrintInfo(self):
        print("\nOffice name as an instant: ",self.office_name)
        print("office name by class: ", Employee.office_name)
        print("Employee name is: ",self.empName)
        #print("Employee name is: ",Employee.empName)
        print("Employee ID: ", self.empID)
        print("Employee salary: ",self.empSalary)
    #ERROR
    #def print(abc):
        #print("Office name: ",office_name)
        #print("Employee ID: ", empID)
        #print("Employee name is: ",empName)
        #print("Employee salary: ",empSalary)       
        

emp = Employee("Jami",2920,200)
emp.PrintInfo()

emp.office_name = "XYZ Private limited"
print("\nOffice name outside the class by class name: ", Employee.office_name)
print("Office name outside the class by instance: ", emp.office_name)
del emp.empName
print("emp Name deleted")
emp.empName = "Jamiyat"
print("Employee name out side the class: ",emp.empName)
print("Employee ID out side the class: ", emp.empID)
print("Employee salary outside the class: ",emp.empSalary)


#emp.print("abc")

import math
class Circle:
    def __init__(self, radius) -> None:
        self.radius = radius
    def cal_area(self):
        return (self.radius **2) *math.pi
        #print("Area of circle: ",(self.radius**2)*3.14)
    def cal_circumference(self):
        return (self.radius * 2 * math.pi)
        #print("Circumference of Circle: ", (self.radius*2))

cir = Circle(3)
print("Area of circle: ",cir.cal_area())
print("Circumference of Circle: ",cir.cal_circumference())


class Emp:
    sal = 0
    def __init__(self, name, age, sal) -> None:
        self.name = name
        self.age = age
        self.sal = sal
    def printInfo(self):
        print("Name of employee is: ", self.name)
        print("Age of employee is: ", self.age)
        print("Sal is: ", self.sal)
    #@classmethod
    def calculate_sal(self):
        pass

e1 = Emp("Jami", 17, 3763)
e1.printInfo()
e2 = Emp("Jamiyat", 19, 7657)
e2.printInfo()


# Private variable in Python

class attempt:
    def __init__(self, name, age) -> None:
        self.__name = name # priavte variables
        self.__age = age
    def __printData(cls):
        print("Name: ",cls.__name)
        print("Age: ",cls.__age)
    def showData(self):
        self.__printData()

a = attempt("abx", 16)
# print(a.__age)        # unaccessible outside the class
a.showData()

# Protected variable in Python
class attempt2:
    def __init__(self, name, age) -> None:
        self._name = name   #Protected Variables
        self._age = age
    def printData(cls):
        print("Name: ", cls._name)
        print("Age: ", cls._age)

a2 = attempt2("Abx", 23)
a2.printData()