#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void display()
    {
        cout << "Display of parent." << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Display of child." << endl;
    }
};

int main()
{
    // Parent class pointer pointing to child object
    Parent *p = new Child();
    // Now using base class pointer we can call functions which are present in base class.
    p->display(); // Parent class function is called, as pointer is of Parent therefore function also is called of Parent
    
}
