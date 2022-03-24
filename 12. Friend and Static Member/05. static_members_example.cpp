#include <iostream>
using namespace std;

// Example of students in a school and their static admission number as Roll No.

class Student
{
public:
    int roll;
    string name;

    static int addNo;
    Student(string name)
    {
        addNo++;
        roll = addNo;
        this->name = name;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << roll << endl;
    }
};

int Student::addNo = 0;

int main()
{
    Student s1("Peter");
    Student s2("John");
    Student s3("Cosmic");
    Student s4("Matthew");
    Student s5("Eric");
    Student s6("Deborah");

    s1.display();
    s3.display();
    cout << "Number of Admissions : " << Student::addNo;
}


