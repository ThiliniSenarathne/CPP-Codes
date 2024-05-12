/*write a program in c++ to display the multiplication
table vertically from 1 to n*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,no;

    cout<<"Enter the number : ";
    cin>>no;

    for(i=1; i<=no; i++)
    {
        for(j=1;j<=no;j++)
        {
            cout<<i<<" * "<<j<<" = "<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
