#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of rectangle " << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void volume() { cout << "Volume of cuboid " << endl; }
};

int main()
{
    Cuboid c;
    /* Able to call both of the functions
    c.area();
    c.volume();
     */
    // Creating pointer to rectangle class and to this we will assign the address of it's child class object i.e. c
    Rectangle *p = &c;
    p->area(); // Able to call the function area as it is defined in the class Rectangle.
    // p->volume(); // Gives error that Rectangle has no member volume()
    return 0;
}

