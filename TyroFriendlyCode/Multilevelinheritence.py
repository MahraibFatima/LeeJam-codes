#By class constructors
class school:
    def __init__(self,schoolName):
        self.schoolName = schoolName
        print("School contructor called!!")

class principal(school):
    def __init__(self, schoolName, principalName):
        school.__init__(self,schoolName)
        self.principalName = principalName
        print("principal constructor called!!")

class teacher(principal):
    def __init__(self, schoolName, principalName, totalTeachers) :
        principal.__init__(self,schoolName,principalName)
        self.totalTeachers = totalTeachers
        print("Teacher constructor called!!")

class student(teacher):
    def __init__(self,schoolName, principalName, totalTeachers, TotalStudent):
        teacher.__init__(self,schoolName, principalName, totalTeachers)
        self.TotalStudent = TotalStudent
        print("Student constructor called!!")
    def printData(self):
        print("\nSchool name: ", self.schoolName)
        print("Principal name: ", self.principalName)
        print("Total Teachers: ", self.totalTeachers)
        print("Total Teachers: ", self.totalTeachers)

std1 = student("Elite School system ", "ehe na", 20, 300)
std1.printData()


# By Super Method
class school:
    def __init__(self,schoolName) -> None:
        self.schoolName = schoolName
        print("School contructor called!!")

class principal(school):
    def __init__(self, schoolName, principalName) -> None:
        super().__init__(schoolName)
        self.principalName = principalName
        print("principal constructor called!!")

class teacher(principal):
    def __init__(self, schoolName, principalName, totalTeachers) :
        super().__init__(schoolName,principalName)
        self.totalTeachers = totalTeachers
        print("Teacher constructor called!!")

class student(teacher):
    def __init__(self,schoolName, principalName, totalTeachers, TotalStudent) :
        super().__init__(schoolName, principalName, totalTeachers)
        self.TotalStudent = TotalStudent
        print("Student constructor called!!")

std1 = student("Elite School system ", "ehe na", 20, 300)