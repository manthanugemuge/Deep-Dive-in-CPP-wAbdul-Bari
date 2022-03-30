# Deep Dive in CPP - Abdul Bari
Learn C++ Programming -Beginner to Advance- Deep Dive in C++.

- Here I bring you the notes of cpp exclusively from Sir Abdul Bari's Deep Dive in C++ Course on [Udemy](https://www.udemy.com/course/cpp-deep-dive/)

# Intro to Course
-- We will be learning all that is part of standard university one semester course in C++. Course medium by Udemy instructor is White Board and screenrecording from time to time. I will be writing whatever I feel is important in these notes. Demonstration of each topic along with code will be provided, to cover practical and theoretical aspects in a greater way for learning as well as remembering for longer periods of time has been taken care of.

# Why one should learn C++ ?

1. It is in your syllabus and is widely used even today due to its large applications, as well as lots and lots of legacy code is also written on C++ already, so it is an integral part of many crucial systems we see today.
2.  C++ follows Object Oriented Paradigm, lots of new languages are Object Oriented and it it provides lots of features in Object Oriented which are not available in newer languages and syntactically it is much better, even if that means you have to learn a lots of things due to sometimes exhaustive syntax. Which plays a crucial role in giving programmers more power and freedom over writing code in the way they want.
3. C++ is compatible with hardware due to it's nature of being a low level language which is easier for computers to understand. Proving to be a great choice for making Apps which run directly over the OS. So here is a layer of Hardware >> OS >> Application.
4.  Looking at applications such as DotNet, C#, Java or Python, these languages do not run dierctly over the OS but instead they need an interpreter that is a run time environment like java runs inside JVM and .NET programs run inside Common Language Run-time environment CLR.
So, interpreter is used to establish interaction between OS and Hardware which makes it as follows (Hardware >> OS >> Environment >> App) due to this intermediate interference of environment layer these languages aren't that powerful compared to C++ which directly interacts with OS or hardware.

## List of applications of C++
1. System Softwares/Tools
2. Embedded Systems (Microprocessors & Controllers viz. Arduino,Rasp)
3. Operating Systems, Interpreters
4. Platforms and Engines
5. Games & Graphics

# About Course : Contents we will be covering

