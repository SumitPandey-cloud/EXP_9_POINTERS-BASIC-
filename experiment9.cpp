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