#include<iostream>
using namespace std;
int main()
{
    char c;

    cout<<"Enter the Operator : ";
    cin>>c;

    int a=5,b=6;

    switch(c)
    {
        case'+':
        cout<<"(a+b)= "<<a+b;
        break;

        case'-':
        cout<<"(a+b)= "<<a-b;
        break;

        case'*':
        cout<<"(a+b)= "<<a*b;
        break;

        case'/':
        cout<<"(a+b)= "<<a/b;
        break;

        default:
        cout<<"Please RECHECK your operator";
    }
    return 0;
}
