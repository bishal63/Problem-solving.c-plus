//tinti songhar moddhe boro songha bair korar problem solving

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter your a digit is :";
    cin>>a;
    cout<<"enter your b digit is :";
    cin>>b;
    cout<<"enter your c digit is :";
    cin>>c;
    if(a<b&&a<c)
    {
        cout<<"a is lower then b,c";
    }
    else if(b<a&&b<c)
    {
        cout<<"b is lower then a,c";
    }
    else
    {
        cout<<"c is lower then a,b";
    }
    getch;
}