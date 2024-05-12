#include<iostream>
using namespace std;
int main()
{
    double a,b,c,exp;

    cout<<"Enter NO1 : ";
    cin>>a;

    cout<<"Enter NO2 : ";
    cin>>b;

    cout<<"Enter NO3 : ";
    cin>>c;

    exp=(a+b)*(a+c)/(a-b);

    cout<<"Expression Value is :"<<exp;

    return 0;
}
