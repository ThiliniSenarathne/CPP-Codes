/*Reverse
    34 56 78 90 23 => 23 90 78 56 34 */

#include<iostream>
using namespace std;
int main()
{
    int first;
    int a[5]={34,56,78,90,23};

    cout<<"Elements of the array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"{"<<i<<"}"<<a[i]<<"\t";
    }
    for(int j=0;j<5;j++)
    {
        int first=a[0];
        for(int i=1;i<5-j;i++)
        {
            a[i-1]=a[i];
        }
        a[4-j]=first;
    }
    cout<<"\n\n Elements of the array after reverse rotation : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"{"<<i<<"}"<<a[i]<<"\t";
    }
    return 0;
}
