## Notes on throw

- In the syntax below:

```cpp
int division(int x,iny y)
{
    if(y == 0)
        throw something;
    return x/y;
}
```

- In the syntax above we can throw double,float,int,char and even string with message. 

- We can write our own class, and we can throw an object of our class say MyException as well. If we are throwing our own class exception, it would be better to extend it from built-in class of C++ called exception, and we can inherit our class form that.

```cpp
class MyException
{
    // something
};
int division(int x,iny y)
{
    if(y == 0)
        throw MyException;
    return x/y;
}
```


