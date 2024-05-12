#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i=0;

    while(i<5)
    {
        a[i]=i+1;
        cout<<"a["<<i<<"] : "<<a[i]<<endl;
        i=i+1;
    }
    return 0;
}
