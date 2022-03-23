#include <iostream>
using namespace std;
class Base
{
public:
    void fun1()
    {
        cout << "Base fun1";
    }
    virtual void fun2() = 0;
    /*void fun2() // Normal function fun2 we make it as pure virtual function above
    {
        cout << "Base fun2";
    } 
    */
};

class Derived : public Base
{
    // Derived class re-uses the function of base class -> Borrowing the features of base class -> Reusability
    void fun2()
    {
        cout << "Derived Fun2"; // This is function overriding : Re-defining the function of base class in a child class
    }

};
int main()
{
    Base *p = new Derived();
    p->fun2(); // Prints derived fun2 to show that pure virtual function fun2 ignored of Base class and Derived is printed.
    return 0;
}

