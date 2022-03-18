#include <iostream>
using namespace std;
int *fun()
{
    /*int x = 10;
    // return &x; // Gives warning that address of stack memory associated with local variable 'x' returned.
    // This is not allowed as once the function ends then activation record of function will be deleted from the memory.
     */

    // We are allocating heap memory and returning its address. Taking a pointer and creating int array.
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        // Store multiples of 5 in array.
        p[i] = 5 * i;
    }
    cout << "Address of p from function is : " << p << endl; // To show that address of p and q are same and indeed address of p is passed on to q when it calls fun.
    return p;                                                // Initializes the array and function returns the address of memory allocated in heap to array.
}

int main()
{
    int *q = fun(); //Declaring a pointer q in main function and call the function. Returning their addresses to see they're same.
    // Address of pointer will be stored in q in main, the address which we return as p from function.
    cout << "Address of q from main is : " << q; // To see if q has address same as what p has in the function and after activation record deletion of function
    // does that address gets passed on to the pointer which called the function i.e. pointer q.
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }

    return 0;
}

