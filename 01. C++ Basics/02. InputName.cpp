#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    cout << "May I know Your Name ?" << endl; //to get full name use getline either initial name just cin
    getline(cin, name); //cin>>name;

    cout << "Welcome! " << name << endl;

    return 0;
}

or
  
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter your Name";
    cin>>str;
        
    cout<<"Welcome "<<str;
        
    return 0;
}
