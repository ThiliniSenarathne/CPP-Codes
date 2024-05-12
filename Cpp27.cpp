#include<iostream>
using namespace std;
int main()
{
    int NO1,NO2,NO3;

    cout<<"Enter NO 1 : ";
    cin>>NO1;

    cout<<"Enter NO 2 : ";
    cin>>NO2;

    cout<<"Enter NO 3 : ";
    cin>>NO3;

    if(NO1>NO2)
    {
        if(NO1>NO3)
        {
            cout<<"NO1 is the largest number : "<<NO1;
        }
        else
        {
            cout<<"No3 is the largest number : "<<NO3;
        }
    }
    else
    {
        if(NO2>NO3)
        {
            cout<<"NO2 is the largest number : "<<NO2;
        }
        else
        {
            cout<<"NO3 is the largest number : "<<NO3;
        }
    }
    return 0;
}
