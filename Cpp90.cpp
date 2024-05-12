/*Create an array with the values 9,18,27,36,45,54
    1).Display the 4th value of the array
    2).Find the summation of 3rd value and 5th value
    3).Update the 2nd index value as 96
*/
#include<iostream>
using namespace std;
int main()
{
    int a[6]={9,18,27,36,45,54};
    cout<<"4th value is : "<<a[3]<<endl;

    int sum =a[2]+a[4];
    cout<<"summation of 3rd value and 5th value : "<<sum<<endl;

    a[2]=96;
    cout<<"2nd index value is : "<<a[2];
    return 0;
}
