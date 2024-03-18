#python oops concept

#1.classes and objets - security

class student:
    pass

std_1 = student()
std_2 = student()

'''std_1.name = "Sahithiyan"
std_1.roll = 52

std_2.name = "ragavan"
std_2.roll = 22

print(std_1.name)
print(std_2.name)'''

#format

#str = " sahithiyan "
#roll = 66  

#print("My name is {} and my roll number is {}".format(str,roll))

# class - blue print for creating instance of class 
# object - instance of class

'''class student2:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def display(self):
        print("My name is {} and my age is {}".format(self.name,self.age))
        
std1 = student2("sahi",21)
std2 = student2("agent",20)

std1.display()
std2.display()'''


# whenever the object is crated init fn is called 
'''
class Instructor:
    def __init__(self):
        print("Creating new object")

ins_1 = Instructor()    //called init

ins_1.name = "agent"    //explicitly creating ogj values
ins_1.roll = 45

print(ins_1.name)
ins_2 = Instructor()    //called init
print(ins_1.roll)'''
        
    
