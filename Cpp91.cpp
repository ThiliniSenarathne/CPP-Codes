/*Create an integer array with the size 10
    1).Get the values from user to store in the array
    2).Find the reminder by 2 and store at the indexes
    3).Count the add and Even */

#include<iostream>
using namespace std;
int main()
{
    int ce=0,co=0; //Count_even,Count_odd
    int a[10];

    for(int i=0;i<10;i++)
    {
        cout<<"Enter VAlue"<<i<<+1<<": ";
        cin>>a[i];
    }
    cout<<endl;
    //This part not ask in the question only display array elements
    for(int i=0;i<10;i++)
    {
        if(i==0)
        {
            cout<<"a = "<<"{";
        }
        cout<<a[i];

        if(i<=8 && i>=0)
        {
           cout<<",";
        }
        if(i==9)
        {
            cout<<"}";
        }
    }
    cout<<endl;
    cout<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<"new arrat["<<i<<"]: "<<a[i]%2<<endl;
    }
    cout<<endl;

    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            ce=ce+1;
        }
        else
        {
            co=co+1;
        }
    }
    cout<<"Even numbers count : "<<ce<<endl;
    cout<<"Odd numbers count : "<<co<<endl;
    return 0;
}
