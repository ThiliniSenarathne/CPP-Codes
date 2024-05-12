#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2;

    cout<<"Enter NO1 : ";
    cin>>x1;

    cout<<"Enter NO2 : ";
    cin>>x2;

    cout<<"Enter NO3 : ";
    cin>>y1;

    cout<<"Enter NO4 : ";
    cin>>y2;

    cout<<"Answer is : "<<sqrt(pow((x1-x2),2)+pow((y1-y2),2));

    return 0;
}
