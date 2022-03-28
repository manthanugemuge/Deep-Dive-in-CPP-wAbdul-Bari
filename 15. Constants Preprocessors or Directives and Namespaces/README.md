## Constant

- **Const:** It is a qualifier in C++ which is used at many places. Const stands for constant. Say we declare a variable x of value 10, and in memory it is present at location 200. We can do x++ and 10 becomes 11. `const int x = 10;`, now what this means is x is now a constant identifier and it is not a variable. You can't do anything such as modification of the value of const identifier. It is somewhat like `#define x 10` we looked at earlier.

- **#define x 10**: Now this is a preprocessor directive and it happens before the compilation, but `const int x = 10;`, consumes the memory of integer and can't be modified. If you have global constants you can use preprocessor directive like this, otherwise for local constants use constant identifier.

- **Pointers:**

```cpp
int main()
{
    int x = 10;
    int *ptr = &x; // ptr = 200 and *ptr = 10
    ++*ptr; // x = 10 --> x = 11
    cout<<*ptr; // Output 11
}
```

- **Constant Pointers**:

```cpp
int main()
{
    int x = 10;
    const int *ptr = &x; // ptr = 200 and *ptr = 10, read as pointer to an integer constant
    ++*ptr; // x = 10 --> ++*ptr Error as ptr is pointer to a constant 
    cout<<*ptr; // Output 10 --> No error as const int pointer has read only access to x 
    int y;
    ptr = &y; // Even though it was const ptr it can change the variable to which it is pointing to.
    cout << *ptr; //This will not give any errors but as the pointer is const int type it can't be used to do ++*ptr;
}
```
- Another way of using pointers where pointer is constant and not the data to which it is pointing

```cpp
int main()
{
    int x = 10;
    int *const ptr = &x; // constant pointer to an integer. Nor the data nor the int is constant here but ptr is constant here. ptr can't be modified to point to some other address than the one it is assigned to.
    int y;
    ptr = &y; // Can't be done. will give ERROR!
    ++*ptr; // This can be done as we increment the value and it is not constant in this case.

}
```

- Constant pointer to an integer constant: Can't be pointed to any other variable, neither it can modify the value of the variable it is pointing to.

```cpp
int main()
{
    int x = 10;
    const int *const ptr = &x; // constant pointer to an integer constant. Nor the data nor the int is constant here but ptr is constant here. ptr can't be modified to point to some other address than the one it is assigned to.
    int y;
    ptr = &y; // Can't be done. will give ERROR!
    ++*ptr; // This cannot be done as we  increment the value and it is not constant in this case.
}
```

- **Constant keyword in functions**

```cpp
class Demo
{
    public:
        int x = 10;
        int y = 20;

        void display() const{
            x++;
            cout<< x << " " << y << endl;
        }
};

int main()
{
    Demo d;
    d.Display(); // x --> 11 and y --> 20 will be displayed.
}
```

- If you do not want the member function of a class to modify the member, in that case we can write const as above just after the function name, inside the prototype of the function. Compiler will restrict the member function from doing modification of any kind to the data members. This is useful when you are sure that there is no need for a particular function in a class to modify the members of the class, so that even if by mistake due to some logical error, compiler will be there to the rescue and will notify when member function marked with const tries to modify some member's data.

- **Working with functions and call by reference** : Just add const in the function prototype and you won't have your member function modifying class member values.

```cpp
void fun(const int &x,int &y)
{
    x++;
    int << x << " "<< y;
}

int main()
{
    int a = 10,b = 20;
    fun(a,b);
}
```


