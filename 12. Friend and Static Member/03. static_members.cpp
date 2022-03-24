#include <iostream>
using namespace std;
class Test
{
private:
    int a, b;

public:
    static int count;
    Test()
    {
        a = 10;
        b = 10;
        count++; // Doing count++ inside constructor
    }

    // Static function
    static int getCount()
    {
        // a++; // Not allowed as static function can access only static members
        // Static member function also belongs to a class.

        return count;
    }
};

int Test::count = 0; // As we want accessible inside Test only, hence we do scope resolution operator ::
// So 2 times declaration is needed for static variables. As we make global variable static accessible to objects of the class.

int main()
{
    cout << Test::getCount();
    Test t1; // Constructor called and initializes object with 10 and 10. count++ makes count to 1
    cout << t1.getCount();
    Test t2; // count++ makes count to 2
    cout << t2.getCount();
    cout << t1.count;    // Prints 2
    cout << t2.count;    // Prints 2
    cout << Test::count; // As static variable count is public .
    // Static data members can be accessed using objects as well as class name if static members are public.

    // We have created 2 object of same class and every object will have their own a and b.
}

