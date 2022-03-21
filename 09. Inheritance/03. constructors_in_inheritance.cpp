#include <iostream>
using namespace std;
class parent_class
{
public:
    parent_class()
    {
        cout << "Default constructor called of class parent.\n";
    }
    parent_class(int x)
    {
        cout << "Parameterized constructor called of class parent and x = " << x << endl;
    }
};
//-------------------------------------------------------------------------------------------
class child_class : public parent_class
{
public: // Here also we write nothing but constructors
    child_class()
    {
        cout << "Default constructor called of class child.\n";
    }
    child_class(int a)
    {
        cout << "Parameterized constructor called of class child and x = " << a << "." << endl;
    }
    // to call the parameterized constructor of parent class when the object of child class is executed
    child_class(int x, int a) : parent_class(x)
    {
        cout << "Param of child class is a = " << a;
        /* What about x ? How to send the parameter to parent_class from child ? for that do :parent_class(x)
So, from child class constructor here we call the constructor of parent class which is parameterized constructor. */
    }
};
int main()
{
    // Create object of class child_class to see how the constructors are executed
    // child_class object(20); // Calls non param const of parent and param. const of child class.

    // child_class object;
    /* Created object of class child_class without parameters hence trying to call non param. contructor.
But here by default constructor of parent class non parameterized one will be executed.
We would get Default of parent_class output and then we will get Default const..... of class child_class.*/
    child_class(20, 10); // parent_class(20) and child_class(10) is called.

    return 0;
}


