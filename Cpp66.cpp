/*Ask the user to enter a number and find the sum of
numbers from 1 to number 1+2+3+4+........+number */

#include<iostream>
using namespace std;
int main()
{
    int no,sum;

    cout<<"Enter number : ";
    cin>>no;

    for(int i=1;i<=no;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}
