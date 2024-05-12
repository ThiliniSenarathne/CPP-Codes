//calculate sum of array elements
#include<iostream>
using namespace std;
int main()
{
    double sum=0;
    int a[5]={6,10,15,-5,3};  //declaration initialization

    for(int i=0;i<5;i++)   //calculate sum of array elements
    {
        sum=sum+a[i];
    }
    cout<<"Summation of the array : "<<sum<<endl;
    return 0;
}
