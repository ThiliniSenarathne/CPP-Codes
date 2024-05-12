/*Write a c++ program to find the user input value is odd or even*/

#include<iostream>
using namespace std;
int main()
{
    int x,R;

    cout<<"Enter number : ";
    cin>>x;

    R=x%2;

    if(R==0)
    {
        cout<<x<<" is a even number";
    }
    else
    {
        cout<<x<<" is a odd number";
    }
    return 0;
}
