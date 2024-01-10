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



'''I'd suggest if you are absolute beginner then start learning Numpy, and build a thorough understanding of Pandas(for data analysis). 
When you get comfortable with these then move to visualization libraries like Matplotlib, Seaborn, and Plotly. 
One important thing to notice here is don't just learn how to draw a bar diagram, histogram, scatterplots and so on. 
Learn to interpret the graphs you draw, it's very crucial. 
Also ,learn when to use which plot and try to grasp topics of basic Statistics. 
Then start learning Scikit-Learn and jump into ML. 
So after you get a moderate overview of these libraries then make some beginner-level projects on your own apply in your skills 
in Kaggle datasets of your interest and also learn from other Kagglers notebook codes. Good luck!









For a new learner in machine learning and data science, starting with foundational concepts and tools is crucial. In addition to exploring educational resources like the Statquest video series on YouTube, which offers clear explanations of the theories behind machine learning models, it's important to familiarize yourself with essential libraries and datasets. Here's a guide on what to focus on:

Fundamental Libraries
Most libraries for machine learning and data science are in Python, so proficiency in this language is essential.
NumPy: A library for numerical operations in Python. It's fundamental for handling arrays and matrices, which are crucial in data processing and model training.
Pandas: Essential for data manipulation and analysis. It provides data structures and operations to manipulate numerical tables and time series.
Matplotlib: A plotting library for creating static, interactive, and animated visualizations in Python.
Seaborn: Built on top of Matplotlib, it provides a high-level interface for drawing attractive and informative statistical graphics.
Scikit-learn: A primary library for machine learning. It offers simple and efficient tools for data analysis and modeling.
TensorFlow or PyTorch: Libraries for deep learning that allow building and training neural networks more flexibly and powerfully.

Introductory Datasets
Iris Dataset: A classic dataset for beginners, perfect for classification tasks.
MNIST Dataset: Contains handwritten digits and is commonly used for image processing tasks.
Boston Housing Dataset: Good for regression tasks, involving predicting housing prices based on various features.
Kaggle Datasets: Kaggle offers a variety of datasets for different levels and interests, from beginner to advanced.

Learning Approach
Theory First: Understand the fundamental concepts in machine learning like regression, classification, clustering, etc. Statquest, Coursera, or edX offer courses that can help.
Hands-On Practice: After grasping the basics, start with simple projects. Try to manipulate datasets using Pandas, visualize them with Matplotlib/Seaborn, and apply basic machine learning models using Scikit-learn.
Deep Dive into a Specialization: Once comfortable with the basics, delve deeper into a specific area like deep learning, natural language processing, or computer vision.

'''
