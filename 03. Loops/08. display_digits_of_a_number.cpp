#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter a number : ";
    cin >> n;

    while (n != 0)
    {
        int r;
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    cout << "New number is : " << rev << endl;
    return 0;
}
