#include<iostream>
#include<cmath>
using namespace std;

void Roots(float a,float b,float c)
{
    float d,r1,r2;
    
    d=b*b-4*a*c;
    
    if(d==0)
    {
        r1=-b/(2*a);
        cout<<"real and equal "<<r1;
    }
    else
    {
        if(d>0)
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            cout<<"real and unequal "<<r1<<" "<<r2;
        }
        else
        {
            cout<<"imaginary";
        }
    }
}
