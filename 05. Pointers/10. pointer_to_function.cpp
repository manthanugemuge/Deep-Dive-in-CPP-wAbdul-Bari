#include <iostream>
using namespace std;
void display()
{
    cout << "Hello";
}
int max(int x, int y)
{
    return x > y ? x : y; // Function to return max -> Checks if x>y ? if true then return x : else return y.
}
int min(int x, int y)
{
    return x > y ? y : x; // Function to return min -> Checks if x>y ? if true then return y : else return x.
}
int main()
{
    /*
    void (*fp)(); // Method of declaring a pointer to the function. Ptr to a function must be inside brackets()
    fp = display; // Assigning a name of a function to function pointer fp. The address of function will be stored here.
    (*fp)();      // Function call to the function display.
    */
    int (*fp)(int, int); // Declare a function pointer to max or min as prototype same for both functions.
    fp = max;            // Assign fp to max function.
    (*fp)(29, 21);       // Expected return 29 as called on max.
    max(29, 21);
    fp = min;
    (*fp)(29, 21); // Expected return 21 as called on min now.
    return 0;
}

