/*Left Rotation
    34 56 78 90 23 => 56 78 90 23 34 */
#include<iostream>
using namespace std;
int main()
{
    int first;
    int a[5]={34,56,78,90,23};

    cout<<"\n Elements of the array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"{"<<i<<"}"<<a[i]<<"\t";
    }
    first=a[0];
    for(int i=0;i<5;i++)
    {
        a[i]=a[i+1];
    }
    a[5-1]=first;
    cout<<"\n\n Elements of the array after left rotation : "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"{"<<i<<"}"<<a[i]<<"\t";
    }
    return 0;
}
