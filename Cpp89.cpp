/*A subject has 10 Assignment and for find the final marks
we need to the average of those marks */
#include<iostream>
using namespace std;
int main()
{
    int marks[10]={30,40,45,50,66,56,78,90,67,34};
    int sum=0;

    for(int i=0;i<10;i++)
    {
        sum=sum+marks[i];
    }
    int avg=sum/10;
    cout<<"Average is : "<<avg;
    return 0;
}
