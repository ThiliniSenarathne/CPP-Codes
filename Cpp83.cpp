#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int a[5];

    a[0]=1;  //Insert the values into the array
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;

    while(i<5)
    {
        cout<<"a["<<i<<"] : "<<a[i]<<endl;
        i=i+1;
    }
    return 0;
}
