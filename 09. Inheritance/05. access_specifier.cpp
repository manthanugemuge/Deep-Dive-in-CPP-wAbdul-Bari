#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void fun_parent()
    {
        this->a = 10;
        this->b = 20;
        this->c = 30;
    }
};

class Child : Parent
{
public:
    void fun_derived()
    { // Function which accesses members of parent but can access protected not private.
        //When we say Child is inherited from Parent then all members are available here as well of parent.
        b = 2;
        c = 3;
        // Private is available but not accessible through child, public and protected are accessible via child too in a class.
    }
};

int main()
{
    Parent x; // x initialized with data members a,b and c. Out of these 3 we can directly only access c as it is public.
    // for a and b all read and write options needs to be done through public functions in the class.

    return 0;
}

