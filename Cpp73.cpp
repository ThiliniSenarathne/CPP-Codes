/*write a program in c++ to find the sum of the series
1 + 1/2^2 + 1/3^3 + ....... + 1/n^n   */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double no,i=1,sum=0,x;

    cout<<"Enter the number : ";
    cin>>no;

    while(i<=no)
    {
        x=1/(pow(i,i));
        sum=sum+x;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
