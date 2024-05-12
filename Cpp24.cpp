/*Write a c++ program to find the user input value is positive or negative*/

#include<iostream>
using namespace std;

int main()
{
    int x;

    cout<<"Enter no : ";
    cin>>x;

    if(x>0)
    {
        cout<<x<<" is a positive number";
    }
    else
    {
        cout<<x<< " is a negative number";
    }
    return 0;
}
