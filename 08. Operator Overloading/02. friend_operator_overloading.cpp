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
    // Friend function's prototype
    friend Complex operator+(Complex x, Complex y); // Friend function has to be written outside the class.
    // Should return Complex only and takes 2 complex #'s as parameters, add them and return result in another Complex object
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

Complex operator+(Complex c1, Complex c2) // Independent function doesn't belongs to class but if friend of the class.
//That is the reason why scope resolution is not used here.
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}
