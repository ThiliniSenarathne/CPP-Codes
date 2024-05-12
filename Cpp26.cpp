/*Ask the employer to enter the basic salary and over time hours and
find the total salary by using following over time hours>50 :
    total salary=basic salary + basic salary * 0.25
  others :
    total salary = basic salary */

#include<iostream>
using namespace std;
int main()
{
    int basic_salary,over_time,total_salary;

    cout<<"Enter basic salary : ";
    cin>>basic_salary;

    cout<<"Enter over time : ";
    cin>>over_time;

    if(over_time>50)
    {
        total_salary=basic_salary + basic_salary * 0.25;
        cout<<"Total salary is : "<<total_salary;
    }
    else
    {
        total_salary = basic_salary;
        cout<<"Total salary is : "<<total_salary;
    }

    return 0;
}
