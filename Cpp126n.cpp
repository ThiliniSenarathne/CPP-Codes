#include<iostream>
using namespace std;
void Fibonnaci()
{
    int f=0,s=1,z=0,n;

    cout<<"Enter Range : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<f<<",";
        }
        if(i==1)
        {
            cout<<s<<",";
        }
        z=f+s;
        f=s;
        s=z;
        cout<<z<<",";
    }
}
int min()
{
    Fibonnaci();
    return 0;
}
