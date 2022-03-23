#include <iostream>
using namespace std;
class Parent
{
public:
    void display()
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
    Child c;
    c.display();
    c.Parent::display(); // To call display function of Parent
    return 0;
}


