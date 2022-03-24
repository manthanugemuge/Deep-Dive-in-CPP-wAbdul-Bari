#include <iostream>
using namespace std;
class Test
{
public:
    int a;
    static int count;

    Test()
    {
        a = 10;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};

int Test::count = 0;

int main()
{
    Test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    t1.count = 25; // Change value of t1 count and print value of t2 count yet it is same as t1.count
    cout << t2.count << endl;
    cout << Test::getCount() << endl;
}

