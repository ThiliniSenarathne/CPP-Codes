/*Find the summation of positive numbers */
#include<iostream>
using namespace std;
int main()
{
    int no=0,sum=0;

    do
    {
        sum=sum+no;
        cout<<"Enter Number : ";
        cin>>no;
    }
    while(no>=0);
    cout<<"Summation is : "<<sum;
    return 0;
}
