#include <iostream>
using namespace std;
class Outer
{
public:
    int a = 10;
    static int b;

    void func()
    {
        // Blank function
        i.show();
        cout << i.x; // Accessible all the public members in inner class from function of outer class
    }

    class Inner
    {
    public:
        int x = 25;
        void show()
        {
            cout << "Show of inner works..!";
            // cout<<a; // Not allowed to access non static members
            // cout<<b; // Works without any problem as access of static members from inner class allowed
        }
    };
    Inner i;
};

int main()
{
    Outer::Inner a;
    cout << a.x;
    return 0;
}

