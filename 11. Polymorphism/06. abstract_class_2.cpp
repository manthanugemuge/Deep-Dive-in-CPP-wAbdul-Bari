#include <iostream>
using namespace std;
class Car
{
public:
    virtual void start() = 0; 
};
class Innova : public Car
{
public:
    void start() { cout << "Innova started" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift started" << endl; }
};
