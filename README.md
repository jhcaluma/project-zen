```python
# Section 1: Day 1 App 1 (Todo List App) /print /variables /functions /lists

## Course Introduction

This is an introduction to the course. The curriculum is structured on a daily basis and the estimate is 2-5 hrs to complete a day module. Two modules can also be completed in one day.
- Day 1 to 20: Python Basics
- Day 23: Build a website to showcase Python projects
- Day 26: Create programs which interact with external files like text files, how to write quality code, how to use debugger to fix bugs in code, etc.
- Day 28: Create Python programs that interact with APIs like extracting news from a news API and then sending them by email via Python every morning to a particular email address, learn how to access the NASA API through Python where you can make automatic queries and then build other programs on top of that API.
- Day 31: You will have built your own API with Python which will be a weather data API and also a translator API, HTML, Jupyter, etc. At this point we'll have built 6 python programs together and 4 programs on your own.
- Day 33: You will know how to build data dashboards, web apps will show graphs and data. Particularly, you will build a dashboard to show weather forecasts plus a happiness app on your own.
- Day 35: You will have passed the basics of Python. We'll go deeper into more specific areas of Python. We will process large amounts of text. We'll analyze a book and try to extract key information out of that book. As part of that project, you will learn natural language processing, regular expressions, sentiment analysis, etc.
- Day 37: You will have entered advanced waters with Python. You will learn how to process millions of video frames using NumPy, advanced features of Python and threading as we will need these for building apps from now on.
- Day 40: You'll have started to feel comfortable coding on your own. You'll get to practice your skills by scraping data from websites. Particularly, we will write some programs which scrape musical events and temperature values from websites. Plus, during these days you will learn SQL which is very crucial for every programmer. At this point you will know how to create any program on your own and you can call yourself a programmer. However, to keep you active, I'll be adding new applications to the course every week. So the course will expand beyond day fully. So this course will be your place to practice python every week.
- Day 42: You'll have understood object oriented programming. OOP, which is an advanced concept, is another way to program. It's a very professional way to build programs in Python so that will take your skills to a new level, taking you from a coder to a software developer.
- Day 44: You'll have built your own chat bots. We'll build 2 different chat bots. One chat bot who knows about a particular topic and another chat bot who knows about everything an open domain chat bot.
- Day 54: You'll know how to build up fast desktop programs which have a graphical user interface and a database back-end so you know exactly how to build a program and advanced program from zero to finish. So these are large programs.
- Day 60: You'll know how to build web apps with python using Django framework, which is the best framework for python for building large web apps.

## The 20 Python Applications
The instructor-led apps are:
1. Todo List App
2. Portfolio Website
3. PDF Generator
4. Creating PDF Invoices from Excel Files
5. Sending News by Email Every Morning
6. Weather API
7. Weather Forecast Web/Data App
8. Book Sentiment Analysis
9. Email Webcam Object Detection
10. Web Scraping Musical Events
11. Hotel Booking App
12. Super Mario Game Code Inspection
13. SQLite Student Management System GUI with PyQt6
14. MySQL Student Management System GUI with PyQt6
15. Chatbot GPT PyQt6 GUI

The independent student apps are:
1. Company Website
2. Converting Text Files to PDF
3. NASA Image of the Day Web App
4. Translator API
5. Analyzing Wine Tasting Datasets
6. Diary to Record your Mood
7. Timed Webcam
8. Web Scraping
9. Shopping App with OOP

Use virtual env when creating a new project. When running a python program, right click -> run. Or ctrl + shift + f10. This is done in order to avoid running other python programs that are opened because the run button always run whatever file is selected in its left side.

```python
# p1
print("Enter a task:")
user_text = input()
print(user_text)
```

```python
# p2
user_text = input("Enter a task: ")
print(user_text)
```

```python
# p3
message = "Enter a task: "
user_text = input(message)
print(user_text)
```

```python
# p4
message = "Enter a task: "
task1 = input(message)
task2 = input(message)
task3 = input(message)
# list data type
basket = [task1, task2, task3]  
print(basket)
# get type of message
print(type(message))
```

```python
# p5
message = "Enter a task: "
# the input of user is converted to string type so task1 is string data type
task1 = input(message)
task2 = input(message)
task3 = input(message)
# list data type
basket = [task1, task2, task3]
print(basket)
# get type of basket
print(type(basket))
```

```python
# p6
message = "Enter a task: "
task1 = input(message)
task2 = input(message)
task3 = input(message)
# list data type and basket can also contain a string right away
basket = [task1, task2, task3, "Hello"]
print(basket)
# get type of basket
print(type(basket))
```

```python
# p7
message = 'Enter a task: '
task1 = input(message)
task2 = input(message)
task3 = input(message)
# list data type and basket can also contain a string right away
basket = [task1, task2, task3, "Hello"]
print(basket)
# get type of basket
print(type(basket))
# single quotes works as good as double quotes
```

```python
# p8
message = "Enter a task don't: " task1=input(message)
task2 = input(message)
task3 = input(message)
# list data type and basket can also contain a string right away
basket = [task1, task2, task3, 'Hello']
print(basket)
# get type of basket
print(type(basket))
```

but if the word don't is used while the string is used with single quotes
you need to use double quotes
rule of thumb = for long strings, you should use double quotes
if it's just a short string such as Hello, then it is fine to use single quotes
in task1, whitespace doesn't matter in python but use spaces in task1 to make the code readable
= is an assignment operator
expressions have to be written one in each line

```python
# p9
text = input ("Enter a title: ")
length = len(text)
print(length)
```    

```python
# p10
text = input ("Enter a title: ")
length = len(text)
print("The length of the title:", length)
```

## Coding Exercise

Coding Exercise 1
Write a Python program following the steps below:
1. Create a variable (any name) and store a string in the variable.
2. Then, print out the type of the variable.
Note: You are expected to work on PyCharm (or another IDE) to code your solution. You can code each exercise in a separate .py file. When you're finished, compare your code to the instructor's, which is provided in the link below.

Coding Exercise 2
Write a Python program that gets input from the user and prints out that input.

Coding Exercise 3
Create a list of four strings and associate the list with a variable.

```python
# answer1
message = "prince mochi"
print(type(message))
```

```python
# answer2
message = "Enter your input: "
messageFromUser = input(message)
print(messageFromUser)
```

```python
# alternative answer2
message = "Enter your input: "
print(input(message))
```

```python
# answer3
fourStringsList = ["tasha", "kitkat", "michiko", "misty"]
```

The following code has a syntax error. Try to fix it.
answers = ['Yes', 'No', 'Yes', 'No', 'No'
Note: Run the above code in PyCharm or another IDE. Read the error message carefully and try fixing the bug. When you're finished, compare your code to the instructor's, provided in the link below. Keep the code of each exercise in a separate .py file.
Solution (i.e., bug-free code)

Bug-Fixing Exercise 2
The following code throws an error. Try to fix it.

```python
    my_answer = input("What is your answer?")
    answers = ['Yes', 'No', 'Yes' 'No' my_answer]
```

Bug-Fixing Exercise 3
The following code has an error. Try to fix it.

```python
    my_answer = input(What is your answer?)
    answers = ['Yes', 'No', 'Yes', 'No', my_answer]
```

Bug-Fixing Exercise 4
The following code throws an error. Try to fix it.

```python
    my_answer = input["What is your answer?"]
    answers = ['Yes', 'No', 'Yes', 'No', my_answer]
```

```python
    # answer1
    answers = ['Yes', 'No', 'Yes', 'No', 'No']
    print(answers)
```

```python
    # answer2 (same with 3 & 4)
    my_answer = input("What is your answer?")
    answers = ['Yes', 'No', 'Yes', 'No', my_answer]
    print(answers)
```

python console
click Python Console below to use it
you will see 3 arrows >>> which means it is working
another way to open python console when in a differnt IDE that got a terminal tool
click Terminal
use command python
or command py -3
or command python3.10
use command ctrl+z then enter to exit or exit()

you can do things in python console like

```python
    user_prompt = "Enter a task:"
    print(user_prompt)
```

but user_prompt will be lost when python console is closed
python console is only used for throwaway code
or quick code to test out how things work

```python
    input()
    type("Enter a task")
```

python console is an on demand interpreter because it executes a line unlike
in .py where all is executed and not one at a time

```python
    myList = []
    myList = ["Hello", "Hi"]
```

## FAQ

Q1. Does white space matter in the code?
A1: White space is ignored by the interpreter except in the cases below:
1. When space is in front of a line of code:

```python
       greeting1 = "Hi"
    greeting2 = "Hello  "
```

Running the above code produces an error because of the white space before greeting1.
2. When space is inside strings. Having white space inside a string will not produce any error, but you should keep in mind that  "Hello  " and "Hello"  are not treated as the same value by Python.
3. When space occurs in a variable name:
today greeting = "Hello"
The above code will produce an error because it is against the syntax rules to have spaces in variables. Programmers are encouraged to use an underscore instead of a space.
Q2. Should a function argument be a variable or a value?
A2: It can be either way, depending on the scenario.
It is OK to provide the value (e.g., a string) directly as an argument:
user_input = input("Enter a value:")
But it is also OK to provide the variable associated with the value:
    message = "Enter a value:"
    user_input = input(message)
Q3. What happens if you create a variable two times in a program? For example:
    greeting = "Hello"
    greeting = "Hi"
A3: The variable will first be assigned the value "Hello" and then immediately, it will be assigned the new value "Hi" overwriting the old value.

# Section 2: Day 2 App 1 (Todo List App) /while-loop /methods

batch operations

```python
    while 2 > 1:
        # code block here with indent to include them

    while True:
        # code block here with indent to include them
```

create empty list outside of loop and use append

```python
    message = "Enter a task:"
    basket = []
    while True:
        task = input(message)
        basket.append(task)
        print(basket)
```

string don't have append but it got capitalize

```python
    fullName.capitalize()
```

pass output to print and output should have only the first character in uppercase

```python
    print(fullName.capitalize())
```

methods use the . notation unlike functions that can look like below

```python
    print(MakeFirstCharCapitalize(fullName))
```

in this case it is not needed to have a variable declaration inside the while loop

```python
    basket = []
    while True:
        message = "Enter a task:"
        task = input(message)
        basket.append(task)
```

another . notation we can use aside from capitalize is title

```python
    message = "Enter a task:"
    basket = []
    while True:
        task = input(message)
        print(task.title())
        basket.append(task)
        print(basket)
```

task with first char in each word is saved to list

```python
    message = "Enter a task:"
    basket = []
    while True:
        task = input(message).title()
        basket.append(task)
        print(basket)
```

another ex. of while loop

```python
    password = input("Enter password: ")
    while password != "pass123":
        password = input("Enter password: ")
    print("Password was correct!")
```

with numbers

```python
    x = 1
    while x <= 6:
        print(x)
        x = x + 1
```

## Coding Exercise

Coding Exercise 1
Create a program that prompts the user to input their name once. Then, the program prints out the name once with the first letter capitalized.

Coding Exercise 2
Create a program that prompts the user to input their name once. Then, the program repeatedly prints out the name with the first letter capitalized.

Coding Exercise 3
Create a program that prompts the user to input their name repeatedly. Then, the program repeatedly prints out the name with the first letter capitalized.
In other words, the program should behave as in the screenshot below:

```python
    # answer1
    message = "Enter your name: "
    name = input(message)
    print(name.capitalize())
```

```python
    # answer2
    message = "Enter your name: "
    name = input(message)
    while True:
        print(name.capitalize())
```

```python
    # answer3
    message = "Enter your name: "
    while True:
        name = input(message)
        print(name.capitalize())
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The code below has two bugs. Hunt them down and fix them.

```python
    while True
    print("Hello")
```

Bug-Fixing Exercise 2
The programmer here is trying to convert the string "hello" to "HELLO" by using the upper() method:

```python
    greeting = "hello"
    print(upper(greeting))
```

However, the program returns an error. Can you help fix the code, so it prints out HELLO?

Bug-Fixing Exercise 3
A programmer wrote the following program:

```python
    countries = []
     
    while True:
        country = input("Enter the country: ")
        countries.append(country)
    print(countries)
```

The expected output is as follows:
However, the code returns an error instead of the expected output. Fix the code, so it produces the expected output.

```python
    # answer1
    while True:
        print("Hello")
```

```python
    # answer2
    greeting = "hello"
    print(greeting.upper())
```

```python
    # answer3
    countries = []
    while True:
        country = input("Enter the country: ")
        countries.append(country)
        print(countries)
```

use python console
and enter the command below

```python
    dir(str)
```

it will show a list that contains all the methods
you can apply to a string data type
any string can be used or an actual instance of a string
the list contains methods with double underscores
these are used internally by the python interpreter
the methods we're interested about are after these underscore methods

```python
    dir("wasd")
```

in order to know more about a method use the command below
refer to a string first then a method
no need to add () in the capitalize method

```python
    help(str.capitalize)
```

```python
    # alternative
    help("wasd".capitalize)
```

list

```python
    dir(list)
```

```python
    # alternative
    dir([])
```

```python
    # alternative2
    dir([1])
```

a variable can also be used

```python
    a = [1, 2, 3]
    dir(a)
    help(list.append)
```

use help capitalize and you will see it doesn't have any arguments
unlike help append which got self argument, object argument and / argument
that is why a.append will return an error if there is no argument inside () and it takes exactly 1 argument
a.append(4)
a
to get list of function like print and input
without the . notation
we need to use command below first
go pass with the capital letters and underscore
with lowercase are all functions

```python
    import builtins
    dir(builtins)
```

## FAQ

Q1: The user is adding to-do items, but if we close the program, the previous to-do items are lost. How can we store the to-do items permanently?
A: The to-do items are lost every time we close the program because we currently store them as strings and lists. We need to store the to-do items in external files or databases and instruct the program to automatically access them. This is a feature we will add in the coming days, so stay tuned!
Q2: How often does Python computer execute the print function in the example below?

```python
    while True:
        print("Hello")
```

A: The print function will be executed every few milliseconds or so. The exact interval depends on the processor speed of your computer.

# Section 3: Day 3 App 1 (Todo List App) /match-case /for-loops

match case statement
match case is only available in python 3.10 or newer

```python
    message1 = "Enter add, show or exit command: "
    message2 = "Enter a task: "
    message3 = "Program finished execution"
    basket = []
    while 1:
        command = input(message1)
        match command:
            case "add":
                task = input(message2)
                basket.append(task)
            case "show":
                print(basket)
            case "exit":
                break
    print(message3)
```

```python
    # alternative
    basket = []
    while 1:
        command = input("Enter add, show or exit command: ")
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                print(basket)
            case "exit":
                break
    print("Program finished execution")
```

let user see without [] and '' in their basket
if you type add command and put a space after add
it will not work
"add" == "add "
output is false
string method
remove the trailing space from the string
strip() method
command = "add "
command.strip()
command
command.strip won't save the value to a new variable without the trailing space
command.strip returns a new string but it doesn't change the string command
command = command.strip()
command
command is now saved without trailing space

```python
    basket = []
    while True:
        command = input("Enter add, show or exit command: ")
        command = command.strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for item in basket:
                    print(item)
            case "exit":
                break
    print("--- Program finished execution ---")
```

```python
    # alternative
    basket = []
    while True:
        command = input("Enter add, show or exit command: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for item in basket:
                    print(item)
            case "exit":
                break
    print("--- Program finished execution ---")
```

you can use whatever variable name so that random commands
will be detected in a match case statement
as a convention, _ is the variable name used
because a random value can match anything which is _

```python
    basket = []
    while True:
        command = input("Enter add, show or exit command: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for item in basket:
                    print(item)
            case "exit":
                break
            case _:
                print("--- Unknown command ---")
    print("--- Program finished execution ---")
```

| is a bitwise OR operator
that can be used in match case statement

```python
    basket = []
    while True:
        command = input("Enter add, show or exit command: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show" | "display":
                for item in basket:
                    print(item)
            case "exit":
                break
    print("--- Program finished execution ---")
```

you can have many lines inside a for loop
current program accepts empty string inputs and adds an empty string to list basket

```python
    basket = []
    while True:
        command = input("Enter add, show or exit command: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for item in basket:
                    item = item.title()
                    print(item)
            case "exit":
                break
    print("--- Program finished execution ---")
```

for loop
you can also use for loop for strings
iterate over strings, not only lists

```python
    meals = ["pasta", "pizza", "salad"]
    for meal in meals
        print(meal.capitalize())

    for char in "meals"
        print(char.capitalize())
```

list and strings = they are treated as sequences of object

## Coding Exercise

Coding Exercise 1
Create a program that does the following:
1. Prompts the user to input the country they are from.
2. If the user enters the word USA, the program prints out Hello.
3. If the user enters the word  India, the program prints out Namaste.
4. If the user enters the word Germany, the program prints out Hallo.
Note: Strings are case-sensitive in Python, meaning germany and Germany are treated as two different strings. 
Coding Exercise 2
    ingredients = ["john smith", "sen plakay", "dora ngacely"]
Copy-paste the above line into your IDE and write a for-loop below that line that makes the program produce the following output:
Tip:  Use the str.title() method to convert strings to Title Case.

```python
    # answer1
    while True:
        country = input("Enter your country: ")
        match country:
            case "USA":
                print("Hello")
            case "India":
                print("Namaste")
            case "Germany":
                print("Hallo")
            case "exit":
                break
    print("--- Program finished execution ---")
```

```python
    # answer2
    ingredients = ["john smith", "sen plakay", "dora ngacely"]
    for item in ingredients:
        print(item.title())
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The programmer is trying to loop over the buttons list and print out each item with the first letter capitalized. However, the programmer has done something wrong. Try to find and fix the issue.

```python
    for i in buttons:
        print(i.capitalize())
    buttons = ["cancel", "reply", "submit"]
```

Bug-Fixing Exercise 2
The programmer is again missing something in the code. Try to find what it is and fix it.

```python
    buttons = ["cancel", "reply", "submit"]
    for i in buttons:
    print(i.capitalize())
```

Bug-Fixing Exercise 3
The code below is supposed to print out the items of the list with the first character of each item capitalized. However, the code contains two errors. Try to find and fix the errors.

```python
    for item in ["sandals", "glasses", "trousers"):
        print(item.capitalize)
```

```python
    # answer1 & 2
    buttons = ["cancel", "reply", "submit"]
    for i in buttons:
        print(i.capitalize())
```

```python
    # answer3
    for item in ["sandals", "glasses", "trousers"]:
        print(item.capitalize())
```

python.org
C Python
it is an interpreter
this interpreter gets python language from the programmer and translates that language into machine language
python interpreter is just a software and it's written in C language
.py files are also text files

## FAQ

Q1: How does the for-loop work? 
A: The for-loop executes the indented lines n-times, where n is the number of items in the list that is being iterated. 
Q2: What is the difference between a while loop and a for-loop?
A: A while loop iterates as long as the while-condition is True. A for-loop iterates that many times as there are items in the list that is being iterated.
Q3: What are some other examples when we would need to use a for-loop?
A: A for-loop is generally needed when you want to perform the same manipulation on multiple objects (e.g., capitalizing strings of a list). Another example of when you would need to use a for-loop is if you wanted to convert a video to grayscale. A video is made of hundreds or thousands of image frames. You would need to use a for-loop to iterate over the video frames and apply a grayscale effect to each frame. Another example would be to iterate over the pages of your blog website to extract their user comments, etc.
Q4: What is the difference between match-case and if-else?
Match-case is usually to match a string out of a predefined number of strings (e.g., a series of commands, months of the year, etc.).  If-else conditionals check more complex conditions. We will cover if-else conditionals later in the course. There you will understand the exact difference.

# Section 4: Day 4 App 1 (Todo List App) /type-conversion /list-indices /tuples

list indexing
if you use an index that is not equal to max size of the list
you will get an error of out of range
you can't use string as an index when accessing item in a list
convert the string that is from input() function into a number
since a number can be used as an index
if you entered a number to input()
and saved the output to a variable
that variable is string
and if you add that string to a number
it will result in an error
a = input("Enter a number: ")
10
a
a + 2
output is an error
use the code below

```python
    int("10")
    b = int('10')
    type(b)
