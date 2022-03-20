#include <iostream>
using namespace std;
struct Demo
{
    int x, y;

    void Display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.x = 10;
    d.y = 15;
    d.Display();
    return 0;
}

