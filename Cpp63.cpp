/*Ask the user to enter a number and value for power
  and find the factorial for the number
        2^3=2*2*2=8;
        3^4=3*3*3*3=81;  */
#include<iostream>
using namespace std;
int main()
{
    int no,pow,result=1;

    cout<<"Enter a number to find the power : ";
    cin>>no;
    cout<<"Enter value of power : ";
    cin>>pow;

    do
    {
        result=result*no;
        --pow;
    }
    while(pow>0);
    cout<<"result is :"<<result;
    return 0;
}
