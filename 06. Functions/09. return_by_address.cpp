#include <iostream>
using namespace std;
int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}
int main()
{
    int *ptr = fun(5); // Creates an array of size 5 in heap, initializes the elements and returns the pointer.
    // ptr will point to 0th index element of array in heap memory.

    return 0;
}

