/*Write a c++ code to find the fibonacci series for a given numbers */
#include<iostream>
using namespace std;
int main()
{
    int i,x,f=1,s=2,z;  //f=first no    //s=second no    z=output

    cout<<"Enter number : ";
    cin>>x;

    for(i=1;i<=x;i++)
    {
        cout<<f<<endl;

        z=f+s;    //output = first no + second no;
        f=s;      //second no should be first no
        s=z;      //output should be second no
    }
    return 0;
}
