/*Find the summation of odd numbers from 0 to 999*/
#include<iostream>
using namespace std;
int main()
{
    int sum=0;

    for(int i=1;i<=999;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
