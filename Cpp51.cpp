/*Find the length of a given number */
#include<iostream>
using namespace std;
int main()
{
    int no;
    int i=0;
    cout<<"Enter any number : ";
    cin>>no;

    while(no>0)
    {
        no=no/10;
        i++;
    }
    cout<<"Length is : "<<i;
    return 0;
}
