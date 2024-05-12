//Two dimensional array
#include<iostream>
using namespace std;
int main()
{
    int M[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"M["<<i<<"]["<<j<<"] = ";
            cin>>M[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"M["<<i<<"]["<<j<<"] = "<<M[i][j]<<endl;
        }
    }
    return 0;
}
