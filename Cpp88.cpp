/*A subject has 10 Assignment and for find the final marks
we need to the average of those marks */
//By using manual way

#include<iostream>
using namespace std;
int main()
{
    int marks1 = 30;
    int marks2 = 40;
    int marks3 = 50;
    int marks4 = 60;
    int marks5 = 70;
    int marks6 = 80;
    int marks7 = 90;
    int marks8 = 25;
    int marks9 = 35;
    int marks10 = 45;

    int sum = marks1 + marks2 + marks3 + marks4 + marks5 + marks6 + marks7 + marks8 + marks9 + marks10;
    int avg = sum/10;
    cout<<"Average is :"<<avg;
    return 0;
}
