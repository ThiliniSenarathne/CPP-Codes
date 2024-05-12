/*Ask the user to enter a number and find the sum of numbers from
  1 to the number 1+2+3+4+5+..........+number */

#include<iostream>
using namespace std;
int main()
{
    int no,sum;

    cout<<"Enter number : ";
    cin>>no;

    do
    {
        sum=sum+no;
        --no;
    }
    while(no>=1);
    cout<<"Sum is : "<<sum;
    return 0;
}
