# Experiment 9
## AIM
To study and implement C++ Pointer basics <br>

## THEORY
In C++, pointers are like maps that show the location of other variables in the computer's memory. They're super useful for tasks that require direct access to memory, like dynamically allocating space, working with matrices, and creating complex data structures like linked lists and trees.

To declare a pointer, you simply add an asterisk (*) before its name, which indicates what type of variable it's pointing to. The ampersand symbol (&) is like a GPS that reveals the exact memory address of a variable. And when you dereference a pointer, you can read or modify the value stored at that address.

Pointers are also flexible, meaning you can move them around to point to different locations in memory. This is especially handy when working with arrays, where pointers can help you navigate and access each element by referencing its unique address.<br>

## CODE
```
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int *i, *j;
    int k;
    cout<<"Enter number A: ";
    cin>>a;
    cout<<"Enter number B: ";
    cin>>b;
    i = &a;
    j = &b;
    cout<<"Memory location of A : "<<i<<endl;
    cout<<"Memory location of A: "<<&a<<endl;
    cout<<"number A using dereferencing : "<<*i<<endl;
    cout<<"number A : "<<a<<endl;
    cout<<"Memory location of A : "<<j<<endl;
    cout<<"Memory location of A : "<<&b<<endl;
    cout<<"B : "<<*j<<endl;
    cout<<"B : "<<b<<endl;
    cout<<"Sum of two A and B: "<<*i+*j<<endl;

    for (k = 0;k<3;k++)
    {
        i++;
        cout<<"Incremented memory: "<<i<<endl;
    }
    *i = 20;
    cout<<a<<endl;

    int c[] = {1,2,3,4,5};

    cout<<"Array as a pointer: "<<*c<<endl;

    cout<<"Array pointer with iteration: "<<endl;
    for (k = 0; k<5 ;k++)
    {
        cout<<*(c+k)<<endl;
    }
}
    
```

## OUTPUT

![image](https://github.com/user-attachments/assets/406569f7-f9b4-434e-93b9-e0b5893f0c48)

## CONCLUSION
 We learnt about pointers in C++. 
 We learnt the use case of pointers in C++. 

