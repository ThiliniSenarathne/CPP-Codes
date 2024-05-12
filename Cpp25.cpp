#include<iostream>
using namespace std;
int main()
{
    int x,y,z,sum,avg;

    cout<<"Enter 1st mark : ";
    cin>>x;

    cout<<"Enter 2nd mark : ";
    cin>>y;

    cout<<"Enter 3rd mark : ";
    cin>>z;

    sum=x+y+z;
    avg=sum/3;

    if(avg>50)
    {
        cout<<"Pass";
    }
    else
    {
        cout<<"Fail";
    }

    return 0;
}
