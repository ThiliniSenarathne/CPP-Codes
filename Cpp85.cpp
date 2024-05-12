//Calculate sum of array elements Method2
#include<iostream>
using namespace std;
int main()
{
    double sum=0;
    int a[5];
    a[0]=10;
    a[1]=20;
    a[2]=-10;
    a[3]=-15;
    a[4]=7;

    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
