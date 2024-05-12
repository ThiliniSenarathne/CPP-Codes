/*write c++ code to find the factorial of a given number */
#include<iostream>
using namespace std;
int main()
{
    int i,x,fac=1;

    cout<<"Enter No: ";
    cin>>x;

    for(int i=1;i<=x;i++)
    {
        fac=fac*i;
        cout<<fac<<endl;
    }
    return 0;
}
