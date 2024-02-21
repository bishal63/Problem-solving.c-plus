//exam ar prapto number ar grade bair korar problem

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your exam number:";
    cin>>number;
    if(number>=80)
    {
        cout<<"Grade:A+";
    }
    else if(number>=70)
    {
        cout<<"Grade:A";
    }
    else if(number>=60)
    {
        cout<<"Grade:A-";
    }
    else if(number>=50)
    {
        cout<<"Grade:B";
    }
    else if(number>=40)
    {
        cout<<"Grade:C";
    }
    else if(number>=33)
    {
        cout<<"Grade:D";
    }
    else
    {
        cout<<"Grade:F(fail)";
    }
    getch;
}