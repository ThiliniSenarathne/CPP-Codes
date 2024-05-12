/*Ask the user to enter a number and value for power
  and find the factorial for the number
        2^3=2*2*2=8;
        3^4=3*3*3*3=81;  */

#include<iostream>
using namespace std;
int main()
{
    int no,power,result=1;

    cout<<"Enter the number for power : ";;
    cin>>no;
    cout<<"Enter the power : ";
    cin>>power;

    for(int i=1;i<=power;i++)
    {
        result=result*no;
    }
    cout<<"Result is : "<<result;
    return 0;
}
