/*Write program in c++ to display number in reverse order */
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;

    cout<<"Enter the number : ";
    cin>>n;

    for(n;n>0;n=n/10)
    {
        if(n!=0)
        {
            r=n%10;
            sum=sum*10+r;
        }
        cout<<"The number in reverse order : "<<sum;
    }
    return 0;
}
