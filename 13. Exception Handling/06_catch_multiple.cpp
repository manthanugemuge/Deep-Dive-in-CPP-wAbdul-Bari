
#include <iostream>

using namespace std;

int main()
{
    try
    {
        throw 'a';
        throw 1;   // We can have multiple catch blocks for every data type.
        throw 1.5; // Will give error of uncaught exception of type double found if you have catch with (int e)
    }

    catch (int e)
    {
        cout << "Int catch" << endl;
    }
    catch (double e)
    {
        cout << "Double catch." << endl;
    }
    catch (...)
    {
        cout << "Catch all." << endl;
    }
}
