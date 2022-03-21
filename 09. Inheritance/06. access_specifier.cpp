#include <iostream>
using namespace std;

class Rectangle
{
private: // Data members as private
    int length;
    int breadth;

public: // Members functions as public
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void set_length(int length)
    {
        (length > 0) ? this->length = length : this->length = 0;
    }
    void set_breadth(int breadth)
    {
        (breadth > 0) ? this->breadth = breadth : this->breadth = 0;
    }
    int get_length() { return this->length; }
    int get_breadth() { return this->breadth; }
};