```

output is int
int is a whole number in python
you can also use float to convert strings into decimal numbers

```python
    b = float("10.12")
    b
```

basket[1.3] won't work because index can't have decimals or float
a string with decimal also can't be converted to int with int() function

```python
    basket = []
    while True:
        command = input("Type add, show, edit or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for item in basket:
                    print(item)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "exit":
                break
    print("--- Program finished execution ---")
```

type conversion
a = input("Enter a number: ")
b = int(a)
a is a string
b * 10
output is 50 if input is 5
a * 10
print 5 ten times in 1 line as a string
"hi" * 10
output is hi printed in 1 line but 10 hi in a single string
things need to be as explicit as possible
int("Hi")
output is an error
float("Hi")
also returns an error
float("10")
output is 10.0
it is different to with a string to int
int("10")
python has this implicit declaration of types
so no need to use the float class when you create a variable
convert a number to a string with
str(10)
str(10.12)
list indexing
each item below is treated as an object
myList = ['a', 'b', 'c']
z = myList[1]
type(z)
z is a string
z == 'b'
output is true
myList[1] == 'b'
they point to the same value
to know the index use code below
myList.index('b')
output is 1
dir(list)
index is listed in list method
myList.__setitem__() takes 2 arguments
the first argument is the item you want to change and the 2nd argument is the new value
myList.__setitem__(1, 'd')
myList
myList[1] = 'e'
myList
myList.__getitem__(2)
myList[2]

```python
    filenames = ["1.Raw Data.txt", "2.Reports.txt", "3.Presentations.txt"]
    for filename in filenames:
```

data mutability in python
strings don't support item assignment
so code below will give an error

```python
    filename[1] = "-"
```

it is because string is being modified
we are assigning a new item in the list but assigning to a string in this case
strings are immutable, they cannot be changed
and lists are mutable
you can change the list

to change a string
create a new string
with .replace we can change all . and turn them into -
.replace won't modify the filename value
.replace is a method that returns a new string
so save value to variable

```python
    filename.replace('.', '-')
    filename_new = filename.replace('.', '-')
```

no need new variable

```python
    filename = filename.replace('.', '-')
    filename
```

1 means the first occurence of the .

```python
    filename = filename.replace('.', '-', 1)
```

working

```python
    filenames = ["1.Raw Data.txt", "2.Reports.txt", "3.Presentations.txt"]
    for filename in filenames:
        filename = filename.replace('.', '-', 1)
        print(filename)
```

mutability
sometimes you want to be sure
that a string in a variable is not changed
but if strings were mutable and you want strings
to not be changed then then you wouldn't have any solutions
so why are lists mutable
if you really really want the list not to be changed
you shouldn't use a list
you should use a tuple
a tuple is the immutable version of a list

```python
    filenames = ("1.Raw Data.txt", "2.Reports.txt", "3.Presentations.txt")
    filenames
    type(filenames)
```

you can get value

```python
    filenames[1]
```

output is an error

```python
    filenames[1] = "Something new"
```

output is also an error

```python
    filenames.append()
```

just use list instead of tuples
lists are the most popular sequence types
types that store different objects in them
since they are flexible so they can be easily changed
you don't have to reassign them in a new variable
tuples are useful in very special cases

Coding Exercise 1
Create a program that:
1. Prompts the user to input a (dollar) amount.
2. Calculates the corresponding amount in euros, given an exchange rate of 0.95.
3. Prints out the amount in euros, as shown in the screenshot below.

Coding Exercise 2
The list below represents the ranking of three athletes. John won 1st place, Sen got 2nd, and Lisa the 3rd.
ranking = ['John', 'Sen', 'Lisa']

Create a program that:
1. Contains the above list.
2. Prompts the user to input a rank number.
3. Returns the person who has the given rank.
For example:

Coding Exercise 3
We have the same list:
ranking = ['John', 'Sen', 'Lisa']
This time you need to create a program that:
1. Contains the above list.
2 Prompts the user to input the person's name.
3. Returns the rank that person has.
For example:

```python
    # answer1
    message = "Enter amount of credits (in dollars): "
    number = float(input(message))
    convertedValue = number * 0.95
    print("The amount in euros is: ")
    print(convertedValue)
```

```python
    # answer2
    ranking = ['John', 'Sen', 'Lisa']
    message = "Enter a rank number: "
    number = int(input(message)) - 1
    print(ranking[number])
```

```python
    # answer3
    ranking = ['John', 'Sen', 'Lisa']
    message = "Enter a name: "
    name = input(message)
    index = 0
    for item in ranking:
        if (item == name)
            print(index + 1)
        index = index + 1
```

```python
    # alternative
    ranking = ['John', 'Sen', 'Lisa']
    message = "Enter a name: "
    name = input(message)
    rank = ranking.index(name) + 1
    print(rank)
```

Bug-Fixing Exercise 1
The programmer is trying to extract and print out 'b' using list indexing, but there is an error. Try to fix it.

```python
    elements = ['a', 'b', 'c']
    print(elements(1))
```

Bug-Fixing Exercise 2
The code below aims to replace 'b' with 'x' in the list elements.
However, the output of the code is still ['a', 'b', 'c'].
Try to fix the code so 'b' is replaced with 'x'.

```python
    elements = ['a', 'b', 'c']
    new = 'x'
    new = elements[1]
    print(elements)
```

```python
    # answer1
    elements = ['a', 'b', 'c']
    print(elements[1])
```

```python
    # answer2
    elements = ['a', 'b', 'c']
    new = 'x'
    elements[1] = new
    print(elements)
```

Q1: When should we use integers and when floats?
A: Integers represent whole numbers, while floats represent decimal numbers. Therefore, if you are getting the number of eggs, the rank of university students, the number of participants in an event, or other whole numbers from the users, then you know you want to work with integers. On the other hand, if you are working with continuous data such as temperature, speed, etc., you want to work with floats.
Q2: Why do we use parenthesis in functions (e.g., input() and print()) and square brackets when accessing list items (e.g., todos[3]?
A: That is part of the deal/convention/syntax, so the interpreter knows exactly what you are trying to do. In this case, it would help the interpreter understand whether you are calling a function or accessing a list item.
Q3: Why does indexing start from zero?
A: It is a common design choice across (almost?) all languages. If you have trouble wrapping your mind about the zero-origin system, think of it as a coordinate system that starts from zero and think of the indices as offsets from the origin. 

# s5

```python
    basket = []
    while True:
        command = input("Type add, show, edit or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for item in basket:
                    print(item)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "exit":
                break
    print("--- Program finished execution ---")
```

to show numbers before each item in basket
we use enumerate() function
in example below, there is a problem
index number is followed by space and then -
after -, another space follows it and then the item value
to solve that problem we use f-strings

```python
    basket = []
    while True:
        command = input("Type add, show, edit or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for index, item in enumerate(basket):
                    print(index, '-', item)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "exit":
                break
    print("--- Program finished execution ---")
```

f-strings
use a variable named row
and then inside curly brackets {} we can put variables inside - in middle is explicit literal string

```python
    basket = []
    while True:
        command = input("Type add, show, edit or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index}-{item}"
                    print(row)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "exit":
                break
    print("--- Program finished execution ---")
```

add a complete feature or mark a task as done
so that item will be deleted in basket

```python
    basket = []
    while True:
        command = input("Type add, show, edit or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index}-{item}"
                    print(row)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":

            case "exit":
                break
    print("--- Program finished execution ---")
```

use commands in python console

```python
    dir(list)
    help(list.remove)
    mylist = ['a', 'b', 'c']
    mylist.remove('b')
    mylist
```

return the value of removed item from list with argument being the index

```python
    mylist.pop(1)

    mylist = ['a', 'b', 'c']
```

minus 1 or last item will be the default argument for the code below

```python
    mylist.pop()
    mylist

    mylist = ['a', 'b', 'c']
```

1 for c, -2 for b and -3 for a

```python
    mylist.pop(-2)
    mylist
```

there is a bug below where if edit is used while basket is empty, an eror will appear
solution is to check list first if empty before doing any action on it

```python
    basket = []
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

for loop

```python
    basket = []
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
                print(f"Lenght is {index + 1}")
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

len function doesn't even need a for loop

```python
    print(len(basket))
```

strings can also be used in enumerate()

```python
    for i, j in enumerate("Hello"):
        print(i, j)
```

strings are also sequences of items

```python
    a = enumerate(["a", "b", "c"])
    a
```

the reason we get this is that the enumerate function returns
an enumerate object
python doesn't know how to display this object
but if we put it in a popular type such as list

```python
    list(a)
```

convert it into a list, we get a representation of that
enumerate object or internal construct of object
it is a list made of tuples
so when using for i, item in enumerate()
it is like this

```python
    for i, item in [(0, 'a'), (1, 'b'), (2, 'c')]
        print(i, item)
```

string enumerate

```python
    b = enumerate("Hello")
    b
    list(b)
```

but converting b into a string, you will be disappointed
all this will do is just convert that representation to a string
lists are mutable
so the method will change the list in sort
string methods return a new string

check python console

```python
    dir(list)
    help(list.sort)

    waitingList = ["sen", "ben", "john"]
    waitingList.sort()

    for index, item in enumerate(waitingList):
        row = f"{index + 1}.{item.capitalize()}"
        print(row)
```

test

```python
    "Hello".replace("o", "x")
```

code below doesn't return any value

```python
    ["c", "d", "b"].sort()

    myList = ["c", "d", "b"]
    myList.sort()
    myList

    myList.sort(reverse = True)
```

## Coding Exercise

Coding Exercise 1
filenames = ['document', 'report', 'presentation']
Copy-paste the above list in a .py file and extend the code, so it prints out the output below:
    0-Document.txt
    1-Report.txt
    2-Presentation.txt

Coding Exercise 2
ips = ['100.122.133.105', '100.122.133.111']
Copy-paste the ips list in a .py file and extend the program so it:
1. Prompts the user to input an index (e.g, 0 or 1).
2. Returns the IP address that has that index.
Here is how the program would behave when executed:

```python
    # answer1
    filenames = ['document', 'report', 'presentation']

    for i, j in enumerate(filenames):
        print(f"{i}-{j.capitalize()}.txt")
```

```python
    # answer2
    ips = ['100.122.133.105', '100.122.133.111']
    message = "Enter index: "
    data = int(input(message).strip())

    print(f"You chose {ips[data]}")
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
Supposedly, the following program should:
1. Prompt the user to input an index (e.g., 0, 1, or 2).
2. Print out the item with that index.
However, there is a bug with the program which you should try to fix.

```python
    menu = ["pasta", "pizza", "salad"]
     
    user_choice = input("Enter the index of the item: ")
     
    message = f"You chose {menu[user_choice]}."
    print(message)
```

Bug-Fixing Exercise 2
Here is another piece of buggy code:

```python
    menu = ["pasta", "pizza", "salad"]
     
    for i, j in enumerate[menu]:
        print(f"{i}.{j}")
```

Fix the code, so it prints out the output below:
    0.pasta
    1.pizza
    2.salad

Bug-Fixing Exercise 3
Here is another piece of code that contains a bug:

```python
    menu = ["pasta", "pizza", "salad"]
     
    for i, j in enumerate(menu):
        print("f{i}.{j}")
```

The expected output is this:
    0.pasta
    1.pizza
    2.salad
Fix the bug so the program prints out the above output. 

```python
    # answer1
    menu = ["pasta", "pizza", "salad"]
    user_choice = int(input("Enter the index of the item: ").strip())
    message = f"You chose {menu[user_choice]}."
    print(message)
```

```python
    # answer2 & 3
    menu = ["pasta", "pizza", "salad"]
    for i, j in enumerate(menu):
        print(f"{i}.{j}")
```

## FAQ

Q1: Today, we used two variables in a for-loop. Is it also possible to iterate using three or more variables?
A: Yes. You have to use as many variables as there are items in the internal tuples or lists. In the example below, we iterate using three variables:
    buttons = [('John', 'Sen', 'Morro'), ('Lin', 'Ajay', 'Filip')]
    for first, second, third in buttons:
        print(first, second, third)
Note that the enumerate function always produces a sequence of tuples each containing two items. Therefore, when using enumerate, you have to use two variables, not less, not more.
Q2: Is an f-string always used in conjunction with a for loop?
A: No. f-strings can be used independently. For example:
    name = input("Enter your name: ")
    print(f"Your name is {name}.")
Here is the output of that:

# s6

```python
    basket = []
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ")
                basket.append(task)
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
                print(f"Lenght is {index + 1}")
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

there are different solutions to store user data
text file = simple solution and works very well with simple data
if complext data = you might want to use csv or json
or more complex
where there is more user interaction with the data
you might want to go with the ultimate solution
which is sql databases
create an empty text file in your project directory in pycharm
it should be in the same directory with your main.py file
create a file variable
and then store a file object in the file variable
the file object is returned by the open() function
it requires the path to that file
and then a string for 2nd argument
it could be w or r
we use a function available to file object
it will take a list as argument
file.writelines()

with this code
file = open('tasks.txt', 'w')
it will overwrite the file
it creates a new file with tasks.txt name
no need to declare an empty list
because it is created when readlines function is used
once you open a file object
and you have finished working with that file object
then you need to close it
things will work even without closing it but
sometimes
different parts of the codes can interact with
each other in a way that they will change
the contents of your file if you have not closed it
it is ok even if we have the same variable names file
for readlines and writelines

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
                print(f"Length is {index + 1}")
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

"""
python console

file = open('whatever.txt', 'w')
file.writelines(['Line 1', 'Line 2'])
file.close()

to see the text file
right click your main project folder -> reload on disk

file = open('whatever.txt', 'w')
file.writelines(['Line 1\n', 'Line 2\n'])
file.close()

write a string and not a list
it will show the number of bytes written in that file
file = open('whatever2.txt', 'w')
file.write('Hey this is just text here and there. You can provide \ncharacters here as well')
file.close()

but the value returned is a single string unlike with readlines which is a list

you can also use
file = open('whatever.txt', 'r')
file.read()
print(file.read())

print and file.read function won't work
because file.read is already used once so the cursor is already at the end
unlike at first it is at start to read the contents

"""

```python
    file = open('whatever.txt', 'w')
    file.writelines(['Line 1\n', 'Line 2\n'])
    file.close()
    file = open('whatever.txt', 'r')
    print(file.read())
    file.close()

    file = open('whatever.txt', 'w')
    file.write('Hey this is just text here and there. You can provide \ncharacters here as well')
    file.close()
    file = open('whatever.txt', 'r')
    print(file.read())
    file.close()
```

we need to define to do in show because it got an error
there is an additional break lines
because in the file, there is already break lines
and print will create break lines for itself

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                file = open('tasks.txt', 'r')
                task = file.readlines()
                file.close()
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
                print(f"Length is {index + 1}")
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

"""
in real life, you don't normally create lists inside
your python scripts
normally, lists are created automatically
from other external files such as the text file
automatic example is with
file.readlines()
since it return a list

the same goes for other data types like strings
sometimes you do write things in your script,
such as this message in input so you type in the double
quotes, write the text and so on
but most of the times, you will probably
get texts from external text files, from databases

the file to be accessed don't need a folder name in its path
when it is placed inside main directory but not in a folder inside main directory
changing the location of the file to be accessed makes pycharm give an option to refactor
where the path will be automatically modified to the new location or directory
tasks.txt
save/tasks.txt

use an absolute path if file is outside of project directory
C:\Users\as\Downloads

add r outside of quotes to avoid special characters like \t
r for row string

file = open(r"C:\Users\as\Downloads\tasks.txt", 'r')

if there is an error, add another .txt because .txt might be automatically add after inputing .txt manually
.txt.txt

file.read()

the function that need list as input is file.readlines()
while file.read() need a string as input

for mac or linux need forward slashes for paths

most of the time you're going to have the files in your project directory
so you'll not have to bother with absolute paths, just relative paths


"""

```python
contents = ["This is a long string", "You need to wait a long time", "Objective is the date August 25, 2023"]
filenames = ["doc.txt", "report.txt", "presentation.txt"]
```

the .py file can be anywhere inside the project directory
the folder where the files to be created or accessed need to exist to avoid
an error
zip() works like enumerate
zip() pairs the items with the same index in the 2 list
.. means 1 level up the file where main . py exists

```python
    contents = ["This is a "
                "long string",
                "You need to wait a long time",
                "Objective is the date August 25, 2023"]
    filenames = ["doc.txt", "report.txt", "presentation.txt"]
    for content_inside, filename_inside in zip(contents, filenames):
        file = open(f"../save/{filename_inside}", 'w')
        file.write(content_inside)
```


a = [1, 2, 3]
b = [1341, 5532, 1259]
x = zip(a, b)
x
list(x)


```python
    a = "This is another string " \
        "saved in " \
        "a variable"
```

## Coding Exercise

Coding Exercise 1
Please download the essay.txt file from the resources of this article. Then, create a program that reads that file and prints out its text. The first letter of each word in the output should be uppercase.
Coding Exercise 2
Write a program that reads the essay.txt file and returns the number of characters contained in the file.
Coding Exercise 3
Please download the members.txt file from the resources of this article.
Then, create a program that, whenever executed, asks the user to enter a new member in the command line:
Then, the member is added to members.txt. In this case, the text file content would be:
John Smith
Sen Lakmi
Sono Octonot
Solomon Right
Coding Exercise 4
Create a program that generates multiple text files by iterating over the filenames list. The text Hello should be written inside each generated text file.
Coding Exercise 5
Please download the three text files a.txt, b.txt, and c.txt from the resources. Then, create a program that reads each text file and prints out the content of each in the command line. The expected output would be like the following:

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('save/simple/tasks.txt', 'r')
                basket = file.readlines()
                basket.append(task)
                file = open('save/simple/tasks.txt', 'w')
                file.writelines(basket)
            case "show":
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
                print(f"Length is {index + 1}")
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

```python
    # answer1
    file = open("essay.txt", "r")
    remember = file.read()
    file.close()
    remember = remember.title()
    print(remember)
```

```python
    # answer2
    file = open("essay.txt", "r")
    remember = file.read()
    file.close()
    totalChar = len(remember)
    print("Total characters: ", totalChar)
```

```python
    # answer3
    data = input("Enter a new member: ")
    file = open("members.txt", "r")
    memberList = file.readlines()
    file.close()
    memberList.append(data + "\n")
    file = open("members.txt", "w")
    file.writelines(memberList)
    file.close()
```

```python
    # answer4
    initial_data = "Hello"
    file_list = ["doc.txt", "presentation.txt", "notes.txt"]
    for filename in file_list:
        file = open(filename, "w")
        file.write(initial_data)
        file.close()
```

```python
    # alternative
    initial_data = "Hello"
    file_list = ["doc.txt", "presentation.txt", "notes.txt"]
    for filename in file_list:
        file = open(f"save\{filename}", "w")
        file.write(initial_data)
        file.close()
```

```python
    # answer5
    file_list = ["a.txt", "b.txt", "c.txt"]
    for filename in file_list:
        file = open(filename, "r")
        data = file.read()
        file.close()
        print(data)
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1: Take a look at the code below:

```python
    file = open("data.txt", 'w')
     
    file.write("100.12")
    file.write("111.23")
     
    file.close()
```

The code creates a text file which contains the following content:
100.12111.23
However, the correct content should be:
100.12
111.23
Please fix the code so it creates the file with the correct content.

Bug-Fixing Exercise 2: The code below tries to write the string "100.2" to the text file. However, there is an error. Try to fix the error.

```python
    file = open("data.txt", 'r')
    file.write("100.12")
    file.close()
```

```python
    # answer1
    file = open("data.txt", 'w')
    file.write("100.12\n")
    file.write("111.23\n")
    file.close()
```

```python
    # answer2
    file = open("data.txt", 'w')
    file.write("100.12")
    file.close()
```

## FAQ

Q1: Can Python open other types of files rather than .txt files?
A: First, you should know that there are two types of files, binary and non-binary. Non-binary files are files such as .txt, .csv, .py, .html, .json, .csv and any other file whose content can be viewed on any text editor program (e.g., Notepad, TextEdit, etc.).  You can read and write content in non-binary using the same open function. For example:

```python
    file = open("home.html", 'w')
    file.write("<html>\n <h1>This is the home page</h1>\n</html>")
    file.close()
```

The code above would create an HTML file. The content we wrote in that file is HTML code, and HTML code is just non-binary content (i.e., text).
On the other hand, examples of binary files are .xlsx, .mp4, .docx, and other files whose content cannot be correctly handled through a text editor. Such files need specific programs (i.e., Excel, Media Player, Microsoft Word, etc.) that let users edit and view such files. Therefore, you cannot view the content of such files in Python either. That being said, it is still possible to use the Python open function to handle such files. However, the use cases of handling binary files are specific and rare. Therefore we will not cover the handling of binary files right now and will focus on more crucial features of the language instead.
Q2: I have heard that it is better to use the Python with context manager to handle files. Why didn't we do that today?
A: We will learn that eventually, but we are taking things step by step. We will cover the with context manager on Day 8.

# s7

list comprehensions

in the code below, there is an additional break line that prints
when run
and yet there is only 1 break line for each item
in the txt file

the extra break line is produced by the print function
to solve the problem
we should not edit the text file
instead
we edit the representation of the data
the representation is in the list

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                for index, item in enumerate(basket):
                    row = f"{index + 1}-{item}"
                    print(row)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                newTask = input("Enter a new task: ")
                basket[number] = newTask
            case "complete":
                 number = int(input("Number of task to complete: "))
                 number = number - 1
                 basket.pop(number)
            case "exit":
                break
    print("--- Program finished execution ---")
```

for loops

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
            stringList = []
            for item in basket:
                newItem = item.strip('\n')
                stringList.append(newItem)
            for index, item in enumerate(stringList):
                row = f"{index + 1}-{item}"
                print(row)
        case "edit":
            number = int(input("Number of task to edit: "))
            number = number - 1
            newTask = input("Enter a new task: ")
            basket[number] = newTask
        case "complete":
             number = int(input("Number of task to complete: "))
             number = number - 1
             basket.pop(number)
        case "exit":
            break
    print("--- Program finished execution ---")
```

list comprehension is the equivalent of a for loop
it is just another way to modify the items of the list but in a shorter way

inline for loop
with list comprehension, you don't event have to declare an empty list
you create the list on the fly using the list comprehension

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
            stringList = [item.strip('\n') for item in basket]
            for index, item in enumerate(stringList):
                row = f"{index + 1}-{item}"
                print(row)
        case "edit":
            number = int(input("Number of task to edit: "))
            number = number - 1
            newTask = input("Enter a new task: ")
            basket[number] = newTask
        case "complete":
             number = int(input("Number of task to complete: "))
             number = number - 1
             basket.pop(number)
        case "exit":
            break
    print("--- Program finished execution ---")
```

however, perhaps we didn't even need to use a list comprehension here
we could apply a more direct method to remove the backslash n character
from the items
if you want to modify the items of a list
you can use list comprehension

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        case "edit":
            number = int(input("Number of task to edit: "))
            number = number - 1
            newTask = input("Enter a new task: ")
            basket[number] = newTask
        case "complete":
             number = int(input("Number of task to complete: "))
             number = number - 1
             basket.pop(number)
        case "exit":
            break
    print("--- Program finished execution ---")
```

use # to add a comment

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
                basket.append(task)
                file = open('tasks.txt', 'w')
                file.writelines(basket)
                file.close()
            case "show":
                file = open('tasks.txt', 'r')
                basket = file.readlines()
                file.close()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        case "edit":
            number = int(input("Number of task to edit: "))
            number = number - 1
            newTask = input("Enter a new task: ")
            basket[number] = newTask
        case "complete":
            number = int(input("Number of task to complete: "))
            number = number - 1
            basket.pop(number)
        case "exit":
            break
    print("--- Program finished execution ---")
```

we want 1-filename.txt
concatenate strings

```python
    filenames = ["1.doc", "1.report", "1.presentation"]
    filenames = [filename.replace('.', '-') + '.txt' for filename in filenames]
    print(filenames)
```

## Coding Exercise

Coding Exercise 1
names = ["john smith", "jay santi", "eva kuki"]
Extend the code above so the code capitalizes all the names and surnames of the list and then prints the new list.
The output of your code should be as below:
    ['John Smith', 'Jay Santi', 'Eva Kuki']

Coding Exercise 2
usernames = ["john 1990", "alberta1970", "magnola2000"]
Extend the code above so the code prints out a list containing the number of characters for each username.
The output of your code should be as below:
    [9, 11, 11]

Coding Exercise 3
    user_entries = ['10', '19.1', '20']
Extend the code above so the code prints out a list containing the same items as floats.
The output of your code should be as below:
    [10.0, 19.1, 20.0]

Coding Exercise 4
    user_entries = ['10', '19.1', '20']
Extend the code above so the code prints out the sum of the numbers.
The output of your code should be as below:
    49.1

Hint: Use the sum() function. The function gets a list of numbers as input and produces the sum of all numbers. For more info, try help(sum).

```python
    # answer1
    names = ["john smith", "jay santi", "eva kuki"]
    output = [item.title() for item in names]
    print(output)
```

```python
    # answer2
    usernames = ["john 1990", "alberta1970", "magnola2000"]
    output = [len(item) for item in usernames]
    print(output)
```

```python
    # answer3
    user_entries = ['10', '19.1', '20']
    output = [float(item) for item in user_entries]
    print(output)
```

```python
    # answer4
    user_entries = ['10', '19.1', '20']
    output = [float(item) for item in user_entries]
    print(sum(output))
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The code below tries to write the items of temperatures each in one line in the file.txt list. However, the code has an error. Try to fix the error.

```python
    temperatures = [10, 12, 14]     
    file = open("file.txt", 'w')     
    file.writelines(temperatures)
```

Solution
Bug-Fixing Exercise 2
The code below tries to convert all the numbers to integers. However, the code has an error. Try to fix the error.

```python
    numbers = [10.1, 12.3, 14.7]
    numbers = [int(number) for item in numbers]
    print(numbers)
```

```python
    # answer1
    temperatures = [10, 12, 14]
    temperatures = [str(item) + '\n' for item in temperatures]
    file = open("file.txt", 'w')
    file.writelines(temperatures)
```

```python
    # answer2
    numbers = [10.1, 12.3, 14.7]
    numbers = [int(item) for item in numbers]
    print(numbers)
```

## FAQ

Q1: I am still confused about when I should use a for-loop and when a list comprehension.
A: First of all, it should be clear that there is nothing that a list comprehension does that a for-loop doesn't. The opposite is not true meaning in certain cases the for-loop is the only way around.
The rule of thumb is if you can do something with a list comprehension, do it as it is less code than a for-loop. 

# s8

optimizing code
make the code more readable and efficient
with keyword
with context manager
no need to close the file
help in avoiding problems with file handling
even if the program stops for some problem
the file will be closed with the method

unlike with file.close()
file.close() may not execute when
there is a problem in the line before it while running the program
it stops at the point before file.close() is executed

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            basket.append(task)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        case "show":
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        case "edit":
            number = int(input("Number of task to edit: "))
            number = number - 1
            newTask = input("Enter a new task: ")
            basket[number] = newTask
        case "complete":
            number = int(input("Number of task to complete: "))
            number = number - 1
            basket.pop(number)
        case "exit":
            break
    print("--- Program finished execution ---")
```

edit and complete

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                basket.append(task)
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
            case "show":
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                for index, item in enumerate(basket):
                    item = item.strip('\n')
                    row = f"{index + 1}-{item}"
                    print(row)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        case "complete":
            number = int(input("Number of task to complete: "))
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        case "exit":
            break
    print("--- Program finished execution ---")
```

when using open() function and in [read] mode
make sure that the file exists in the file location / path
that is given to the function
file paths need to exist
when opening in read mode
by default
open() function is in read mode

```python
    with open('../files/doc.txt', 'r') as file:
        basket = file.readlines()
    with open('doc.txt') as file:
        basket = file.readlines()
```

file opened are like local variables inside with keyword
but basket can be accessed outside of with
use read method
it becomes exhausted and the cursor is now at the end of the content
so using another read method inside the with code block
it will return an empty value

file is now closed if not inside code block of with

```python
    with open('doc.txt') as file:
    basket = file.readlines()
```

only use read method 1 time inside with code block

```python
    with open('doc.txt') as file:
        file.read()
        basket = file.read()
    print(basket)
```

daily journal app

only row string will appear in python console
with adding break line unless print is used

mood = "8"
mood + "\n"
print(mood)

```python
    date = input("Enter current date: ")
    mood = input("Your current mood from 1-10: ")
    thoughts = input("Let your thoughts flow:\n")
    with open(f"../journal/{date}.txt", "w") as file:
        file.write(mood + 2 * "\n")
        file.write(thoughts)
```

2022-21-10

## Coding Exercise

Coding Exercise 1
Note: This is a very challenging exercise. Do not worry if you can't get it right. Just try to code until you get bored. The sole experience of trying to code helps your learning a ton.
A client wants to buy a coin-flip probability program from you.
The programs should work like this:
1. The user runs the program. The program asks the user to enter "head" or "tail".  The user flips a coin on their desk, table, floor, etc., and then enters "head" or "tail". The user does the same over and over again.
In each cycle, the program should return the current percentage of heads in the program, similar to what you see in the screenshot above. Also, you should write each user entry (i.e., head or tail) in a text file using a with-context manager, one entry per line.

```python
    # answer1
    toss_count = 0
    head_count = 0
    tail_count = 0
    while True:
        side = input("Throw the coin and enter head or tail here: ")
        if side == "head":
            head_count = head_count + 1
            toss_count = toss_count + 1
        with open("coin.txt", "r") as file:
            data_list = file.readlines()
        data_list.append(side + "\n")
        with open("coin.txt", "w") as file:
            file.writelines(data_list)
    elif side == "tail":
        tail_count = tail_count + 1
        toss_count = toss_count + 1
        with open("coin.txt", "r") as file:
            data_list = file.readlines()
        data_list.append(side + "\n")
        with open("coin.txt", "w") as file:
            file.writelines(data_list)
    elif side == "exit":
        break
    else:
        print("--- Wrong input ---")
    percent_value = (head_count / toss_count) * 100
    print(f"--- Percent of head so far is {percent_value}% ---")
```

```python
    # alternative
    while True:
        result = input("Throw the coin and enter head or tail here: ") + '\n'
    with open("sides.txt", "r") as file:
        sides = file.readlines()
    sides.append(result)
    with open("sides.txt", "w") as file:
        file.writelines(sides)
    total_heads = sides.count("head\n")
    percentage = total_heads / len(sides) * 100
    print(f"Heads percentage: {percentage}%")
    print("sides: ", sides)
```

## Bug-Fixing Exercise
Bug-Fixing Exercise 1

```python
    with open("file.txt", 'r') as file:
        print(file.read())
        print(len(file.read()))
```

The Python script above is in the same directory with a file named file.txt whose content is:
Hello You
The Python script should print out the content of the file and the number of characters of the text inside file.txt. So, the expected output would be:
    Hello You
    9
However, the script prints out this:
    Hello You
    0
Can you fix the program so it prints out the expected output?

```python
    # answer1
    with open("file.txt", 'r') as file:
        string = file.read()
    print(string)
    print(len(string))
```

# s9

match case statement fails at one point
what is the alternative to fix that issue
enter the task after the add command and space

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        match command:
            case "add":
                task = input("Enter a task: ") + "\n"
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                basket.append(task)
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
            case "show":
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                for index, item in enumerate(basket):
                    item = item.strip('\n')
                    row = f"{index + 1}-{item}"
                    print(row)
            case "edit":
                number = int(input("Number of task to edit: "))
                number = number - 1
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                newTask = input("Enter a new task: ")
                basket[number] = newTask + '\n'
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
            case "complete":
                number = int(input("Number of task to complete: "))
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                number = number - 1
                itemToRemove = basket[number].strip('\n')
                basket.pop(number)
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
                message = f"Task {itemToRemove} was removed from the list."
                print(message)
            case "exit":
                break
    print("--- Program finished execution ---")
```

in operator
puttin in inside case won't work
you can't enter expressions after case
case only allows patterns like string

```python
    user_action = "add Play Chess"
    user_action
    "add" in "add Play Chess"
    "show" in "add Play Chess"
    "add" in user_action
```

remove match case and case branch and use if

while using slicing
if we want to automatically get the length of command
we can use the code below

add is a command

```python
    user_command = "add feed the cats"
    slice = len("add") + 1
    output = user_command[slice:]

    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if "add" in command:
            task = user_action[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            basket.append(task)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        if "show" in command:
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        if "edit" in command:
            number = int(input("Number of task to edit: "))
            number = number - 1
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        if "complete" in command:
            number = int(input("Number of task to complete: "))
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        if "exit" in command:
            break
    print("--- Program finished execution ---")
```

don't use many ifs

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if "add" in command:
            task = user_action[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            basket.append(task)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        elif "show" in command:
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        elif "edit" in command:
            number = int(command[5:])
            number = number - 1
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        elif "complete" in command:
            number = int(command[9:])
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        elif "exit" in command:
            break
        else:
            print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

boolean data type
True or False

boolean operator
or operator

```python
    if "add" in command or "new" in command or "more" in command:
    if "add" in command and "new" in command:
    if "add" not in command:
```

check strength of password
we want to print strong password after all conditions
not after checking length
3 conditions are all separate
so don't use if elif

use many ifs

store the result in a list

```python
    password = input("Enter new password: ")
    result = []
    if len(password) >= 8:
        result.append(True)
    else:
        result.append(False)
```

check number
isdigit() checks if the entire thing is a digit

```python
    "hello".isdigit()
    "hello8".isdigit()
    "44".isdigit()
```

flag

```python
    password = input("Enter new password: ")
    result = []
    if len(password) >= 8:
        result.append(True)
    else:
        result.append(False)
    digit = False
    for i in password:
        if i.isdigit():
            digit = True
    result.append(digit)
```

isupper() checks the entire thing if uppercase

```python
    "99a".isupper()
    "aB".isupper()
    "B".isupper()
```

with isupper()

all() function

everything must be true to get true output

```python
    password = input("Enter new password: ")
    result = []
    if len(password) >= 8:
        result.append(True)
    else:
        result.append(False)
    digit = False
    for i in password:
        if i.isdigit():
            digit = True
    result.append(digit)
    uppercase = False
    for i in password:
        if i.isupper():
            uppercase = True
    result.append(uppercase)
    print(result)
    print(all(result))
    if all(result) == True:
        print("Strong Password")
    else:
        print("Weak Password")
```

shorter

```python
    password = input("Enter new password: ")
    result = []
    if len(password) >= 8:
        result.append(True)
    else:
        result.append(False)
    digit = False
    for i in password:
        if i.isdigit():
            digit = True
    result.append(digit)
    uppercase = False
    for i in password:
        if i.isupper():
            uppercase = True
    result.append(uppercase)
    print(result)
    print(all(result))
    if all(result):
        print("Strong Password")
    else:
        print("Weak Password")
```

dictionaries
the problem with list is you want to know what each value represent
the code is different to list of temperatures where there is no need to know what is represented
temperatures are not needed to be associated with anything
the value represents length, number, uppercase, etc.
to use a list use {} curly brackets

```python
    password = input("Enter new password: ")
    result = {}
    if len(password) >= 8:
        result.append(True)
    else:
        result.append(False)
    digit = False
    for i in password:
        if i.isdigit():
            digit = True
    result.append(digit)
    uppercase = False
    for i in password:
        if i.isupper():
            uppercase = True
    result.append(uppercase)
    print(result)
    print(all(result))
    if all(result):
        print("Strong Password")
    else:
        print("Weak Password")
```

python console

dir(list)

dir(dict)

list and dictionary

a = [23, 53, 64]

b = {"height": 14, "width": 87, "depth": 21}

items of dictionary are compound meaning
they are made up of key value pairs

dict is useful when data are different from one another

a[1]

b["width"]

add a new item in dictionary

b["area"] = 100

.values() for dictionary

b.values()

```python
    password = input("Enter new password: ")
    result = {}
    if len(password) >= 8:
        result["length"] = True
    else:
        result["length"] = False
    digit = False
    for i in password:
        if i.isdigit():
            digit = True
    result["digits"] = digit
    uppercase = False
    for i in password:
        if i.isupper():
            uppercase = True
    result["uppercase"] = uppercase
    print(result)
    print(all(result))
    if all(result.values()):
        print("Strong Password")
    else:
        print("Weak Password")
```

## Coding Exercise

Coding Exercise 1
Write a program that asks users to enter a password. Then, it checks if the password length is greater than 7 and returns "Great password there!".
If the password has 7 or fewer characters, the program returns, "Your password is weak".
Coding Exercise 2
Extend the program we built in Coding Exercise 1 by adding a new feature. The new feature should allow the program to return "Password is OK, but not too strong" when the password is exactly seven characters long.

```python
    # answer1 & 2
    password = input("Enter password: ")
    if len(password) > 7:
        print("Great password there!")
    elif len(password) == 7:
        print("Password is OK, but not too strong")
    else:
        print("Your password is weak.")
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1: The program below intends to find out how many items have at least one underscore character in them.  However, there is an error with the code. Try to find and fix it.
    ids = ["XF345_89", "XER76849", "XA454_55"]

```python
    x = 0
    for id in ids:
    if '_' in id:
        x = x + 1
    print(x)
```

Bug-Fixing Exercise 2: This program also intends to find out how many items have an underscore in them. However, the program has a bug. It doesn't return an error message, but it returns:
    1
    1
    2
Instead, the expected output is:
2
Try to fix the program so it returns the expected output. Here is the buggy program:

```python
    ids = ["XF345_89", "XER76849", "XA454_55"]
     
    x = 0
    for id in ids:
        if '_' in id:
            x = x + 1
        print(x)
```

Bug-Fixing Exercise 3: Fix the program below so it prints out "OK" when the perimeter is less than 14 and the area is less than 8. 

```python
    length = float(input("Enter length: "))
    width = float(input("Enter width: "))     
    perimeter = (length + width) * 2
    area = length * width     
    print("Perimeter is", perimeter)
    print("Area is", area)     
    if perimeter < 14 and area > 10:
        print("OK")
    else:
        print("NOT OK")
```

```python
    # answer1 & 2
    ids = ["XF345_89", "XER76849", "XA454_55"]
    x = 0 
    for id in ids:
        if '_' in id:
            x = x + 1
    print(x)
```

```python
    # answer3
    length = float(input("Enter length: "))
    width = float(input("Enter width: ")) 
    perimeter = (length + width) * 2
    area = length * width 
    print("Perimeter is", perimeter)
    print("Area is", area) 
    if perimeter < 14 and area < 8:
        print("OK")
    else:
        print("NOT OK")
```

## FAQ

Q1: What are the pros and cons of if-elif-else and match-case?
A: Match-case is generally faster. If you can use it, do so. However, match-case is more limited. It can only check if one value is equal to another. It cannot check if one value is less/greater than another, or other more complex conditions. For such advanced conditions, you should use if-elif-else.
Q2: What does the in operator do?
in is just another operator. For example, we have the "greater-than" operator that checks if the value on the left is greater than the value on the right.
    if 3 > 2:
        print("Yes")
Similarly, we have the in operator that checks if the value on the left is contained in the value on the right. For example:
    if "a" in "aaa":
        print("Yes")
And we can also use it with lists to check if the list contains a certain item:
    if "a" in ["a", "b", "c"]:
        print("Yes")
The in operator is also known as a "containment test", although this is a very technical term that almost no one uses. 

# s10

two bugs

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if "add" in command:
            task = command[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
        basket.append(task + "\n")
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
    elif "show" in command:
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif "edit" in command:
        number = int(command[5:])
        number = number - 1
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        newTask = input("Enter a new task: ")
        basket[number] = newTask + '\n'
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
    elif "complete" in command:
        number = int(command[9:])
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        number = number - 1
        itemToRemove = basket[number].strip('\n')
        basket.pop(number)
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
        message = f"Task {itemToRemove} was removed from the list."
        print(message)
    elif "exit" in command:
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

what if the user want to add

add a new member

add add a new member

edit add a new member

instead of

edit 2

another item will be added because the add pattern is detected by first if

python console
"add" in command
command.startswith("add")
command.startswith("edit")
dir(str)
more explicit and more accurate

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
        basket.append(task + "\n")
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
    elif command.startswith("show"):
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        number = int(command[5:])
        number = number - 1
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        newTask = input("Enter a new task: ")
        basket[number] = newTask + '\n'
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
    elif command.startswith("complete"):
        number = int(command[9:])
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        number = number - 1
        itemToRemove = basket[number].strip('\n')
        basket.pop(number)
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
        message = f"Task {itemToRemove} was removed from the list."
        print(message)
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

error handling
edit 2
must be written and not
edit add a new member
because there is a convertion of string to int
try keyword
except will be followed by the error type

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            basket.append(task + "\n")
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        elif command.startswith("show"):
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        elif command.startswith("edit"):
            try:
                number = int(command[5:])
                number = number - 1
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                newTask = input("Enter a new task: ")
                basket[number] = newTask + '\n'
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
            except ValueError:
                print("Your command is not valid.")
                command = input("Type add, show, edit, complete or exit: ").strip()
    elif command.startswith("complete"):
        number = int(command[9:])
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        number = number - 1
        itemToRemove = basket[number].strip('\n')
        basket.pop(number)
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
        message = f"Task {itemToRemove} was removed from the list."
        print(message)
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

avoid repeating code

continue

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            basket.append(task + "\n")
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        elif command.startswith("show"):
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        elif command.startswith("edit"):
            try:
                number = int(command[5:])
                number = number - 1
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                newTask = input("Enter a new task: ")
                basket[number] = newTask + '\n'
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
            except ValueError:
                print("Your command is not valid.")
                continue
    elif command.startswith("complete"):
        number = int(command[9:])
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        number = number - 1
        itemToRemove = basket[number].strip('\n')
        basket.pop(number)
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
        message = f"Task {itemToRemove} was removed from the list."
        print(message)
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

complete 85

index out of range error

```python
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            basket.append(task + "\n")
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        elif command.startswith("show"):
            with open('tasks.txt', 'r') as file:
                basket = file.readlines()
            for index, item in enumerate(basket):
                item = item.strip('\n')
                row = f"{index + 1}-{item}"
                print(row)
        elif command.startswith("edit"):
            try:
                number = int(command[5:])
                number = number - 1
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                newTask = input("Enter a new task: ")
                basket[number] = newTask + '\n'
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
            except ValueError:
                print("Your command is not valid.")
                continue
        elif command.startswith("complete"):
            try:
                number = int(command[9:])
                with open('tasks.txt', 'r') as file:
                    basket = file.readlines()
                number = number - 1
                itemToRemove = basket[number].strip('\n')
                basket.pop(number)
                with open('tasks.txt', 'w') as file:
                    file.writelines(basket)
                message = f"Task {itemToRemove} was removed from the list."
                print(message)
            except IndexError:
                print("There is not item with that number")
                continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

difference of
syntax error
and
exception
a = [1, 2]
a[5]
a.pop(5)
is not a syntax error but an exception
we expect a float number and not a string
so entering four will result to error
no need to have a continue
because we're not in a loop

```python
    try:
        width = float(input("Enter rect width: " ))
        length = float(input("Enter rect length: "))
        area = width * length
        print(area)
    except ValueError:
        print("Please enter a number.")
```

don't accept square calculations
only rectangle

```python
    try:
        width = float(input("Enter rect width: " ))
        length = float(input("Enter rect length: "))
        if width == length:
            exit("That looks like a square.")
        area = width * length
        print(area)
    except ValueError:
        print("Please enter a number.")
```

## Coding Exercise

Coding Exercise 1
Build a percentage calculator that gets from the user the "total value" and the "value" and returns the percentage as shown below:
The program should also print a message if the user doesn't enter a number for the "total value or for the "value":
Coding Exercise 2
As you might know, it is not mathematically possible to divide a number by zero. Consequently, this is also not possible in Python either -you will get a ZeroDivisionError if you try:

```python
    >>> 20 / 0
    Traceback (most recent call last):
    File "<stdin>", line 1, in <module>
    ZeroDivisionError: division by zero
```

With that in mind, your task for this exercise is to extend the program you created in Exercise 1 by displaying a message to the user when they enter 0 for the "total value".

```python
    # answer1
    try:
        total_value = float(input("Enter total value: "))
        value = float(input("Enter value: "))
        percentage = value / total_value * 100
        print(f"Percentage is {percentage}%")
    except ValueError:
        print("Enter a number.")
```

```python
    # answer2
    try:
        total_value = float(input("Enter total value: "))
        value = float(input("Enter value: "))
        try:
            percentage = value / total_value * 100
            print(f"Percentage is {percentage}%")
        except ZeroDivisionError:
            print("Can't be zero.")
    except ValueError:
        print("Enter a number.")
```

```python
    # alternative
    try:
        total_value = float(input("Enter total value: "))
        value = float(input("Enter value: "))
        percentage = value / total_value * 100
        print(f"That is {percentage}%")
    except ValueError:
        print("You need to enter a number. Run the program again.")
    except ZeroDivisionError:
        print("Your total value cannot be zero.")
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
Have a look at the program below:

```python
    waiting_list = ["john", "marry"]
    name = input("Enter name: ")
     
    number = waiting_list.index(name)
    print(f"{name}'s turn is {number}")
```

When the user enters the name of one of the waiting_list members, the program returns the index of that name. For example, when the user enters "john", 0 is printed out.
If the user enters a name that is not in the list, such as "zen", the program throws an error.
Change the program, so it prints out "zen is not in the list" instead of returning an error when the user enters "zen" or any other name that is not in the list.

```python
    # answer1
    waiting_list = ["john", "marry"]
    name = input("Enter name: ")
    try:
        number = waiting_list.index(name)
        print(f"{name}'s turn is {number}")
    except ValueError:
        print(f"{name} is not in the list.")
```

## FAQ

Q1: How would try-except work in a web app?
A: The try-except block would have the same structure if you used it in the Python code that creates your web app. The only difference would be that instead of printing the message in the command line, you would print it out in the web app interface so the user can see it on their browser. For example, if they enter a value in a text box and you know the value would cause a problem in the program, your try-except block would print out a message on the app page using specific functions that are able to display messages on the browser.
    
# s11

custom functions
repetitive code or redundancy
function
function call
python interpreter is written in c language

variable scope
local variables inside functions can't be accessed globally

```python
    def get_todos():
        with open('tasks.txt', 'r') as file_local:
            data = file_local.readlines()
        return data
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
        basket = get_todos()
        basket.append(task + "\n")
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
    elif command.startswith("show"):
        basket = get_todos()
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

difference of function definitions and function calls
we can pass any object in return inside function definition
if there is no return statement in the function definition
the value that will be returned is None
None is different to string "None"

```python
    def get_average():
        with open("files/data.txt", "r") as file:
            data = file.readlines()
        return data
    average = get_average()
```

list slicing

```python
    [1, 2, 3][1:]
```

float from string

```python
    float("4353\n")
```

list comprehension

```python
    def get_average():
        with open("files/data.txt", "r") as file:
            data = file.readlines()
        values = data[1:]
        values = [float(i) for i in values]
    average_local = sum(values) / len(values)
    return average_local
    average = get_average()
    print(average)
```

## Coding Exercise

Coding Exercise 1
The code below is incomplete. It should calculate and print out the maximum value of the grades list. Please complete the function and then call it.

```python
    def get_max():
        grades = [9.6, 9.2, 9.7]
```

The output of your code should be:
9.7
Hint: You can use the max(list) function to find the maximal value of a list.

Coding Exercise 2
The function we wrote in exercise 1 returned 9.7.  Change the function so this time it returns Max: 9.7, Min: 9.2 where 9.7 is the maximum and 9.2 is the minimum. 

```python
    # answer1 & 2
    def get_max():
        grades = [9.6, 9.2, 9.7]
        output = [max(grades), min(grades)]
        return [max(grades), min(grades)]
    value = get_max()
    print(f"Max is {value[0]} and min is {value[1]}")
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The following get_maximum function is designed to return the maximum value of the celsius list, while the last two lines of the code will convert the celsius value to Fahrenheit and print it out.

```python
    def get_maximum():
        celsius = [14, 15.1, 12.3]
        maximum = max(celsius)
        print(maximum)
        
    celsius = get_maximum()
     
    fahrenheit = celsius * 1.8 + 32
    print(fahrenheit)

```    

However, when running the code, the following error is generated:
TypeError: unsupported operand type(s) for asterisk: 'NoneType' and 'float'
Try to fix the problem so that the last two lines can correctly get the maximal celsius value from the function definition and convert that value to Fahrenheit.

```python
    # answer1
    def get_maximum():
        celsius = [14, 15.1, 12.3]
        maximum = max(celsius)
        return maximum    
    celsius = get_maximum() 
    fahrenheit = celsius * 1.8 + 32
    print(fahrenheit)
```

java is a statically typed language
and python is a dynamically typed language

a variable in java is associated with a data type
while in python a variable like

message = 1
message = "hello"

can be changed from number to string
so you're changing the type of variables
python is an interpreter language
while java or c++ are compiler languages
which means that once you write java codes
you first need to translate it into machine code using a compiler
and then that is run to give you the output
but python is still run on the fly by the interpreter and
this is also related to the fact that compiled
languages are faster so java tends to run faster compared
to python
however, python is best used for web development and data
science and java
excels in things like
graphical user interfaces on desktops
or desktop apps or mobile apps
so python is not so good in mobile apps or desktop apps
so if you are after web dev, data science, automating things then
python is the best way to go

## FAQ
Q1: Today, we used to call the custom functions we created using the syntax function(). However, certain built-in functions (e.g., input(x), print(x), etc.) can be called with an argument inside the parenthesis. So, why don't custom functions get an argument as some built-in functions do?
A: Custom functions can also get an argument, but that is something you will learn tomorrow. Stay tuned!
Q2: What is the benefit of creating a function besides avoiding repetitive code?
A: Another benefit of creating functions is to make your code easier to extend and reuse. Being a well-defined block of code a function is easy to copy and paste into other programs you are writing.
For example, you might have created a function that converts an image to greyscale in the Python photo editing program you have created. You can reuse that function in another program where you are processing video to convert the video frames to greyscale.
Likewise, a function can also be used in different parts of the same program. In other words, functions will keep your codebase more organized. 

# s12

function arguments

```python
    def get_todos(filepath):
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
        basket = get_todos("tasks.txt")
        basket.append(task + "\n")
        with open('tasks.txt', 'w') as file:
            file.writelines(basket)
    elif command.startswith("show"):
        basket = get_todos("tasks.txt")
        with open('tasks.txt', 'r') as file:
            basket = file.readlines()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos("tasks.txt")
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos("tasks.txt")
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            with open('tasks.txt', 'w') as file:
                file.writelines(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

in definition is parameter
argument in function call
code below also works

```python
    tasks = get_todos(filepath="todos.txt")
```

write the file
variables inside function definitions are local variables

```python
    def get_todos(filepath):
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(filepath, data):
        with open('tasks.txt', 'w') as file:
            file.writelines(data)
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            basket = get_todos("tasks.txt")
            basket.append(task + "\n")
            write_todos("tasks.txt", basket)
    elif command.startswith("show"):
        basket = get_todos("tasks.txt")
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos("tasks.txt")
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            write_todos("tasks.txt", basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos("tasks.txt")
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            write_todos("tasks.txt", basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

a parameter's value can be changed inside the function definition
after the argument value is passed to it

decoupling
will make your programs better
5 feet 12 inches
5 12

```python
    feet_inches = "5 12"
    feet_inches.split(" ")
    "hey-me-you".split("-")
```

save to variable

```python
    feet_inches = input("Enter feet inches: ")
    def convert(feet_inches): 
        parts = feet_inches.split(" ")
        feet = float(parts[0])
        inches = float(parts[1])
        meters = feet * 0.3048 + inches * 0.0254
        return f"{feet} feet and {inches} inches is equal to {meters} meters."
    result = convert(feet_inches)
    if result < 1:
        print("Kid is too small.")
    else:
        print("Kid can use the slide.")
```

the output of a function should be
decoupled from other components
instead of return a string here
you should return one value
not such a complex component
because the value that you return
might be used from other components
in your program

```python
    feet_inches = input("Enter feet inches: ")
    def convert(feet_inches): 
        parts = feet_inches.split(" ")
        feet = float(parts[0])
        inches = float(parts[1])
        meters = feet * 0.3048 + inches * 0.0254
        return meters
    result = convert(feet_inches)
    if result < 1:
        print("Kid is too small.")
    else:
        print("Kid can use the slide.")
```

## Coding Exercise

Coding Exercise 1
Create a function that converts liters to cubic meters knowing that 1000 liters make 1 cubic meter.

Coding Exercise 2
Create a script that asks the user to enter a password. Then create a function that checks the strength of the user password. The function should return Strong Password if all of the following conditions are true:
Eight or more characters
At least one uppercase letter.
At least one digit.
Here is what happens when the user provides a password that satisfies all three conditions:
And if the user enters a password that breaks one of the three conditions, the program returns Weak Password:
Note:  You can use the code we developed in the Bonus Example on Day 9.  For your convenience, you can find the code we developed in that video attached to the lecture resources of this article.

```python
    # answer1
    def get_cubic_meters(data):
        output = data / 1000
        return output
    liters = input("Enter liters: ")
    cubic_meters = get_cubic_meters(liters)
    print(f"{liters} L is equal to {cubic_meters} cubic L")
```

```python
    # answer2
    def check(password):
        result = {}
        is_strong = False
    if len(password) >= 8:
        result["length"] = True
    else:
        result["length"] = False
    digit = False
    for i in password:
        if i.isdigit():
            digit = True
    result["digits"] = digit
    uppercase = False
    for i in password:
        if i.isupper():
            uppercase = True
    result["upper-case"] = uppercase
    if all(result.values()):
        is_strong = True
    else:
        is_strong = False
    return is_strong
    user_data = input("Enter new password: ")
    output = check(user_data)
    if output:
        print("Strong Password")
    else:
        print("Weak Password")
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
Alina has created a speed calculation function. She traveled a total of 200 miles today which took her two hours. She wants to use her function to calculate the average speed.

```python
    def speed(distance, time):
        return distance / time      
    print(speed([200, 4]))
```

However, when she calls the function (as you see below), she gets an error:
TypeError: speed() missing 1 required positional argument: 'time'
Try fixing the code so she gets 50 as output.

Bug-Fixing Exercise 2
This time, Alina traveled 300 miles and it took her 5 hours. However, she is not getting the correct output from its function. Try fixing the code:

```python
    def speed(distance, time):
        return distance / time        
    print(speed(5, 300))
    
    # answer1
    def speed(distance, time):
        return distance / time       
    print(speed(200, 4))

    # answer2
    def speed(distance, time):
        return distance / time        
    print(speed(300, 5))
```

## FAQ

Q1: Can we let the user specify the name of the text file instead of having the program use the same todos.txt name always?
A: Technically, that is possible, but it would be a bad design idea. The name of the file is not a user's concern. It is a detail of the backend of the program. Asking the user to specify the text filename is like asking the customer in a cafe to choose the color of the container where the coffee beans should be placed. The container is part of the cafe backend, whereas the customer is only interested in the frontend components (i.e., the brewed coffee). 
    
# s13

default arguments or default parameters

```python
    def get_todos(filepath="tasks.txt"):
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(filepath, data):
        with open('tasks.txt', 'w') as file:
            file.writelines(data)
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            basket = get_todos()
            basket.append(task + "\n")
            write_todos("tasks.txt", basket)
    elif command.startswith("show"):
        basket = get_todos()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            write_todos("tasks.txt", basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            write_todos("tasks.txt", basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

to change the value instead of the default
use a different value when calling

```python
    def get_todos(filepath="tasks.txt"):
    basket = get_todos("note1.txt")
```

non default parameter
putting the default parameters to left side and non default parameters to right side
will be error
put the non default parameters to left
and default parameters to right
change both function definition and function call

```python
    def write_todos(data, filepath="tasks.txt"):
    write_todos(basket, "tasks.txt")
```

if you really want the order, specifiy the parameter name

```python
    def write_todos(data, filepath="tasks.txt"):
    write_todos(filepath="tasks.txt", data=basket)
```

shorter version

```python
    def write_todos(data, filepath="tasks.txt"):
    write_todos(basket)
```

change all function calls

```python
    def get_todos(filepath="tasks.txt"):
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(data, filepath="tasks.txt"):
        with open(filepath, 'w') as file:
            file.writelines(data)
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            basket = get_todos()
            basket.append(task + "\n")
            write_todos(basket)
    elif command.startswith("show"):
        basket = get_todos()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            write_todos(basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            write_todos(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

built in functions can have default parameters
just like inpu()
help(input)
default None
if there is no message inside
command = input()
len() don't have default parameter
help(len)
doc strings
help(len)
you get documentation
it is called doc string
right click -> implementation
fake function
doc strings are writtern in the first line
use triple quotes for both sides of the string
description of function
len calculates the number of items in the list or string or
other sequence types of objects
print(help(get_todos))

```python
    def get_todos(filepath="tasks.txt"):
        """ Read a text file and return the list of
        task items.
        """
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(data, filepath="tasks.txt"):
        """ Write the task items list in the text file."""
        with open(filepath, 'w') as file:
            file.writelines(data)
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            basket = get_todos()
            basket.append(task + "\n")
            write_todos(basket)
    elif command.startswith("show"):
        basket = get_todos()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            write_todos(basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            write_todos(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

you can also use triple quotes outside of function's first line
as a value to a variable to write multi line strings
there is no need for backslash n or special characters
because multi line strings prints it with its lines

```python
    text = """
    Principles of productivity:
    Managing your inflow.
    Systemizing everything that repeats.
    """

    print(text)
```

using normal strings with multi line there is a
need to use backslash for every line
code below will be read as a single
line except with backslash n

```python
    text = "\
    Principles of productivity: \n\
    Managing your inflow.\
    Systemizing everything that repeats.\
    "
    print(text)
```

converter
the function convert() is doing too much
decoupling functions
parse or extract
value from parse() is a tuple

```python
    feet_inches = input("Enter feet inches: ")
    def parse():
        parts = feet_inches.split(" ")
        feet = float(parts[0])
        inches = float(parts[1])
        return feet, inches
    def convert(feet_inches):  
    meters = feet * 0.3048 + inches * 0.0254
    return meters
    result = convert(feet_inches)
    if result < 1:
        print("Kid is too small.")
    else:
        print("Kid can use the slide.")
```

alternative
key value pair
value returned by parse() is a dictionary

```python
    feet_inches = input("Enter feet inches: ")
    def parse():
        parts = feet_inches.split(" ")
        feet = float(parts[0])
        inches = float(parts[1])
        return {"feet": feet, "inches": inches}
    def convert(feet_inches):  
    meters = feet * 0.3048 + inches * 0.0254
    return meters
    result = convert(feet_inches)
    if result < 1:
        print("Kid is too small.")
    else:
        print("Kid can use the slide.")
```

get value by

```python
    parse("4 12")["feet"]
    parse("4 12")["inches"]
```

use in print

```python
    feet_inches = input("Enter feet inches: ")
    def parse():
        parts = feet_inches.split(" ")
        feet = float(parts[0])
        inches = float(parts[1])
        return {"feet": feet, "inches": inches}
    def convert(feet_inches):    
    meters = feet * 0.3048 + inches * 0.0254
    return meters
    result = convert(feet_inches)
    print(f"{parse(feet_inches)["feet"]} feet and {parse(feet_inches)["inches"]} inches is equal to {result}")
    if result < 1:
        print("Kid is too small.")
    else:
        print("Kid can use the slide.")
```

shorter
we need to use single quotes inside
f string because f string used double quotes already
decouple your functions
and decouple your output as well

```python
    feet_inches = input("Enter feet inches: ")
    def parse():
        parts = feet_inches.split(" ")
        feet = float(parts[0])
        inches = float(parts[1])
        return {"feet": feet, "inches": inches}
    def convert(feet, inches):    
    meters = feet * 0.3048 + inches * 0.0254
    return meters
    parsed = parse(feet_inches)
    result = convert(parsed['feet'], parsed['inches'])
    print(f"{parsed['feet']} feet and {parsed['inches']} inches is equal to {result}")
    if result < 1:
        print("Kid is too small.")
    else:
        print("Kid can use the slide.")
```

## Coding Exercise

Coding Exercise 1
Define a function that has two parameters, year_of_birth and current_year . The current_year parameter should be a default parameter with the current year as a default value.
The function should calculate and return the age of the user given the year of birth and the current year.
Note: It is enough to define the function for this exercise -no need to call it.

Coding Exercise 2
Your task for this exercise is to use the function you created in exercise 1. Then, below the function definition, get the year of birth from the user using an input function and then call and print the defined function to get the user's age as output. Here is how the program should behave:

Coding Exercise 3
Extend the program you wrote in exercise 2 by printing a message to the user instead of their age if their age is greater than 120. Feel free to print any message that you like.

Coding Exercise 4
Write a program that gets a list of names from the user and returns the number of names given. You are encouraged to use a function. Here is how the program would work:

```python
    # answer1 to 3
    def get_age(year_of_birth, current_year=2023):
        output = current_year - year_of_birth
        return output
    data = int(input("What is your year of birth? "))
    age = get_age(data)
    if(age > 120):
        print("You are legendary!")
    else:
        print(age)

    # answer4
    def splitter(data):
        output = data.split(",")
        size = len(output)
        return size
    names = input("Enter names separated by commas (no spaces): ")
    calculated_value = splitter(names)
    print(calculated_value)
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The following formula calculates the free-fall time of an object.
h is the free-fall distance and g is the gravity. On Earth, gravity is 9.80665 m/s2.
Given the above information, we have created a program that calculates the free-fall time given the free-fall distance h and the gravity g which will be a default parameter with a value of 9.80665:

```python
    def calculate_time(g=9.80665, h):
        t = (2 * h / g) ** 0.5
        return t        
    time = calculate_time(100)
    print(time)
```

However, the script produces an error. Try running the script in your IDE and then fix the error so the program successfully calculates the free-fall time.

```python
    # answer1
    def calculate_time(h, g=9.80665):
        t = (2 * h / g) ** 0.5
        return t
    time = calculate_time(100)
    print(time)
```

## FAQ

Q1: We are storing the to-do items in a text file. What would happen if we stored them in an Excel file?
A: If we worked with Excel files instead of text files, we would need to define other functions which would contain code elements that handle Excel files. It is recommended not to delete or change the existing functions but to simply add other functions in the functions.py file. Later in the course, we will cover how to work with Excel files as well.

# s14

separate the processes
we are in main
copy all functions in the main python file
create a new python file (file name is functions.py) with any name
and put all functions in that file
put the code below in main python file
it will only work if main and the other python
file is in the same directory

```python
    from functions import get_todos, write_todos
```

another way
but longer and need . when doing function calls
functions is a module unlike in
command.strip() where command is a string

```python
    import functions
    todos = functions.get_todos()
```

if modules folder is created and python file is inside it
pycharm refactors automatically

```python
    from modules import functions
```

anatomy of python programming language
get_todos() function gives us an instance of a list

abstract concepts
these concepts are also called classes

type or a class
a blueprint
we know how to make instances of an object
by having that blueprint in our mind
that abstract concept
all these instances have their own methods
separate functions and main python file
use code below

from modules import functions

if changed in nested directory, refactor and with . notation

from modules.utilities import functions

```python
    # functions.py
    def get_todos(filepath="tasks.txt"):
        """ Read a text file and return the list of
        task items.
        """
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(data, filepath="tasks.txt"):
        """ Write the task items list in the text file."""
        with open(filepath, 'w') as file:
            file.writelines(data)
```

```python
    # main.py
    import functions
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            basket = get_todos()
            basket.append(task + "\n")
            write_todos(basket)
    elif command.startswith("show"):
        basket = get_todos()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = get_todos()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            write_todos(basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = get_todos()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            write_todos(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

even if code is outside the function definition
it will still be executed
in a file different than the main python file
imported module functions
even if the function call near it is not called
there is a way to not execute a code block
when running in main.py
but code outside it will execute
when main.py is run
and then main.py runs functions.py
through the import statement
the value of name is the name of that
file, functions.py in this case
but when functions.py is run directly and not through main.py
the value of __name__ is __main__ string
that means somebody is running this script directly
and that's somebody which is us
and that somebody wants these lines to be executed
inside the if statement
otherwise, if I'm being imported, the file says
then I will not execute this because my name
is not __main__, it is something else

```python
    # functions.py
    def get_todos(filepath="tasks.txt"):
        """ Read a text file and return the list of
        task items.
        """
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(data, filepath="tasks.txt"):
        """ Write the task items list in the text file."""
        with open(filepath, 'w') as file:
            file.writelines(data)
    print(__name__)
    print(type(__name__))
    print("I am outside!")
    if __name__ == "__main__":
        print("Hello")
        print(get_todos())
```

in the previous feet inches to meter converter
program
we can automatically create another file for the
functions to be placed in with pycharm
just select or highlight the function definition
then right click and refactor then move
type a new name
it is also not needed to have the folder name where both
files are located
since they are in the same folder level and same folder

the code below works pecause bonus is a folder included in the project
directory or pycharm directory and that directory is also
included in the namespace

from bonus.parsers14 import parse

from parsers14 import parse

converters14.py

instead of just parse() function call

parsers14.parse() can be done if import is

import parsers14

you can also just use 1 file for the 2 functions
but they are separated because they are a bit different from each
other
one is for parsing
another is for converting
maybe more parse functions will be added

check if in the middle of a value range

elif 0 < x < 100:

## Coding Exercise

Coding Exercise 1
Create a function that finds out the state of water (i.e., gas, liquid, solid) given the temperature. In other words, the function has a temperature parameter and returns either "Gas", "Liquid" or "Solid" as a string depending on the temperature. The function should be written in a separate file from the command line interface file. The output should look like in the screenshot below:
Let's run it one more time. Here is another example:
Note: To check if a value is between two values, you can use elif 0 < x < 100:

Coding Exercise 2
In coding exercise 1, we hardcoded the values 0 and 100. It is better to change them to constants in the script where the function is defined. Therefore, your task is to modify the script from exercise 1 by creating two global variables/constants in that file, one variable associated with 0 and another associated with 100. Then, use those variables in the function instead of the values.

```python
    # answer1 & 2
    # global variables should use all uppercase letters if constants
    BOILING_POINT = 100
    FREEZING_POINT = 0
    def get_state(temp):
        output = 0
        if temp <= FREEZING_POINT:
            output = "Solid"
        elif temp >= BOILING_POINT:
            output = "Gas"
        elif FREEZING_POINT < temp < BOILING_POINT:
            output = "Liquid"
        else:
            print("Please enter a temperature value.")
        return output
    import functions
    try:
        value = float(input("Enter temperature: "))
        state = functions.get_state(value)
        print(state)
    except ValueError:
        print("Error.")
```

```python
    # alternative
    def water_state(temperature):
        if temperature <= 0:
            return "Solid"
        elif 0 < temperature < 100:
            return "Liquid"
        else:
            return "Gas"
    import functions
    temperature = float(input("Enter water temperature: "))
    state = functions.water_state(temperature)
    print(state)
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The program depicted below consists of two Python files. The program tries to count and print out the number of periods in the "Trees are good. Grass is green." . However, running the main.py file returns an error. Please fix the error.

main.py:

```python
    import functions     
    nr_of_periods = count("Trees are good. Grass is green.")
    print(nr_of_periods)
```

functions.py:

```python
    def count(phrase):
        return phrase.count('.')
```

Bug-Fixing Exercise 2
The same program as in exercise 1 now is throwing yet another error. Hunt the error down and fix it.

main.py:

```python
    import functions.py     
    nr_of_periods = functions.count("Trees are good. Grass is green.")
    print(nr_of_periods)
```

functions.py:

```python
    def count(phrase):
        return phrase.count('.')
```

Bug-Fixing Exercise 3
There is another error in the same program. Please fix the error.

main.py:

```python
    from functions import count     
    nr_of_periods = functions.count("Trees are good. Grass is green.")
    print(nr_of_periods)
```

functions.py:

```python
    def count(phrase):
        return phrase.count('.')
```

```python
    # answer1 & 2
    def count(phrase):
        return phrase.count('.')
    import functions
    nr_of_periods = functions.count("Trees are good. Grass is green.")
    print(nr_of_periods)
```

```python
    # answer3
    def count(phrase):
        return phrase.count('.')
    from functions import count
    nr_of_periods = count("Trees are good. Grass is green.")
    print(nr_of_periods)
```

version control systems
git
github

## FAQ

Q1: In the app, we imported functions.py from main.py. Is it possible to import main.py from functions.py?
A: Yes, that is technically possible. You can do import main in functions.py. However, that import doesn't make much sense. We usually import the backend to the frontend. The backend is the script where the processing is done (i.e., reading and writing the to-do files), and the frontend is the code that constructs the user interface (i.e., the command line).
Q2: Can we import more than one .py file from the main.py file?
A: Yes, that is possible, and as the program expands, it is recommended to create more backend files, and you can import all those files from main.py. For example, you might want to create some functions which send out the to-do items by email to your email address. You might also want to create some functions that produce a PDF with the to-do items inside. It is recommended to write the email and the PDF functions in separate modules and then import those modules from the main module. For example, if we had these files:

main.py

functions.py

pdf.py

email.py

In main.py we would have these lines:

```python
    import functions
    import pdf
    import email
```

# s15

print() is available in the global namespace
but there is no date or time function 
in the global namespace
time module is a standard module
import time
functions is a local module
it is local because it is something we created and it is
located in the local project directory
time module is also a module
it contains code just like functions does
time module is located somewhere in the python installation directory
right click time go to then select implementations
python console
import time
time.strftime()
string from time
get current year
time.strftime(" %Y")
every other character such as space or dash, these are interpreted as
literal characters so they are printed as they are
the others are special characters
time.strftime("%m - %Y")
name of month
time.strftime("%b")
time.strftime("%b %d, %Y %H:%M:%S")

```python
    # tasks.txt
    feed the cats
    clean the plates
    read a book
    play a game
```

```python
    # functions.py
    FILEPATH = "tasks.txt"
    def get_todos(filepath=FILEPATH):
        """ Read a text file and return the list of
        task items.
        """
        with open(filepath, 'r') as file_local:
            data = file_local.readlines()
        return data
    def write_todos(data, filepath=FILEPATH):
        """ Write the task items list in the text file."""
        with open(filepath, 'w') as file:
            file.writelines(data)
```

```python
    # main.py
    import functions
    import time
    date_and_time = time.strftime("%m.%d.%y %H:%M %a")
    print("It is", date_and_time)
    while True:
        command = input("Type add, show, edit, complete or exit: ").strip()
        if command.startswith("add"):
            task = command[4:]
            basket = functions.get_todos()
            basket.append(task + "\n")
            functions.write_todos(basket)
    elif command.startswith("show"):
        basket = functions.get_todos()
        for index, item in enumerate(basket):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    elif command.startswith("edit"):
        try:
            number = int(command[5:])
            number = number - 1
            basket = functions.get_todos()
            newTask = input("Enter a new task: ")
            basket[number] = newTask + '\n'
            functions.write_todos(basket)
        except ValueError:
            print("Your command is not valid.")
            continue
    elif command.startswith("complete"):
        try:
            number = int(command[9:])
            basket = functions.get_todos()
            number = number - 1
            itemToRemove = basket[number].strip('\n')
            basket.pop(number)
            functions.write_todos(basket)
            message = f"Task {itemToRemove} was removed from the list."
            print(message)
        except IndexError:
            print("There is not item with that number")
            continue
    elif command.startswith("exit"):
        break
    else:
        print("--- Command not valid ---")
    print("--- Program finished execution ---")
```

get complete list of standard modules
in python
you can see them in the python documentation
python module index
python console
dir(time)
csv
glob
webbrowser
shutil
glob is a module
and glob() is a function
you will get the list of all text files

```python
    import glob
    myfiles = glob.glob("*.txt")
```

get files
we will get only .txt files
instead of print(myfiles)
iterate over filepaths
and do anything to the files
like printing their contents

```python
    import glob
    myfiles = glob.glob("files/*.txt")
    for filepath in myfiles:
        with open(filepath, 'r') as file:
            print(file.read().upper())
```

csv
create weather.csv
columns
it is recommended to enclose each element in double quotes
the commans denote the splits between the two columns
"Station","Temperature","Date","Precipitation" or

"Station","Temperature",
"Kuala Lumpur","45"
"New York","20"

reader() function needs a file object
reader will give us an iterator object instance
iterators are also types in python
but this iterator is not readable so
we need to convert it into a list type
so we will get an actual list and store it in data

```python
    # weather.csv
    "Station","Temperature",
    "Kuala Lumpur","45"
    "New York","20"
```

```python
    # main.py
    import csv
    with open("weather.csv", 'r') as file:
        data = list(csv.reader(file))
    print(data)
```

city
enter a city from the list of cities that
are available in our file of course
otherwise, we can't return the data we don't have
iterate
New York should be
with capital N and Y and a space
no spaces after York, otherwise you'll not get
a match

```python
    import csv
    with open("weather.csv", 'r') as file:
        data = list(csv.reader(file))
    city = input("Enter a city: ")
    for row in data:
        print(row)
```

row will become a list
skip Station row with slicing

```python
    import csv
    with open("weather.csv", 'r') as file:
        data = list(csv.reader(file))
    city = input("Enter a city: ")
    for row in data[1:]:
        if row[0] == city:
            print(row[1])
```

shutil module
shell utilities
with shutil you can
copy files, create zip files
and extract files from zip files
make_archive() needs the name of the zip file
which is output and the directory where these file are
located
it's important to have a directory with
only the files you need to put in that zip file
because all the files of that directory are going
to be included in the zip file

```python
    import shutil
    shutil.make_archive("output", "zip", "files")
```

like google search
"https://www.google.com/search?q=" + user_term

```python
    import webbrowser
    user_term = input("Enter a search term: ")
    webbrowser.open("https://www.google.com/search?client=firefox-b-d&q=" + user_term)
```

```python
    # alternative
    import webbrowser
    user_term = input("Enter a search term: ").replace(" ", "+")
    webbrowser.open("https://www.google.com/search?client=firefox-b-d&q=" + user_term)
```

JSON
when building a program
you first want to think about the output
so once you have a clear idea of what the output will be
then next is the data structure you want
you can use a list
or a list of list
first row then second row with 2 other files and so on

[["Buy grocery", "Clean the trash"], []]

the list was also generated from that csv file
the problem now is our data structure is a bit more complex
it's not as flat as the todos.txt file or the csv file
a question object is not just a string
it is a nested structure
it is better to have a dictionary
it is not a good idea to store data in a python file
below is the data structure

```python
    a = [{"question_text": "What are dolphins?",
      "alternatives":["Amphibians", "Fish", "Mammals", "Birds"],
      "correct_answer": 3},
    {"question_text": "What occupies most of the Earth's surface?",
     "alternatives": ["Land", "Water"],
     "correct_answer": 2}]
    print(a)
```

create questions.json
or use .txt
both work but the convention is to use
.json
without the variable

```python
    # questions.json
    [{"question_text": "What are dolphins?",
      "alternatives": ["Amphibians", "Fish", "Mammals", "Birds"],
      "correct_answer": 3},
    {"question_text": "What occupies most of the Earth's surface?", 
      "alternatives":  ["Land", "Water"],
      "correct_answer": 2}]
```

main python file
import json
we use read()
not readlines()
string will be printed

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    print(content)
```

json.loads() means load string

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    print(data)
```

use type
str
list

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    print(type(content))
    print(type(data))
```

iterate

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    for question in data:
        print(question["question_text"])
        for alternative in question["alternatives"]:
            print(alternative)
```

add index and enumerate
in nested for loop
in mother for loop
we can do alot of things with user_choice but
the recommended way is to
inject user_choice in the current data structure
the current data structure is stored in the data variable
so it is a list
add a 4th dictionary to the question dictionary w/ 3 items
and it is user_choice
if you create a dictionary like
{"a": 1}
and save it to a variable
x = {"a": 1}
adding a 2nd dictionary to x is
x["u"] = 2
x
x will cointain a and u key pair
data won't be used because it is the entire list
and question is the current dictionary

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    for question in data:
        print(question["question_text"])
        for index, alternative in enumerate(question["alternatives"]):
            print(index + 1, "-", alternative)
        user_choice = int(input("Enter your answer: "))
        question["user_choice"] = user_choice
    print(data)
```

we want to calculate the score

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    score = 0
    for question in data:
        print(question["question_text"])
        for index, alternative in enumerate(question["alternatives"]):
            print(index + 1, "-", alternative)
        user_choice = int(input("Enter your answer: "))
        question["user_choice"] = user_choice
        if question["user_choice"] == question["correct_answer"]:
            score = score + 1
    print(data)
    print(f"You got {score} correct answers out of {len(data)} questions")
```

we can print data to show what are the answers picked by users
and what answers are corrent for each question
but the data is not readable or user friendly
so we need to parse
inside f string should be single quotes
because f string is using double quotes

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    score = 0
    for question in data:
        print(question["question_text"])
        for index, alternative in enumerate(question["alternatives"]):
            print(index + 1, "-", alternative)
        user_choice = int(input("Enter your answer: "))
        question["user_choice"] = user_choice
        if question["user_choice"] == question["correct_answer"]:
            score = score + 1
    for question in data:
        message = f"Your answer is {question['user_choice']}, " \
                  f"Correct answer is {question['correct_answer']}"
        print(message)
    print(f"You got {score} correct answers out of {len(data)} questions")
```

you could also integrate the number here
to get the number of question
do enumerate
for more complex data structures
you can use json data
so data which are made of lists
and dictionaries and they are put in this json files
are called json data
this data can then be interpreted by python using this json module
the json module gets the data from this file as simple text file and it converts
them into proper data structure, in this case, a list

```python
    import json
    with open("questions.json", 'r') as file:
        content = file.read()
    data = json.loads(content)
    for question in data:
        print(question["question_text"])
        for index, alternative in enumerate(question["alternatives"]):
            print(index + 1, "-", alternative)
        user_choice = int(input("Enter your answer: "))
        question["user_choice"] = user_choice
    score = 0
    for index, question in enumerate(data):
        if question["user_choice"] == question["correct_answer"]:
            score = score + 1
            result = "Correct Answer"
        else:
            result = "Wrong Answer"
        message = f"--- Question #{index + 1} - {result} - Your answer is {question['user_choice']}, " \
                  f"Correct answer is {question['correct_answer']} ---"
        print(message)
    print(f"--- Score: {score} out of {len(data)} questions ---")
```

this square brackets in json file could have also been
curly brackets
so this entire thing could have been 1 dictionary made of differnt
dictionaries
so I just changed the data structure from a list of dictionaries to a
dictionary of dictionaries
bonus is a folder where json data is located
py console
import json
with open("bonus/questions.json", 'r') as file:
    content = file.read()

x = json.loads(content)
x
type(x)

x is going to be a dictionary
but in our program
data here was a list
so data type is automatically assigned depending on the first
brackets here which could be square
or curly brackets

```python
    # questions.json
    {"question1":{"question_text": "What are dolphins?",
      "alternatives":["Amphibians", "Fish", "Mammals", "Birds"],
      "correct_answer": 3},
    "question2": {"question_text": "What occupies most of the Earth's surface?",
     "alternatives": ["Land", "Water"],
     "correct_answer": 2}}
```

if keys are removed inside the brackets
and only value remains, it will be error syntax

```python
     # questions.json
    {{"question_text": "What are dolphins?",
      "alternatives":["Amphibians", "Fish", "Mammals", "Birds"],
      "correct_answer": 3},
    {"question_text": "What occupies most of the Earth's surface?",
     "alternatives": ["Land", "Water"],
     "correct_answer": 2}}
```

I didn't use a dictionary of dictionaries here because as I explained
to you in the beginning,
all the questions are the same
therefore, we don't need to say
that this is question1 and this is question2
we just have a list of dictionaries because
all questions are questions of the same object
Throughout the next few days, we will gradually migrate from coding exercises to a new type of activity - projects. Projects will require you to code longer scripts. Projects will finally replace coding exercises on Day 20. Today, we will have a coding exercise that looks more like a (small) project. Please read the instructions below.
Coding Exercise 1
Your task is to create a program that generates a random whole number. Here is how the program should behave:
As you can see, the program first asks the user to enter a whole number. Then, once the user enters a number, the program asks the user again to enter another number.
Then, the program returns a random number that falls between the two whole numbers. Here is another example:
Note: To create this program, you might need to do some internet research or use the Python module index to find out what module and what function of that module you can use to generate random numbers. While it is easy for me to provide some clues here on what module you should use, searching for information and becoming familiar with programming community sites such as Stackoverflow is part of the programming skillset you should acquire. Thus, it is essential to practice such skills as well so you are independent after you finish the course. 

```python
    # answer1
    import random
    minimum = 0
    maxmium = 9
    minimum = int(input("Enter minimum value: "))
    maximum = int(input("Enter maximum value: "))
    print(random.randint(minimum, maximum))
```

```python
    # random
    import random
    import string
    alpha = string.ascii_lowercase + string.digits
    x = 0
    while x < 10:
        output = ""
        while len(output) < 16:
            output = output + str(random.choice(alpha))
        print(output)
        x = x + 1
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
Please have a look at the following scripts:

parsers.py

```python
    def parse(user_input):
        """Extract the values split by a comma in a string
        and return the two values via a dictionary.
        """
        # Get the two values in a list
        parts = user_input.split(" ")       
        # Store the two values in variables 
        lower_bound = float(parts[0])
        upper_bound = float(parts[1])        
        # Inject the values in a dictionary
        return {"lower_bound": lower_bound, "upper_bound": upper_bound}
```

main.py

```python
    from parsers import parse 
    import random     
    # Ask the user to enter a lower and an upper bound divided by a comma
    user_input = input("Enter a lower bound and an uppwer bound divided a comma (e.g., 2,10)")     
    # Parse the user string by calling the parse function
    parsed = parse(user_input)     
    # Pick a random int between the two numbers
    rand = random.randint(parsed['lower_bound'], parsed['upper_bound'])     
    print(rand)
```

When the user executes main.py file, an error is produced. Place the two files in your IDE and try to debug the program.

```python
    # answer1
    # parsers.py
    def parse(user_input):
    """Extract the values split by a comma in a string
    and return the two values via a dictionary.
    """
    # Get the two values in a list
    parts = user_input.split(",")
    # Store the two values in variables 
    lower_bound = int(parts[0])
    upper_bound = int(parts[1])
    # Inject the values in a dictionary
    return {"lower_bound": lower_bound, "upper_bound": upper_bound}
```

```python
    # main.py
    from parsers import parse 
    import random
    # Ask the user to enter a lower and an upper bound divided by a comma
    user_input = input("Enter a lower bound and an uppwer bound divided a comma (e.g., 2,10)")
    # Parse the user string by calling the parse function
    parsed = parse(user_input)
    # Pick a random int between the two numbers
    rand = random.randint(parsed['lower_bound'], parsed['upper_bound'])
    print(rand)
```

git
version control system
it is a software you need to install in your computer
and then you connect it to the project you're
working on and it will allow you to see and manage different versions
of your program so you can see
the code as it was a different timestamps
before we go ahead and download and install it
go to terminal in pycharm (or use shortcut alt + f2)
use command below in terminal of pycharm

```python
    git
```

if error
go to https://git-scm.com/ or search git in google
in linux and mac, it is pretty straightforward
if mac

```python
    brew install git
```

you need to install homebrew in your mac
if in linux

```python
    sudo apt-get install git
```

for windows

https://git-scm.com/ -> Download for Windows

https://git-scm.com/download/win

Standalone Installer -> 64-bit Git for Windows Setup

or download latest

Git-2.40.1-64-bit

you can leave the default options as they are
when installing git

select notepad as default editor


we're not going to use default editior because
we're using git inside pycharm

therefore this option is not really important here

let git decide

git from the command line and also from 3rd-party software

we're going to use git through pycharm so above option is important

use bundled openssh

use the openssl library

checkout windows-style, commit unix-style line endings

use mintty (the default terminal of msys2)

default (fast-forward or merge)

git credential manager

enable file system caching

don't use any experimental options

install

finish

close the pycharm terminal

and open it

type inside pycharm terminal to display available git commands

```python
    git
```

integrate git with our pycharm project

in pycharm go to

vcs -> enable version control integration

select git

file names in left side turn red

that means git is now integrated

red color means that these files are not included
in the version control system

so git is not tracking these files
we need to do something to track the files in red
to add them to the version control registry
also called a repository

so now git has some folders somewhere where
it keeps track of the files you have

so it has a list of files

it sees what files you have here, what folders you
have, so it keeps track of them

and we need to tell git

now keep track of these files in red

to do that, you want to do something called a
commit operation

you can execute a commit operation using this green tick
mark in here
or a green check mark in top right with git label
so press that, once I press that,
that is going to open this window here on the side of
pycharm

enter a description

Initial commit

this is known as the commit message

here you want to write something meaningful and short

it is recommended to be the length of a normal sentence

so you want to describe what you did

so what we're going here is we are creating a timestamp

we did some changes, so we created the initial project
and we create a timestamp
and then we can go back to this timestamp later on
and as the first message of the first timestamp,
we usually write initial commit
press commit, however, when we press and commit,
we get this message select files to commit
up here you'll see this checkbox
unversioned files
if you expand this dropdown, you're going to see
all the files you have in your project directory
git ignore file is created by git automatically
files from pycharm automatically created
some settings files
and these settings files actuall are things
that we don't need to include in the version control system
we're only interested to include the files of our projects
so what I want to do now is I want to suspend this
I will not check any of these files
I just want to minimize this
and then go to the project directory
right click venv -> git -> add to gitignore -> add to gitignore
not this is asking us if we want to create a git ignore file
so we want to press and create
and now you see that a dot git ignore file was created
and it's here in the project directory you see that dot git ignore
now this is saying if you want to add this dot git ignore file
to git you want to press add
so what I did is that I added to this venv folder
to git ignore file
that means this folder is not going to be tracked by the vcs
so git will ignore this folder
similarly, we can ignore that hidden dot idea folder
which had all those pycharm settings files
so you don't want that as well
and if you like, you can also ignore the bonus folder,
you just name the folder name there
and so
if you want to ignore a file for example to do dot txt
you write the name of the file
of course we don't want to ignore
tasks.txt because that is part of our project
bonus folder is not part of the project
those are separate files
I don't want them in my git repository
so again you want to go back to that commit window now
you can go either here at this tab left most beside
project tab
or you could go to that button again, commit and it will
take you here
now you see that dot git ignore is checked by default
and that is because we pressed that add button
here when we created that git ignore
pycharm asks if you want to add that git ignore
we press on that that is why this was checked by pycharm
to add the other files
you can either check them
in here one by one or you can click on this always add
option here at bottom right and those
will be checked by default
I would like to do things manually,
so I'll just check everything that I know what I'm doing
check funtions.py
main.py
tasks.txt
and finally we're ready to press that commit button
so press and commit
here you want to specify a username,
so just choose something and put your email address
here (set properties globally is checked)
and then press on set and commit
now this password and email address are only asked
to the first time
you'll not get asked again in the future
press set and commit and we are done
so I see this message here bottom left 4 files
committed initial commit so we commit a dot ignore main.py
functions.py tasks.txt
what that means is all these 4 files now are tracked by git
that means if I go to main.py and I add something
for example above this is now print function
add another print
anytime you add features, you want to do a commit
so you want to record that milestone
go to the commit button again green check tick mark
press it
main.py is automatically checked
so git automatically found out that
we made a change to this file
so the next time we commit as we're doing now,
git notices that we have done a change between the last
commit and this commit and you want to leave that checked
and you want to write a message
Add time label feature
so this is how messages should look like
it's recommended to use present tense or verbs
try to start your sentences with a verb
so that is what you did in this commit and press commit
then you can close this tab (commit tab) by
pressing the tab there
now then, if you go to this,
git tab down here, bottom left, press it
you're going to see all the commits you have done in your project
so if you press in one commit, for example,
I press over add the label feature here on the right,
you're going to see the files you have changed in that commit
so that was main.py file
if I double click main.py
it's going to show me side by side the current file here on the right
and the previous version of that file here on the left
so you see here we don't have that print function
but here we have it
but now what if you want to go back to the state
of the program as it was in the initial commit?
so if I press on initial commit, you see that
main was like that
there was no that feature here which prints out it is
time that new label
so how can you go back to one timestamp
to one commit
close comparison files
go to main.py file current version now

there are 2 commands you can use to go
back to a previous commit
one is checkout and one is reset
git checkout and git reset
when do you use git checkout and when
would you use git reset?
to do a git checkout
you can right click over the commit you want
to go to
so you want to retrieve the program as it
was in that commit right
click and then go to [Checkout Revision]
click that
now you're going to see
that that print function,
which was somewhere in here, has disappeared
so now you're looking at the previous version
of the program as it was when you did
the initial commit
here you'll see this yellow tag with an
exclamation mark
after it
that tag showed up when I press on that checkout
option
so that means this is now the current version of the
program
the thing is, this add time label feature
is still a commit and it is still standing there
so the checkout command is not the actual
command you should use if you want
to permanently go back to this commit
so checkout is simply to quickly
see the state of the program as it was
so you can also execute the program, if you like,
and you're going to see the output
of this current state
but, if you want to have the permanent changes,
then you want to use a reset command
so checkout is simply to check a previous
version and then go back to the
master head
so the head is the latest commit
so now we are currently in here (yellow tag)
you see the tag, but then you want to click
right click here after you have seen that previous
state (click or select the latest commit then
right click on it)
checkout latest commit -> master
you'd see that now the yellow tag went back
to the first commit
so now you see that print function
is here again
the time is below
now the reest command is different
if you right click over initial commit
and you go to [Reset Current Branch To Here]
then you want to go to hard and if you press
reset now that commit disappears
so basically you go to the previous
state of the program permanently therefore checkout
is particularly useful especially now that
you are learning
so each day you can make a commit and you have
all these commits recorded for each day
so then maybe you want to go back to a date
just to checkout the code, see it or run it,
and then you can checkout the latest branch again
so how often do you do commits in real life
it depends you'll get used to that with experience
but basically if you add something and it works
so you make some changes, you run the code
it works then you make a commit
the changes could be changes of the existing codes
or adding new code
so both could require a commit
basically during the day you might have several commits
depending on how much you code and that's it
so if I close pycharm now I exit
open again
and of course the commits are still there
so in this git tab you can access the commit
we have only one commit now because
we reset it to this commit
so all other commits have disappeared
the other commits above this commits have disappeared
commit
checkout
reset
locally this time
with github can synchronize code

## FAQ

Q1: Why are some standard modules written in C and others written in Python?
A: Usually, modules are prototyped in Python, but later they may be rewritten in C to speed them up.
Q2: Are there other modules besides the ones listed on the Python Module Index page?
A: The list of modules on the Python Module Index page is the complete list of standard modules. These modules come shipped with the Python interpeter. However, there are other third-party modules created by the vast Python community. Such third-party modules need to be installed first and then used. We will cover third-party modules later in the course.

```python
    # .gitignore
    /venv/
    .idea
    bonus
    tasks.txt
```

# s16

gui python
to do app
only need to write front end
back end is the functions.py
use functions
to make modifying the main program easier
or extend it
so it would be much harder to create gui
but with functions, things are separated,
so things are decoupled
the front end, which is this, which creates the
command line interface, is decoupled from the
back end, which does the processing
so this interacts with the data
task.txt and gives us the data in a well structured
format such as a python list
front end is the code base that constructs the user interface
back end is the back end is also the code base which
does the process part
and communicates with the front end, sending data to
the front end code base
window
label
input text box
button
go to refactor -> rename
rename main.py of todo app into cli or other name (but not main.py)
press refactor
we generally use main.py when we only have 1 front end
and we know that main.py is the entry point of our app
so that's the script we acctually execute with python
so we don't execute functions.py, we execute main.py
but now since we are developing more than 1 interface
create a new python file
call it gui
or gui.py but no need for .py part in pycharm
a window dialog will pop up
add file to git
this window shows up if you have enabled git in your project
in your pycharm project
press add
that will add gui.py in the list of versioned files
so git is going to keep track of this file if we
press add here
more advanced library
3rd party module or library

pypy.org

search pysimplegui

PySimpleGUI 4.60.1

click link to go to homepage of library

you will see pip install PySimpleGUI at top

different ways to install packages

when using pycharm

go to preferences or settings

go to Project: app1 (or other project name)

expand it

go to python interpreter

you will see the list of 3rd party python libraries
these are by default included
pip
setuptools
wheel

you can add more using the plus icon
search for pysimplegui
1 word no spaces and install that package
PySimpleGUI

press install package button

you will see installtion success after waiting

close window

press ok

right click PySimpleGUI beside import in pycharm
click go to
implementation to see .py file of library
this file is importing other python files from other places

```python
    # gui.py
    import functions
    import PySimpleGUI
```

another way to install
go to terminal in pycharm
Terminal: Local
(venv) as@ASs-MacBook-Pro app1 %

```python
    pip install PySimpleGUI
```

pip is also a 3rd party library for python
pip is used to install other 3rd party libraries
so it's available in the command line
there will be error
that is mostly the case when you have different python
installations on your computer
use pip3 instead

```python
    pip3 install PySimpleGUI
```

```python
    Collecting PySimpleGUI
      Downloading PySimpleGUI-4.60.5-py3-none-any.whl (512 kB)
    Installing collected packages: PySimpleGUI
    Successfully installed PySimpleGUI-4.60.5
    [notice] A new release of pip available: 22.3.1 -> 23.1.2
    [notice] To update, run: python.exe -m pip install --upgrade pip
```

you only have to do this if the other installation method
didn't worked for you
graphical installer
this is also useable if in another ide other than pycharm
if not running, use

```python
    pip3.10 install PySimpleGUI
```

if you have python 3.10
PySimpleGUI.Window is a type just like a list or str
this is not a function call
to put values in it, type inside the ()
it will give the title of window
layout with empty string
put the instance to a variable any name
it is window
use window.read() of that instance
it displays the window on screen
.read() is a method associated to the instance
it is not a function
then once you display the window,
you then want to close it with window.close()
there will be an error
max() arg is an empty sequence
it is a sequence error
the layout argument need a list
lists are sequences
[]
but it will produce an error
it is empty so it need to have something inside
add an empty string
[""]

```python
    # gui.py
    import functions
    import PySimpleGUI
    window = PySimpleGUI.Window("My To-Do App", layout=[""])
    window.read()
```

add label
text instance is a type that is not a str type
text instance can also have string but it need to be string
text instance need string value
might not work with list as value inside below
PySimpleGUI.Text()

```python
    # gui.py
    import functions
    import PySimpleGUI
    label = PySimpleGUI.Text("Enter a task")
    window = PySimpleGUI.Window("My To-Do App", layout=[""])
    window.read()
```

as sg
for PySimpleGUI shorter version
input text can be empty

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task")
    window = sg.Window("My To-Do App", layout=[""])
    window.read()
```

connect to window
put inside another square brackets
layout label input_box
square brackets indicates 1 row
for layout

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task")
    window = sg.Window("My To-Do App", layout=[[label, input_box]])
    window.read()
```

2 rows
close the program in the gui window before
rerunning again
if we press the button
nothing will happen and the program will close
we must connect the button to a function
when window.read() is the current code line, it will
wait for an event
before the window.close() is encountered
commit changes
use the commit button on top right of pycharm
green check mark
files are already checked or selected by default
write commit message
Create basic GUI without interactions day 16
why commit
because I think this is a milestone
so I commit now and later, if I want to got back to this milestone
I can
so git allows me to see the code as it was at this point
press commit
commit was successful

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task")
    add_button = sg.Button("Add")
    window = sg.Window("My To-Do App", layout=[[label], [input_box, add_button]])
    window.read()
```

stop the gui program using pycharm stop button red square
at top right
later on, we're going to create an executable file of this
program, which means that you will not
need python to execute this program
anyone can get the program and they can use it
on their computer
they don't need to have python installed
they don't need to know python
so it's going to be a distributable file
removing square brackets in layout will be an error
the error says
your row is not an iterable (e.g. a list)
the list has to have other lists inside
so the error is a flat list with other items,
but you need to have another square of brackets and
then you can put the PySimpleGUI widgets inside
those square brackets

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task")
    add_button = sg.Button("Add")
    window = sg.Window("My To-Do App", layout=[label, input_box, add_button])
    window.read()

    # one row
    window = sg.Window("My To-Do App", layout=[[label, input_box, add_button]])

    # error
    window = sg.Window("My To-Do App", layout=[["hey", 1, add_button]])
```

inside layout should be PySimpleGUI widget types
so that is a specific type
file compressor or file zipper
first choose button for select files to compress
by holding the shift key and selecting multiple files
absolute file paths are shown in the text box

```python
    # file zipper
    import PySimpleGUI as sg
    select_files = sg.Text("Select files to compress:")
    files_input = sg.Input()
    files_button = sg.FilesBrowse("Choose")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose")
    compress_button = sg.Button("Compress")
    window = sg.Window("File Compressor", layout=[[select_files, files_input, files_button],[select_destination, folder_input, folder_button],[compress_button]])
    window.read()
    window.close()
```

sg.Text
Text is a type
usually, types start with an uppercase letter

```python
    # converter.py
    import PySimpleGUI as sg
    feet_label = sg.Text("Enter feet:")
    feet_input = sg.Input()
    inches_label = sg.Text("Enter inches:")
    inches_input = sg.Input()
    convert = sg.Button("Convert")
    window = sg.Window("Converter", layout=[[feet_label, feet_input],
                                            [inches_label, inches_input],
                                            [convert]])
    window.read()
    window.close()
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1

```python
    import PySimpleGUI as sg     
    label = sg.Text("What are dolphins?")
    option1 = sg.Radio("Amphibians", group_id="question1")
    option2 = sg.Radio("Fish", group_id="question1")
    option3 = sg.Radio("Mammals", group_id="question1")
    option4 = sg.Radio("Birds", group_id="question1")     
    window = sg.Window("File Compressor",
                       layout=[[label],
                               [option1, option2, option3, option4],
                               ])     
    window.read()
    window.close()
```

The script above generates the output below:
Change the script so that the output below is generated instead:

```python
    # answer1
    import PySimpleGUI as sg
    label = sg.Text("What are dolphins?")
    option1 = sg.Radio("Amphibians", group_id="question1")
    option2 = sg.Radio("Fish", group_id="question1")
    option3 = sg.Radio("Mammals", group_id="question1")
    option4 = sg.Radio("Birds", group_id="question1")
    window = sg.Window("Quiz",
                       layout=[[label],
                               [option1], [option2], [option3], [option4],
                               ])
    window.read()
    window.close()
```

GitHub
a repository is a project
create a repository
private
don't create a readme file
copy url
https
https://github.com/straipii/todo-app.git
go to pycharm
so now we want to connect our project with that remove url
so that our project is uploaded to that remote url
to that repository to connect our project
go to git menu at top most button
manage remotes
press plus icon
leave the origin name as is
and then pase the url that we got from the repository
press ok
press log in via github
pycharm is trying to authenticate you
to make sure that you have access to that repository
authorize in github
authorize JetBrains IDE integration
enter password of github accout
press ok in pycharm
if you go to pycharm preferences or settings
go to version control
github
you will see the accout of github
so what can we do now with github?
well, so far we have been doing these commits
so any time we add some features, maybe we do some code changes, we do a commit,
we register that change or that new feature, the code for that new feature or
the codes for that change
we reduce those changes in git through a commit
and then by the end of the day, once you have done several commits
and you feel like you did a lot,
then you can do a push to github
we have a different button which is push
a green arrow pointing up right
press that button
you're going to see the list of commits here
which you haven't pushed yet
to github
so leave that as it is and just press push
and what that is going to do is it's going to upload the newest files,
the newest version of the files
to github
you see, I got this message pushed master to a new branch origin master
go to github now
wait a while, maybe a few seconds
and then refresh the page
you will see the repository have new files
so in github, these are all the files we have included
in the version control
all the files that we have included
in git so git
is associated with github, so github will get only the files
you have added to git
if you click commit button, you can see the history of commit
press a right most last button to see the state in that commit
you can also do that in pycharm with checkout revision
and that will display the files as they were in the initial commit

## FAQ

Q1: I want to give the app to someone else to use it, but that person does not have Python installed. How can that person use the app?
A: You need to convert the .py file into an .exe (for Windows users), an .app file (for Mac users) or a .deb file (for Linux users). You will learn how to do that on Day 18.
Q2: The GUIs we are building work only as desktop programs. How can we make a web app?
PySimpleGUI is only able to create desktop GUIs. To make web apps, you need to use a Python web framework. The most popular web frameworks are Django, Flask, and Streamlit. In fact, Python is way better for building web apps. We will eventually build a Todo List web app on Day 19.

# s17

make gui bigger
implement add button
for those who are using git
click git tab
make sure the yelloy tag is together
with blue tag on top most commit
if tag is in another commit
right click latest commit and checkout
master
font value is a tuple
79 characters per line recommended in python code

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task")
    add_button = sg.Button("Add")
    window = sg.Window("My To-Do App",
                        layout=[[label],
                        [input_box, add_button],
                        font=('Helvetica', 20)])
    event = window.read()
    print(event)
    window.close()
```

value of event is a tuple
('Add', {0: 'Hi'})

Add is label of button
next is dictionary with key and value
change key name in input

```python
    input_box = sg.InputText(tooltip="Enter task", key="task")
```

add and change

```python
    event, values = window.read()
    print(event)
    print(values)
    window.close()
```

same in python console
each will be assigned 1 value

```python
    x, y = (3, 4)
    x
    y
```

put in a loop

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add")
    window = sg.Window("My To-Do App",
                        layout=[[label],
                        [input_box, add_button],
                        font=('Helvetica', 20)])
    while True:
        event, values = window.read()
        print(event)
        print(values)
    window.close()
```

add match event case add
add another case to avoid error when closing

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add")
    window = sg.Window("My To-Do App",
                        layout=[[label],
                        [input_box, add_button],
                        font=('Helvetica', 20)])
    while True:
        event, values = window.read()
        print(event)
        print(values)
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
          case sg.WIN_CLOSED:
              break
    window.close()
```

commit changes
create new commit message
Implement the Add button
you can also do a push operation
to upload your changes, your files to github
to synchronize your project with github
but I usually do this by the end of the day
once I have done several commits

create a list box
edit button
values is dictionary
when clicked on list of tasks, tasks is the event name
when edit button is pressed, event name turns into edit
list of tasks must be updated after pressing the button in real time
when an item in list is selected, update the text box input
the event is tasks
commit
implement the edit button
commit anyway
push
refresh github to see the new files

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add")
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    window = sg.Window('My Tasks',
                       layout=[
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read()
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
      case "Edit":
          task_to_edit = values["tasks"][0]
          new_task = values["task"]
          tasks = functions.get_todos()
          index = tasks.index(task_to_edit)
          tasks[index] = new_task
          functions.write_todos(tasks)
          window["tasks"].update(values=tasks)
      case "tasks":
          window['task'].update(value=values["tasks"][0])
      case sg.WIN_CLOSED:
          break
    window.close()
```

break test
press close button in window of gui
only then will print("Bye") will execute

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add")
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    window = sg.Window('My Tasks',
                       layout=[
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read()
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
      case "Edit":
          task_to_edit = values["tasks"][0]
          new_task = values["task"]
          tasks = functions.get_todos()
          index = tasks.index(task_to_edit)
          tasks[index] = new_task
          functions.write_todos(tasks)
          window["tasks"].update(values=tasks)
      case "tasks":
          window['task'].update(value=values["tasks"][0])
      case sg.WIN_CLOSED:
          break
    print("Bye")
    window.close()
```

change 1 case
exit() is a python built in function and stops the program completely
exit() will skip anything else below it when executed

```python
    case sg.WIN_CLOSED:
        exit()
```

layout
use a variable for layout
useful for dynamically creating gui or list of widgets
intermediate variable

```python
    button_labels = ["Close", "Apply"]
    layout = []
    for bl in button_labels:
      layout.append([sg.Button(bl)])
    layout = [
             [label],
             [input_box, add_button],
             [list_box, edit_button]]
    window = sg.Window('My Tasks',
                       layout=layout,
                       font=('Helvetica', 20))
```

file compressor
absolute file path
key value pair
absolute directory
destination folder
dictionary of 4 pairs
it is common practice to show the paths of chosen files
in a text box
it is a string, not a list
use split() to return a list
create another python file named zip_creator

```python
    import PySimpleGUI as sg
    select_files = sg.Text("Select files to compress:")
    files_input = sg.Input()
    files_button = sg.FilesBrowse("Choose", key="files")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose", key="folder")
    compress_button = sg.Button("Compress")
    output_label = sg.Text(key="output", text_color="white")
    window = sg.Window("File Compressor",
                       layout=[[select_files, files_input, files_button],
                               [select_destination, folder_input, folder_button],
                               [compress_button, output_label]])
    while True:
        event, values = window.read()
        print(event, values)
        filepaths = values["files"].split(";")
        folder = values["folder"]
    window.close()
```

shutil is not as powerful as zipfile standard library
zipfile gives you more flexibility to work with zipped files
shutil is limited
it asks you to specify the name of a file
and then the name of the compressed file but it doesn't allow
you to select any folder where you put your compressed file
iterate files using file paths argument
zip file type
we are creating a zip file that's why 'w' mode
if you want to extract the files an already existing zipped file
use read mode
use archive or file as variable name
iterate
archive is the zip file object instance
archive.write() is a method that expects a file path
dest folder is in the same directory with zip_creator.py
create new directory with dest name
dest_dir should be the path to the zipped file that will be
created, not the path to the directory

```python
    #zip_creator.py
    import zipfile
    def make_archive(filepath, dest_dir):
        with zipfile.ZipFile(dest_dir, 'w') as archive:
            archive.write(filepath)
    if __name__ == "__main__":
        make_archive(filepaths=["test1.py", "test2.py"], dest_dir="dest")
```

change dest_dir

```python
    #zip_creator.py
    import zipfile
    def make_archive(filepath, dest_dir):
        with zipfile.ZipFile(dest_dir + "/" + "compressed.zip", 'w') as archive:
            archive.write(filepath)
    if __name__ == "__main__":
        make_archive(filepaths=["test1.py", "test2.py"], dest_dir="dest")
```

or use pathlib
for intelligent concatenating of path that changes depending on os
in python console
import pathlib
a = pathlib.Path("dest", "compressed")
a

```python
    #zip_creator.py
    import zipfile
    import pathlib
    def make_archive(filepath, dest_dir):
        dest_path = pathlib.Path(dest_dir, "compressed.zip")
        with zipfile.ZipFile(dest_path, 'w') as archive:
            for filepath in filepaths:
                archive.write(filepath)
    if __name__ == "__main__":
        make_archive(filepaths=["test1.py", "test2.py"], dest_dir="dest")
```

import zip_creator.py
there is a problem
the entire path is included after succesfully making a zipped file
to make the file structure inside the zipped file simple
remove subfolders

```python
    # file_compressor.py
    import PySimpleGUI as sg
    from zip_creator.py import make_archive
    select_files = sg.Text("Select files to compress:")
    files_input = sg.Input()
    files_button = sg.FilesBrowse("Choose", key="files")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose", key="folder")
    compress_button = sg.Button("Compress")
    output_label = sg.Text(key="output", text_color="white")
    window = sg.Window("File Compressor",
                       layout=[[select_files, files_input, files_button],
                               [select_destination, folder_input, folder_button],
                               [compress_button, output_label]])
    while True:
        event, values = window.read()
        print(event, values)
        filepaths = values["files"].split(";")
        folder = values["folder"]
        make_archive(filepaths, folder)
    window.close()
```

arcname
get filepath by using pathlib
convert it into a more specialized type of object used
for paths
filepath.name
only extracts the name of that path

```python
    #zip_creator.py
    import zipfile
    import pathlib
    def make_archive(filepath, dest_dir):
        dest_path = pathlib.Path(dest_dir, "compressed.zip")
        with zipfile.ZipFile(dest_path, 'w') as archive:
            for filepath in filepaths:
                filepath = pathlib.Path(filepath)
                archive.write(filepath, arcname=filepath.name)
    if __name__ == "__main__":
        make_archive(filepaths=["test1.py", "test2.py"], dest_dir="dest")
```

add message
output label is empty
output_label = sg.Text()

```python
    # file_compressor.py
    import PySimpleGUI as sg
    from zip_creator.py import make_archive
    select_files = sg.Text("Select files to compress:")
    files_input = sg.Input()
    files_button = sg.FilesBrowse("Choose", key="files")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose", key="folder")
    compress_button = sg.Button("Compress")
    output_label = sg.Text(key="output", text_color="white")
    window = sg.Window("File Compressor",
                       layout=[[select_files, files_input, files_button],
                               [select_destination, folder_input, folder_button],
                               [compress_button, output_label]])
    while True:
        event, values = window.read()
        print(event, values)
        filepaths = values["files"].split(";")
        folder = values["folder"]
        make_archive(filepaths, folder)
        window["output"].update(value="Compression completed!")
    window.close()
```

## Coding Exercise

Coding Exercise 1
Create a desktop GUI program that gets feet and inches from the user and outputs the results in meters.

```python
    # answer1
    import PySimpleGUI as sg
    import feet_inches_functions as util

    feet_label = sg.Text("Enter feet:")
    feet_input = sg.Input(key="feet")

    inches_label = sg.Text("Enter inches:")
    inches_input = sg.Input(key="inches")

    convert_button =sg.Button("Convert")
    output_label = sg.Text(key="output")

    window = sg.Window("Feet Inches Converter",
                       layout=[[feet_label, feet_input],
                               [inches_label, inches_input],
                               [convert_button, output_label]])

    while True:
        event, values = window.read()
        meters = util.convert(float(values["feet"]), float(values["inches"]))
        window["output"].update(value=f"{meters} m", text_color="white")

    window.close()
```

Coding Exercise 2
Define a function that converts fluid ounces to milliliters knowing that 1 fluid ounce is equal to 29.57353 milliliters. For example, I was to call your function with foo(1) I would get an output of 29.57353. If I called it with  foo(5) I would get 147.86765, and so on.

```python
    # from ounces to ml
    # 1 fluid ounce = 29.57353 ml
    MILLILITERS_PER_OUNCE = 29.57353
    def converter(data):
        output = data * MILLILITERS_PER_OUNCE
        return output
```

## Bug-Fixing Exercise

Bug-Fixing Exercise 1
The program down below is supposed to convert kilometers to miles.

```python
    import PySimpleGUI as sg
     
     
    def km_to_miles(km):
        return km / 1.6
     
     
    label = sg.Text("Kilometers: ")
    input_box = sg.InputText(tooltip="Enter todo", key="kms")
    miles_button = sg.Button("Convert")
     
    output = sg.Text(key="output")
     
     
    window = sg.Window('Km to Miles Converter',
                       layout=[[label, input_box], [miles_button, output]],
                       font=('Helvetica', 20))
     
    while True:
        event, values = window.read()
        match event:
            case "Convert":
                km = values["kms"]
                result = km_to_miles(km)
                window['output'].update(value=result)
            case sg.WIN_CLOSED:
                break
     
    window.close()
```

However, when the user runs the code above, enters a number, and presses the Convert button, the program stops, and an error is displayed in the command line:
TypeError: can't multiply sequence by non-int of type 'float'
Place the code in your IDE and try to troubleshoot and fix the error.

```python
    import PySimpleGUI as sg
    def km_to_miles(km):
        return km / 1.6
    label = sg.Text("Kilometers: ")
    input_box = sg.InputText(tooltip="Enter todo", key="kms")
    miles_button = sg.Button("Convert")
    output = sg.Text(key="output")
    window = sg.Window('Km to Miles Converter',
                       layout=[[label, input_box], [miles_button, output]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read()
        match event:
            case "Convert":
                km = float(values["kms"])
                result = km_to_miles(km)
                window['output'].update(value=result)
            case sg.WIN_CLOSED:
                break
    window.close()
```

git clone
upload code to github
how to get code from github
and copy it to your local computer
search
arditsulceteaching github
https://github.com/arditsulceteaching/thepythonmegacourse
https://github.com/arditsulceteaching
click repositories
find my-todo-app

2 ways to get the code to your computer
manual way
which is by going to this button code and then go to download
zip
so that will give you a zip file with all these files inside
and then you can extract that file
and then open a pycharm project and paste your files there
that's one way but a more professional way is to do cloning
a git process known as clone
so you clone this project to your pycharm ide
go to pycharm, if you have a project open already
go to git
no you'll only see this clone option if this
current project has git enabled
if you have a project without git enabled
go to vcs
then get from version control
you should see a window after pressing clone
this is the url of the repository, the remote repository
which you want to get
it's important to know that you will only be able to get
public repositories from other people
unless you know their credential
this is a public repo so you can go to code and then
https and then copy that url by pressing this button
go back to pycharm and pase it to the url box
now the directory
you should find an empty directory among your projects
inside the empty directory, another directory will
be created
no directory with the same name to the repository should be in
the empty folder
if you want to just browse the code then choose
preview in safe mode
otherwise, if you know what you're downloading on your computer
press trust project
trust project should download the code on your computer
and you should be able to execute the code
new window or this window
this window will close the existing project
it doesn't matter what you press here
press new window
if you look at the repository in github
there is a requirements.txt file
this is a special file
web app
the text file contains the list of packages needed by these
python files
so these are the modules, third party modules
and I've listed those packages in this file and
now pycharm has detected this requirements.txt file
so this is a convention
usually you always want to name it requirements.txt file
it's asking us if we want to install the modules which
are located in the file
so press ok
you will see base interpreter
that is the path to the virtual environment
that should now install all those packages
this might take a while
if for some reason you don't have these modules installed,
you can click on web.py
you should see some red underlines
that means these modules were not installed
if pycharm didn't install those modules,
you can go to the terminal
you should see this venv [in (venv) as@AS Projects %]
which means that virtual environment is
activated and then you should do
you can press tab to complete file name
pip install -r requirements.txt
press enter
you can run the web app
for web app you can't simply right click and run the files
you want to go to terminal
streamlit is a third party module which is used
to develop this web app
wait for a minute when running
web.py is the file we're executing
in pycharm terminal

```python
    streamlit run web.py
```

the app is running on the browser
this is running locally currently
so no public url just yet
so that's how you can clone a project which is a public
github repo
so this repo now is also
connected to local git
you can see the commits here
which the author did when they developed the app
if you want to create your own github repo where
you upload this app
you can do so
so for that, you want to go to your github account
and then create a new repository
put a new name for that like my-new-todo-app
make it public or private
no need for readme file
and create repo
then copy the first link
go back to project in pycharm
the app we cloned
go to git
manage remotes
so what I'm doing here is I'm adding a new remote
as you see, that is the remote of the person who
wrote the app
and you cannot push the changes to this repository because
it's not your
github account
so you want to add a new repository, which is part of your own github
account
as the name you can place here, anything you wnat
for example your name (ex. ardit)
and the url goes the repository link I just copied
when I created this new repository
press ok and ok again
and then to upload this project to that repository which we just
created
you want to go to push
and then you want to press on origin
so origin is one of the remote repositories
go to git menu at top and then manage remotes
you see origin and ardit
so if you press on origin in push
you should be able to change it to the other repository
ardit
so now
all these files are going to be uploaded to that repository on your
github account
so I got this message pushed master to new branch and if
I refresh github account
I should see the files in my repo
in my case, it happened that both the repo were in the same github
account but it doesn't matter
so as long as the original repo was public, I could clone it on
my pycharm project and then I can create a new repository
where I have access to, for example, this one and I can upload
it back to that
you can see that the commits here were synchronized with the commits
of the original author, which was 7 days ago
these are commits in the original project

## FAQ

Q1: How can we have more structured layouts using PySimpleGUI?
A: For more structured layouts, you can use sg.Column to create column instances. Here is an example:

```python
    import PySimpleGUI as sg
     
    # Prepare the widgets for the left column
    left_column_content = [[sg.Text('Left 1')],
                           [sg.Text('Left 2')]]
     
    # Prepare the widgets for the right column
    right_column_content = [[sg.Text('Right 1')],
                            [sg.Text('Right 2')]]
     
     
    # Construct the Column widgets
    left_column = sg.Column(left_column_content)
    right_column = sg.Column(right_column_content)
     
    # Construct the layout
    layout = [[left_column, right_column]]
     
    # Construct and display the window
    window = sg.Window('Columns', layout)
    window.read()
    window.close()
```

That will produce the following output. Left 1 and Left 2 are part of the left column, while Right 1 and Right 2 are part of the right column.

# s18

we're going to fix the error later
TypeError: 'NoneType' object is not subscriptable
in python console
a = [1, 2, 3]
a.remove(3)
a
exit also fixes the error
commit
Implement the complete and exit buttons
you can also push the changes if you want to synchronize them
with github but in this case push is not used

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add")
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    complete_button = sg.Button("Complete")
    exit_button = sg.Button("Exit")
    window = sg.Window('My Tasks',
                       layout=[
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button, complete_button],
                           [exit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read()
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
      case "Edit":
          task_to_edit = values["tasks"][0]
          new_task = values["task"]
          tasks = functions.get_todos()
          index = tasks.index(task_to_edit)
          tasks[index] = new_task
          functions.write_todos(tasks)
          window["tasks"].update(values=tasks)
      case "Complete":
          task_to_complete = values["tasks"][0]
          tasks = functions.get_todos()
          tasks.remove(task_to_complete)
          functions.write_todos(tasks)
          windows["tasks"].update(values=tasks)
          window["task"].update(value="")
      case "Exit":
          break
      case "tasks":
          window['task'].update(value=values["tasks"][0])
      case sg.WIN_CLOSED:
          break
    print("Bye")
    window.close()
```

we're going to fix a couple of errors that we have
using try and except
live date and time
polish the program, change the theme
play around with the sizes of the elements and so on
so when the user runs the program and without selecting
anything they press on edit
then we get this index error
the code
task_to_edit = values["tasks"][0]
the values is a dictionary
so we get the list using "tasks"
and tries to access the first item of that list with index zero
but there is no such item because the user hasn't selected any items
from the list box
therefore we get an index error
to handle errors, we use try and except
we're going to indent all the block
place it under a try statement
and use
except IndexError:
and print please select an item first.
but the end user won't see the print in the command line
because it is gui so create a pop up window or on the gui
use
sg.popup("message here")
use see implementation in pycharm
sg.popup("message here", font=("Helvetica, 20"))
put a try and except in complete
it is also an index error
add a label
don't use variable names that match with modules
add delay to window to show time
every 10 ms
event, values = window.read(timeout=10)
200 for 200ms

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    import time
    clock = sg.Text("", key="clock")
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add")
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    complete_button = sg.Button("Complete")
    exit_button = sg.Button("Exit")
    window = sg.Window('My Tasks',
                       layout=[
                           [clock],
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button, complete_button],
                           [exit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read(timeout=200)
        window["clock"].update(value=time.strftime("%b %d, %Y %H:%M:%S"))
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
          case "Edit":
              try:
                  task_to_edit = values["tasks"][0]
                  new_task = values["task"]
                  tasks = functions.get_todos()
                  index = tasks.index(task_to_edit)
                  tasks[index] = new_task
                  functions.write_todos(tasks)
                  window["tasks"].update(values=tasks)
              except IndexError:
                  print("Please select an item first.")
          case "Complete":
              try:
                  task_to_complete = values["tasks"][0]
                  tasks = functions.get_todos()
                  tasks.remove(task_to_complete)
                  functions.write_todos(tasks)
                  windows["tasks"].update(values=tasks)
                  window["task"].update(value="")
              except IndexError:
                  print("Please select an item first.")
          case "Exit":
              break
          case "tasks":
              window['task'].update(value=values["tasks"][0])
          case sg.WIN_CLOSED:
              break
    window.close()
```

change theme
search pysimplegui themes in google
sg.theme("Black")
right click in size
implementations
in doc string
size
has wide as first value
it will receive 2 int
width is the number of characters
10 is number of rows, 10 rows high
if an int instead of a tuple is supplied, then height is auto-set to 1
for button you can also change size
add_button = sg.Button("Add", size=10)
height doesn't change it is by default 1 row unit
in pycharm
go to settings
plugins
marketplace
rainbow brackets
restart pycharm
colors parenthesis and brackets for more readability
commit the changes
Change theme, add clock, handle edit and complete error
commit
push the changes to github

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    import time
    sg.theme("DarkPurple4")
    clock = sg.Text("", key="clock")
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button("Add", size=10)
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    complete_button = sg.Button("Complete")
    exit_button = sg.Button("Exit")
    window = sg.Window('My Tasks',
                       layout=[
                           [clock],
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button, complete_button],
                           [exit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read(timeout=200)
        window["clock"].update(value=time.strftime("%b %d, %Y %H:%M:%S"))
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
          case "Edit":
              try:
                  task_to_edit = values["tasks"][0]
                  new_task = values["task"]
                  tasks = functions.get_todos()
                  index = tasks.index(task_to_edit)
                  tasks[index] = new_task
                  functions.write_todos(tasks)
                  window["tasks"].update(values=tasks)
              except IndexError:
                  print("Please select an item first.")
          case "Complete":
              try:
                  task_to_complete = values["tasks"][0]
                  tasks = functions.get_todos()
                  tasks.remove(task_to_complete)
                  functions.write_todos(tasks)
                  windows["tasks"].update(values=tasks)
                  window["task"].update(value="")
              except IndexError:
                  print("Please select an item first.")
          case "Exit":
              break
          case "tasks":
              window['task'].update(value=values["tasks"][0])
          case sg.WIN_CLOSED:
              break
    window.close()
```

use image as buttons

2 png images

remove text in add button
put location of image file
it is in the same directory with gui.py
it have issues
it is wide and change color on hover
change size to 2
add a new argument
you can use colors supported
search pysimplegui colors in google
LightBrown
LightBlue2
but if you type in the input box and try to see
tooltip of image button
it will not show
it is because we removed the label of the button
so add a key add to button because
match case is trying to find that

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    import time
    sg.theme("DarkPurple4")
    clock = sg.Text("", key="clock")
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button(size=2, image_source="add.png", mouseover_colors=LightBlue2, tooltip="Add", key="Add")
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    complete_button = sg.Button("Complete")
    exit_button = sg.Button("Exit")
    window = sg.Window('My Tasks',
                       layout=[
                           [clock],
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button, complete_button],
                           [exit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read(timeout=200)
        window["clock"].update(value=time.strftime("%b %d, %Y %H:%M:%S"))
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
          case "Edit":
              try:
                  task_to_edit = values["tasks"][0]
                  new_task = values["task"]
                  tasks = functions.get_todos()
                  index = tasks.index(task_to_edit)
                  tasks[index] = new_task
                  functions.write_todos(tasks)
                  window["tasks"].update(values=tasks)
              except IndexError:
                  print("Please select an item first.")
          case "Complete":
              try:
                  task_to_complete = values["tasks"][0]
                  tasks = functions.get_todos()
                  tasks.remove(task_to_complete)
                  functions.write_todos(tasks)
                  windows["tasks"].update(values=tasks)
                  window["task"].update(value="")
              except IndexError:
                  print("Please select an item first.")
          case "Exit":
              break
          case "tasks":
              window['task'].update(value=values["tasks"][0])
          case sg.WIN_CLOSED:
              break
    window.close()
```

1. design the frontend
2. code the frontend
3. code the backend
4. finish up

extract a zip file to a destination directory
figma software to create designs for your apps before you build your apps
usually you create a design for gui which could be desktop aps or web apps
usually you don't do this if it's just a cli
archive extractor
input box where the path of the archive of
the zip file is going to be placed
and the path of that file will be rendered here as text in this
input box
pick files using a file picker
common practice to show
extract button
filebrowse

unlike in zipped file creator
we used filesbrowse
here in zip file extractor we use filebrowse
we only want to let the user select 1 zip file only
output_label is empty

```python
    # zip file extractor
    import PySimpleGUI as sg
    sg.theme("DarkPurple4")
    select_archive = sg.Text("Select archive to extract:")
    archive_input = sg.Input()
    archive_button = sg.FileBrowse("Choose", key="archive")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose", key="folder")
    extract_button = sg.Button("Extract")
    output_label = sg.Text(key="output", text_color="white")
    window.read()
    window.close()
```

create zip_extractor.py
you want to see the contents of the zipfile so use
read mode
give the actual absolute path of the directory
for dest_dir
right click folder in pycharm
copy path / reference
absolute path
use absolute path for location of zip file as well

```python
    import zipfile
    def extract_archive(archivepath, dest_dir):
        with zipfile.ZipFile(archivepath, 'r') as archive:
            archive.extractall(dest_dir)
    if __name__ == "__main__":
        extract_archive("/Users/as/app1/bonus/compressed.zip", "/Users/as/app1/bonus/files")
```

look at python console to see
values

```python
    # zip file extractor
    import PySimpleGUI as sg
    sg.theme("DarkPurple4")
    select_archive = sg.Text("Select archive to extract:")
    archive_input = sg.Input()
    archive_button = sg.FileBrowse("Choose", key="archive")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose", key="folder")
    extract_button = sg.Button("Extract")
    output_label = sg.Text(key="output", text_color="white")
    while True:
        event, values = window.read()
        print(event, values)
    window.close()
```

archive key
value is a string
absolute path
folder key and its value and absolute path of dest dir

```python
    # zip file extractor
    import PySimpleGUI as sg
    from zip_extractor import extract_archive
    sg.theme("DarkPurple4")
    select_archive = sg.Text("Select archive to extract:")
    archive_input = sg.Input()
    archive_button = sg.FileBrowse("Choose", key="archive")
    select_destination = sg.Text("Select destination folder:")
    folder_input = sg.Input()
    folder_button = sg.FolderBrowse("Choose", key="folder")
    extract_button = sg.Button("Extract")
    output_label = sg.Text(key="output", text_color="white")
    window = sg.Window("File Compressor",
                       layout=[[select_archive, archive_input, archive_button],
                               [select_destination, folder_input, folder_button],
                               [extract_button, output_label]])
    while True:
        event, values = window.read()
        print(event, values)
        archivepath = values["archive"]
        folder = values["folder"]
        extract_archive(archivepath, folder)
        window["output"].update(value="Extraction Complete!")
    window.close()
```

## Coding Exercise

Coding Exercise 1
Your task for this exercise is to add an Exit button that quits the program and apply a black theme to the program you built-in yesterday's coding exercise. 

```python
    # answer1
    import PySimpleGUI as sg
    import feet_inches_functions as util
    sg.theme("Black")
    feet_label = sg.Text("Enter feet:")
    feet_input = sg.Input(key="feet")
    inches_label = sg.Text("Enter inches:")
    inches_input = sg.Input(key="inches")
    convert_button = sg.Button("Convert")
    output_label = sg.Text(key="output")
    exit_button = sg.Button("Exit")
    window = sg.Window("Feet Inches Converter",
                       layout=[[feet_label, feet_input],
                               [inches_label, inches_input],
                               [convert_button, exit_button, output_label]])
    while True:
        event, values = window.read()
        match event:
            case "Convert":
                meters = util.convert(float(values["feet"]), float(values["inches"]))
                window["output"].update(value=f"{meters} m", text_color="white")
            case "Exit":
                break
            case sg.WIN_CLOSED:
                break
    window.close()

    # alternative
    import PySimpleGUI as sg
    from converters import convert
    sg.theme("Black")
    feet_label = sg.Text("Enter feet: ")
    feet_input = sg.Input(key="feet")
    inches_label = sg.Text("Enter inches: ")
    inches_input = sg.Input(key="inches")
    button = sg.Button("Convert")
    output_label = sg.Text("", key="output")
    exit_button = sg.Button("Exit")
    window = sg.Window("Convertor",
                       layout=[[feet_label, feet_input],
                               [inches_label, inches_input],
                               [button, exit_button, output_label]])
    while True:
        event, values = window.read()
        match event:
            case "Exit":
                break
            case sg.WIN_CLOSED:
                break
        feet = float(values["feet"])
        inches = float(values["inches"])
    result = convert(feet, inches)
    window["output"].update(value=f"{result} m", text_color="white")
    window.close()
```

## Bug-Fixing Exercise

Bug Fixing Exercise 1
The following program (which we developed in today's coding exercise) ends with an error if the user presses the Convert button without supplying any values in the input boxes first. 

```python
    import PySimpleGUI as sg
     
    def convert(feet, inches):
        meters = feet * 0.3048 + inches * 0.0254
        return meters
     
     
    sg.theme("Black")
     
    feet_label = sg.Text("Enter feet: ")
    feet_input = sg.Input(key="feet")
     
    inches_label = sg.Text("Enter inches: ")
    inches_input = sg.Input(key="inches")
     
    button = sg.Button("Convert")
    output_label = sg.Text("", key="output")
    exit_button = sg.Button("Exit")
     
    window = sg.Window("Convertor",
                       layout=[[feet_label, feet_input],
                               [inches_label, inches_input],
                               [button, exit_button, output_label]])
     
    while True:
        event, values = window.read()
        match event:
            case "Exit":
                break
            case sg.WIN_CLOSED:
                break
        feet = float(values["feet"])
        inches = float(values["inches"])
     
        result = convert(feet, inches)
        window["output"].update(value=f"{result} m", text_color="white")
     
     
    window.close()
```

Please modify the above program so that instead of ending, the program should show a popup window telling the user to enter numbers in the input boxes. In other words, the program should behave as depicted below:

```python
    import PySimpleGUI as sg
    def convert(feet, inches):
        meters = feet * 0.3048 + inches * 0.0254
        return meters
    sg.theme("Black")
    feet_label = sg.Text("Enter feet: ")
    feet_input = sg.Input(key="feet")
    inches_label = sg.Text("Enter inches: ")
    inches_input = sg.Input(key="inches")
    button = sg.Button("Convert")
    output_label = sg.Text("", key="output")
    exit_button = sg.Button("Exit")
    window = sg.Window("Convertor",
                       layout=[[feet_label, feet_input],
                               [inches_label, inches_input],
                               [button, exit_button, output_label]])
    while True:
        event, values = window.read()
        match event:
            case "Exit":
                break
            case sg.WIN_CLOSED:
                break
        try:
            feet = float(values["feet"])
            inches = float(values["inches"])
        result = convert(feet, inches)
        window["output"].update(value=f"{result} m", text_color="white")
    except IndexError:
        sg.popup("Please provide two numbers.")
    window.close()
```

```python
    # alternative
    except ValueError:
    sg.popup("Please provide two numbers.", font=("Helvetica", 20))
```

executable files for apps
standalone executables
text file is needed in the program
we need to automatically create it if text file doesn't
exist yet
function .exists() returns true or false
python console
import os
os.path.exists("tasks.txt")

create text file in write mode
put a pass
it does nothing
with should have a code line after it
it can't be empty
10:42 if on mac
18:52 if on linux

```python
    # gui.py
    import functions
    import PySimpleGUI as sg
    import time
    import os
    if not os.path.exists("tasks.txt"):
        with open("tasks.txt", "w") as file:
            pass
    sg.theme("DarkPurple4")
    clock = sg.Text("", key="clock")
    label = sg.Text("Type in a task")
    input_box = sg.InputText(tooltip="Enter task", key="task")
    add_button = sg.Button(size=2, image_source="add.png", mouseover_colors=LightBlue2, tooltip="Add", key="Add")
    list_box = sg.Listbox(values=functions.get_tasks(), key="tasks",
                          enable_events=True, size=[45, 10])
    edit_button = sg.Button("Edit")
    complete_button = sg.Button("Complete")
    exit_button = sg.Button("Exit")
    window = sg.Window('My Tasks',
                       layout=[
                           [clock],
                           [label],
                           [input_box, add_button],
                           [list_box, edit_button, complete_button],
                           [exit_button]],
                       font=('Helvetica', 20))
    while True:
        event, values = window.read(timeout=200)
        window["clock"].update(value=time.strftime("%b %d, %Y %H:%M:%S"))
        print(1, event)
        print(2, values)
        print(3, values["tasks"])
        match event:
          case "Add":
              tasks = functions.get_todos()
              new_todo = values["task"] + "\n"
              tasks.append(new_todo)
              functions.write_todos(tasks)
              window["tasks"].update(values=tasks)
          case "Edit":
              try:
                  task_to_edit = values["tasks"][0]
                  new_task = values["task"]
                  tasks = functions.get_todos()
                  index = tasks.index(task_to_edit)
                  tasks[index] = new_task
                  functions.write_todos(tasks)
                  window["tasks"].update(values=tasks)
              except IndexError:
                  print("Please select an item first.")
          case "Complete":
              try:
                  task_to_complete = values["tasks"][0]
                  tasks = functions.get_todos()
                  tasks.remove(task_to_complete)
                  functions.write_todos(tasks)
                  windows["tasks"].update(values=tasks)
                  window["task"].update(value="")
              except IndexError:
                  print("Please select an item first.")
          case "Exit":
              break
          case "tasks":
              window['task'].update(value=values["tasks"][0])
          case sg.WIN_CLOSED:
              break
    window.close()
```

windows users
terminal
when you open the terminal in pycharm
it should say in left side of current writable line
venv in parenthesis
and we get an error
venv scripts activate.ps1 cannot be loaded because running scripts
is disabled on this system
terminal

```python
    set-executionpolicy remotesigned -scope currentuser
```

close terminal
open terminal
we get (venv)
install a third party library
pip install pyinstaller
or if in pycharm
search packages in tab left side bottom part of pycharm
pyinstaller
press install on the right
to create executable files .exe files
after installing pyinstaller, you can minimize python
packages pane
go to terminal

```python
    pyinstaller --onefile --windowed --clean gui.py
```

we want to run the library pyinstaller and we give it
parameters
onefile means it will create 1 single executable file
instead of creating several distributed files
windowed
is going to avoid having a command line generated
so usually if you don't supply this argument
then what you get is that the gui we created but also
a command line
we don't want that for the user
they just want to see the gui
and lastly, clean means that if we generated the file
the executable before now, this clean will override
that executable
so event though this is not needed the first time we
run it, it's a good practice to use clean there
otherwise the next time you execute this, the
previous executable file that was generated will
not be overwritten and that can confuse you
it might take a while to create the executable file
the executable file is going to be created in the project
directory
folder build and dist created
right click on dist folder
open in exeplorer
go to dist
gui file
that is exe file
double click
it also got text file
delete it is ok

## FAQ

Q1: Sometimes, the widgets are not so well aligned. For example, the GUI below doesn't look so good. How can we better align widgets?
A: The widgets above do not align well because the two labels on the left have different lengths. That can be avoided by using columns. Here is a code sample:

```python
    import PySimpleGUI as sg
    # from zip_extractor import extract_archive
     
    sg.theme("Black")
     
    label1 = sg.Text("Select archive:")
    input1 = sg.Input()
    choose_button1 = sg.FileBrowse("Choose", key="archive")
     
    label2 = sg.Text("Select destination directory:")
    input2 = sg.Input()
    choose_button2 = sg.FolderBrowse("Choose", key="folder")
     
    extract_button = sg.Button("Extract")
    output_label = sg.Text(key="output", text_color="green")
     
    col1 = sg.Column([[label1], [label2]])
    col2 = sg.Column([[input1], [input2]])
    col3 = sg.Column([[choose_button1], [choose_button2]])
     
    window = sg.Window("Archive Extractor",
                       layout=[[col1, col2, col3], [extract_button]])
    while True:
        event, values = window.read()
        print(event, values)
        archivepath = values["archive"]
        dest_dir = values["folder"]
        extract_archive(archivepath, dest_dir)
        window["output"].update(value="Extraction Completed!")
     
    window.close()
```

That would produce this output:
As you can see, the widgets are well aligned now. All we did to achieve that was put the widgets inside Column widgets using these lines:

```python
    col1 = sg.Column([[label1], [label2]])
    col2 = sg.Column([[input1], [input2]])
    col3 = sg.Column([[choose_button1], [choose_button2]])
```

Then, we use supplied those column widgets to layout:

```python
    layout=[[col1, col2, col3], [extract_button]]
```
```