[Udemy](https://www.udemy.com/course/cpp-deep-dive/) Course is around 30+ hours, there are 340+ lectures with 27 or so sections currently. 

## Contents : Outline
1. Introduction
2. C++ Basics
3. Conditional Statements
4. Loops
5. Functions
6. Object-Oriented Programming
7. Operator Overloading
8. Templates
9. I/O Streams
10. STL
11. Features of C++

# Course Flow
We will be focusing on basics and being correct syntax wise throughout the course but it will be more intense till we get to functions, after that point the focus will shift to understanding OOP concepts and connecting them with real world examples to understand how it fits in software development cycle.

# Installing IDEs

Checking for 
- For Windows 
- For MAc OS
- For Online Compiler

# For Windows

1. Go to [MinGW](http://www.mingw.org/)  >> Click on Downloads and get the compiler from sourceforge website.
Install the compiler and set the path to it in System Variables so it can be detected by any programs that want to use it.

2. Other choice is to use **Code::Blocks**
[Code::Blocks IDE Download Link](http://www.codeblocks.org/downloads/26)
Click on Download Binary Release and I would recommend going for *mingw-setup.exe file as it would download compiler as well as IDE. Again download it from sourceforge and install it. Do, a spouse mode installation, agree, yes, yes next agree install. xD  Wait for the installation to finish.

Open Code::Blocks select new project and console application of C++ and press next, enter project name and Finish.
Build the project by  clicking build and see how the main.cpp is executed in console. That's it. Your installation of C++ IDE works.

3. **DevC++** : Go to [this link](https://www.bloodshed.net/dev/devcpp.html) to download and install DevC++.
 Be sure to choose whether you want without compiler or with MinGW installed or source code variant.
 Again Install the program, create new project of console application type. Try Hello World program in main.cpp, try building the project to verify if it works.

# For Mac OS 

Go to App Store and search for Xcode. Install it and you're done.
Alternatively, you can also go to terminal and type **xcode-select --install** 

Create new XCode Project >> Command Line Tool >> Select language as C++ and give title and destination and proceed.

# For Online

<a href="https://replit.com/" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/b/b2/Repl.it_logo.svg/1200px-Repl.it_logo.svg.png" alt="Replit" width="40" height="40"/> </a>
<a href="https://www.onlinegdb.com/" target="_blank"> <img src="https://user-images.githubusercontent.com/87055332/149525097-ee28b32b-1906-4464-8588-8b0db8a4c259.png" alt="GDB online Compiler" width="40" height="40"/> </a>
<a href="https://onecompiler.com/" target="_blank"> <img src="https://avatars.githubusercontent.com/u/50039608?s=200&v=4" alt="One Compiler" width="40" height="40"/> </a>
<a href="https://stackblitz.com/" target="_blank"> <img src="https://avatars.githubusercontent.com/u/28635252?s=280&v=4" alt="Stack Blitz" width="40" height="40"/> </a>

# Essentials Fundamental:

- Fundamentals
- How Computers Works
- Introduction to Number System
- What is a Program
- Low-level & High-level languages
- Compiler vs Interpreter
- What is an Operating System

# Skeleton of C++ Program

## int main() vs void main() 

why we can not use void main instead of int main </br>
some compilers supports void main and some compilers int main. Mostly 
int main() is used. </br>

## Why return 0; 
what is the meaning or use of return 0; here and what will happen if we don't use return 0 in our code. </br>
when a program is ending it should return 0. </br>
It is like a standard in C++ programs, it must be writen.
return 0; means program has terminated successfully. 

## Why std 
why we have to write std with cout. simply writing cout it will not 
execute? </br>
C++ supports namespaces. All built-in functions and object are included 
in namespace. </br>
There is a video available on namespaces, in ending sections. </br>
cout is also present in namespace. </br>

## There are 2 methods of using cout. </br>
1. std::cout 
2. Using namespace std; then simply write cout. 
What is #include.

## (#) is used as preprocessor directive. 
#include will ask the compiler to include the header file. 
there are separate videos on preprocessor directives in later sections.

# Program Development:

- Programming Paradigms Methodologies
- What is an algorithm
- What is a Flow-chart
- Steps for Program Development & Execution

# Steps for Program Development and Execution

1. Editing
2. Compiling
3. Linking Library
4. Loading
5. Execution

# C++ Basic:

- Data Types, Variables
- Operators
- Compound Assignment Operator
- Overflow of data-types
- Bitwise Operators
- Logical Operator
- enum & typedef

# Conditional Statements:

- If and else is used for writing conditional statement.
- If condition is true then if block is executed.
- If condition is false then else block is executed.
- 0 => means false.
- 1 => means true or non-zero value is also true.
- If can be nested inside if as well as else statement.
- Nesting of is also written as else-if ladder.

# Loops:

- Loops are iterative statements.
- Block of statements are repeatedly executed as long as condition is true.
- Condition given in loop must become false after some finite iterations otherwise its a infinite loop.
- Values used in condition must update inside the body of finite loop.
- Four types of loops:
  1. pre-tested loop while()
  2. post-tested loop do..while()
  3. counter controlled loop for()
  4. for each loop for Collections for()

# Arrays:

- Array is a collection of similar data elements under one name, each element is accessible using its index.
- Memory for array is allocated contiguously.
- for-each loop is used for accessing array.
- N-dimension arrays are supported by C++.
- Two-Dimensional Arrays are sued for Matrices.
- Array can be created in Stack or Heap Section of memory.

# Pointer:

- Pointer is address variable.
- It can store the address of data.
- Pointer are used for accessing heap memory.
- 5 Arithmetic operations are allowed pointer:
  - p++ => move pointer to next element.
  - p-- => move pointer to previous element.
  - p+k => gives address of kth element form pointer location to right.
  - p-k => gives address of kth element from pointer location to left.
  - q-p => gives number of elements between 2 pointers p and q.
- Pointers can be of many levels.
- Double pointer is used for accessing 2D arrays.

# Reference:

- Reference is a Alias of variable.
- It must be initialised when declared.
- It doesn’t take any memory.
- It cannot be modified to refer other variable.
- Syntax for reference declaration is.
- Int &y = x;

# Functions:

- Function is a module which performs a specific task
- Functions are called by name
- Rules for giving function name is same as variable name
- Function can take 0 or more parameters
- Function can return single value
- Void function don’t return any value
- Default return type is int

# Function Overloading:

- If More than one functions can have same name, but different parameter list, then they are overloaded functions
- Return the is not considered in overloading
- Function overloading is used for achieving compile time polymorphism

# Function Template:

- Function template are used for defining generic functions
- They work for multiple datatypes
- Datatype is decided based on the type of value passed
- Datatype is a template variable
- Function can have multiple template variables

# Call by Address:

- Address pf actual parameters are passed.
- Formal parameters must be pointers
- Formal parameters ca indirectly access actual parameters.
- Changes done using formal parameters will reflect in actual parameters

# Return by Address:

- A function can return address of memory
- It should not return address of local variables, which will be disposed after function ends
- It can return address of memory allocated in heap

# Return by Reference

- A function cal return reference
- It should not return reference of its local variables
- It can return formal parameters if they are reference

# Default Arguments

- Parameters of a function can have default values
- If a parameter is default then , passing its value is options
- Function with default argument can be called with variable number of argument
- Default values to parameters must be given from right side parameter
- Default arguments are much useful in constructors
- Default arguments are useful for defining overloaded functions

# Static variables

- They have local scope but remain in memory thru out the execution of program
- They are created in code section
- They are history-sensitive

# Object-Oriented Programming:

- Features of OOPS:
  - Abstraction
  - Data Hiding
  - Inheritance
  - Polymorphism

# Classes:

- Class is a blue print of an object.
- Class in a group of objects.
- Class is a design of object.

# Many object can be created from same class:

- Object consumes memory equal to sum of sizes of all data members
- Member functions don’t occupy memory
- Member functions are called depending on object
- . Dot operator is used for accessing members of object
- Memory allocated for object is also called as instance

# A pointer of type class can be created:

- A pointer can point on existing object
- A new object can be created in heap using pointer
- Arrow operator is used for accessing members of an object using pointer

# Data Hiding:

- Data members of a class class are usually declared as Private or Protected,
- They can be accessed only inside the class and child classes
- Data finding protects data from mishandling

# Constructors:

- Constructor is a member function of a class
- It will have same name as class name
- It will not have return type
- Its should be public
- It can be declared as private also in some cases
- It is called when object is created
- It is used for initialising an object
- It can be overloaded
- If its not defined then class will have a default constructor
- Constructor can take default arguments

# Types of constructors:

- Non-argument constructor
- Parameterised constructor
- Copy constructor

# All types of Member Functions:

- Constructors - called when object is created
- Accessors - used for knowing the value of data members
- Mutators - used for changing value of data member
- Facilitator - actual functions of class
- Enquiry - used for checking if an object satisfies some condition
- Destructor - used for releasing resources used by object

# Operator Overloading:

- Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types.
- The advantage of Operators overloading is to perform different operations on the same operand.

![image](https://github.com/ManthanUgemuge/Deep-Dive-in-CPP-Abdul-Bari/blob/main/images/Operators.png)

# Inheritance:

- Acquiring the feature of existing class into a new class.
- Deriving a class from a existing class.

# Access Specifiers:

- Private -> Accessible only inside a class
- Protected -> Accessible inside a class and inside derived classes
- Public -> accessible inside class, inside derived class and upon object

# Ways of inheritance:

- A class can be inherited in flowing ways
- Publicly -> All members of base will have same accessibility in derived class
- Protectedly -> All members of base will become protected in derived class
- Privately -> All members of base will become private in derived class

# Base class Pointer pointing to derived class object

- Base class pointer can point on derived class object.
- But only those functions which are in base class, can be called.
- If derived class is having overrides functions they will not be called unless base class functions are declared as virtual.
- Derived class pointer cannot point on base class object

  > Example 1

  ```
  class Base
  {
  public:
    void fun1()
    {
      cout<<"fun1 of Base"<<endl;
    }
  };
  ```

  > Example 2

  ```
  class Derived: public Base
  {
  public:
    void fun2()
    {
      cout<<"fun2 of Derived"<<endl;
    }
  };

  class Rectangle
  {
  public:
    void area()
    {
      cout<<"Area of Rectangle"<<endl;
    }
  };

  class Cuboid: public Rectangle
  {
  public:
    void volume()
    {
      cout<<"Volume of Cuboid"<<endl;
    }
  };

  ```

  > Example 3

  ```
  class BasicCar
  {
  public:
    void start()
    {
      cout<<"Car started"<<endl;
    }
  };

  class AdvanceCar: public BasicCar
  {
  public:
    void playMusic()
    {
      cout<<"Music Playing"<<endl;
    }
  };

  ```

# Virtual Functions

- Virtual functions are used for achieving polymorphism
- Base class can have virtual functions
- Virtual functions can be overrides in derived class
- Pure virtual functions must be overrides by derived class

  > Example:

  ```
  class BasicCar
  {
  public:
    virtual void start(){cout<<"BasicCar started"<<endl;}
  };

  class AdvanceCar: public BasicCar
  {
  public:
    void start(){cout<<"AdvanceCar Started"<<endl;}
  };

  int main()
  {
    BasicCar *p=new AdvanceCar();
    p->start();
  }
  ```

# Polymorphism

- Same name different actions
- Runtime Polymorphism is achieved using function overriding
- Virtual functions are abstract functions of base class
- Derived class must override virtual function
- Base class pointer pointing to derived class object and a override function is called

  > Summary: class car is defined, then sub classes override, then base class method made as virtual the pure virtual

  > Example:

  ```

    class Car
    {
    public:
      virtual void start()=0;
    };

    class Innova:public Car
    {
    public:
      void start(){cout<<"Innova Started"<<endl;}
    };

    class Swift:public Car
    {
    public:
      void start(){cout<<"Swift Started"<<endl;}
    };

    int main()
    {
      //Car c;
      Car *p=new Innova();
      p->start();
      p=new Swift();
      p->start();
    }
  ```

  > When we assign virtual function to 0. It is pure virtual function. Those function are must be overidded by the derived class.

# Abstract class:

- Class having pure virtual function is a abstract class
- Abstract class can have concrete also.
- Object of abstract class cannot be created
- Derived class can must override pure virtual function, otherwise it will also become a abstract class.
- Pointer of abstract class can be created
- Pointer of abstract class can hold object of derived class
- Abstract classes are used for achieving polymorphism
- Base class can be:
  - Concrete
  - Abstract with some concrete and some pure virtual functions
  - All virtual functions

   > Example:

    ```
    class Base //Abstract Class
    {
    public:
      virtual void fun1()=0;
      virtual void fun2()=0;
    };

    class Derived :public Base
    {
    public:
      void fun1()
      {
        cout<<"fun1 of Derived"<<endl;
      }
      void fun2()
      {
        cout<<"fun2 of Derived"<<endl;
      }
    };

    int main()
    {
      Derived d;
      d.fun1();
      d.fun2();
    }
    ```

# Static Members

- Static data members are members of a class
- Only one instance of static members is created and shared by all objects
- They can be accessed directly using class name
- Static members functions are functions of a class, they can be called using class name, without creating object of a class.
- They can access only static data members of a class, they cannot access non-static members of a class.

  > Example:

   ```
      class Student{
        public:
          int rollNo;
          static int admissionNo;

          Student()
          {
            admissionNo;
            rollNo = admissionNo;
          }
      };

      int Student::admissionNo = 0;
    ```
