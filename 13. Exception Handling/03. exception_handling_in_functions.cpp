#include <iostream>
using namespace std;
int division(int x, int y)
{
    // Inside the function check for error condition throw something for catch block and return the result if error condition is not satisfied.
    if (y == 0)
        throw 1;
    return x / y;
}
int main()
{
    int a = 10, b = 0, c;
    try
    {
        c = division(a, b); // Pass division to the function.
        cout << c;
    }
    catch (int e)
    {
        cout << "Division by zero. Error code : " << e << endl;
    }
    cout << "\nOutside try catch.\n";
    return 0;
}


