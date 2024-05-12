#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Input number of rows : ";
    cin>>n;

    //spc=rows+4-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-1(i-1) && j<=n+(i-1))
            {
                cout<<"10";
            }
            else
            {
                cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
