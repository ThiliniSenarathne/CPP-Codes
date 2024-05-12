#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter number 1: ";
    cin>>a;

    cout<<"Enter number 2: ";
    cin>>b;

    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    cout<<"GCD is : "<<a<<endl;
    return 0;
}
