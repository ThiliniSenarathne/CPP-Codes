#include<iostream>
using namespace std;

int sum(int a,int b,int c)
{
    cout<<"Sum is :"<<a+b+c<<endl;
    return a+b+c;
}
int main()
{
    int sum1;

    sum1=sum(5,6,8);

    if(sum1%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}
