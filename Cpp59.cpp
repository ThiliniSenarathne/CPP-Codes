/* Find the summation of positive numbers */
#include<iostream>
using namespace std;
int main()
{
    int no=0,sum=0;
    while(no>=0)
    {
      sum=sum+no;            //sum+=no
      cout<<"Enter number : ";
      cin>>no;
    }
    cout<<"Sum is : "<<sum;

    return 0;
}
