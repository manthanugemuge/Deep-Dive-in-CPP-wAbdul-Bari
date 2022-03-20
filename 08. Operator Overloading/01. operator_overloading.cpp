#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int real = 0, int img = 0) // 0 if nothing is passed
    {
        this->real = real;
        this->img = img;
    }
    // Complex add(Complex x) // Normal way
    Complex operator+(Complex x)
    { // Signature of add function
        Complex temp;
        temp.real = this->real + x.real;
        temp.img = this->img + x.img;
        return temp;
    }
    int get_real()
    {
        return this->real;
    }
    int get_img()
    {
        return this->img;
    }
};

int main()
{
    Complex c1(5, 7), c2(2, 9), c3;
    // c3 = c1.add(c2); // Old method
    c3 = c1 + c2; // Using operator overloading
    cout << "Sum of c1(5,7) and c2(5,9) complex numbers is : " << c3.get_real() << " + " << c3.get_img() << "i as sum.";
    return 0;
}

/*In C++ there are operators for various operations like +,-,*,/,new,delete etc.
These operators are meant for some specific data type. There are built-in operators for built-in data types.
Say + can be used by-default only with int or float data type only. If we are defining our own data type say a class
called matrix and we want + operator to add 2 matrices A and B and store it in C ? 
Yes, with the help of operator overloading we can do so. + operator can be overloaded for matrix.
For user defined data type we can overload operators. There are various operators we can overload in C++ except a few.


*/
