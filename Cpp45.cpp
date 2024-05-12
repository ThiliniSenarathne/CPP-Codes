/*Find the summation of odd numbers from 0 to 10 */
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;

    for(i=0;i<=10;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
            cout<<sum<<endl;
        }
    }
    return 0;
}
