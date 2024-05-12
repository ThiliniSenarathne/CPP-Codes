/*Left Rotation
    34 56 78 90 23 => 23 34 56 78 90 */
#include<iostream>
using namespace std;
int main()
{
    int last;
    int a[5]={34,56,78,90,23};

    cout<<"\n Elements of the array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"{"<<i<<"}"<<a[i]<<"\t";
    }
    last=a[4];
    for(int i=3;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=last;
    cout<<"\n\n Elements of the array after left rotation : "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"{"<<i<<"}"<<a[i]<<"\t";
    }
    return 0;
}
