/*find the greatest common divisor(GCD) of given two numbers */
#include<iostream>
using namespace std;

int main()
{
    int no1,no2,gcd,t;

    cout<<"Enter NO1 : ";
    cin>>no1;

    cout<<"Enter NO2 : ";
    cin>>no2;

    while(no2!=0)
    {
        t=no2;
        no2=no1%no2;
        no1=t;
    }
    gcd=no1;

    cout<<"GCD is : "<<gcd<<endl;
    return 0;
}
