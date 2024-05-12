/*Write a program in c++ to display the cube of the number up to 1 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,no;

    cout<<"Enter the number : ";
    cin>>no;

    for(i=1; i<=no; i++)
    {
        cout<<pow(i,3)<<endl;
    }
    return 0;
}
