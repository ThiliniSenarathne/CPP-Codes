#include<iostream>
using namespace std;
int main()
{
    int i,j,spc,rows,k,t=10;
    cout<<"Input number of rows : ";
    cin>>rows;

    spc=rows+4;
    for(i=1;i<=rows;i++)
    {
        for(k=spc;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        cout<<t++<<" ";
        cout<<endl;
        spc--;
    }
    return 0;
}
