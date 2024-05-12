/*Find the miniimum number*/
#include<iostream>
using namespace std;
int main()
{
    int a[10]={46,56,78,96,68,78,75,21,12,32};
    int M=a[0];
    for(int i=1;i<10;i++)
    {
        if(M>a[i])
        {
            M=a[i];
        }
    }
    cout<<"Minimum is :"<<M;
    return 0;
}
