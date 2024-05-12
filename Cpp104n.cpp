//Find the minimum
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{50,95,67},{96,78,90}};
    int b[3][5]={{46,56,78,96,68},{78,75,21,12,32},{43,32,54,76,45}};

    int M=a[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(M>=a[i][j]);
            {
                M=a[i][j];
            }
        }

    }
    cout<<"Minimum of a array is :"<<M<<endl;

    int N=b[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(N>=b[i][j])
            {
                N=b[i][j];
            }
        }
    }
    cout<<"Minimum of array b is : "<<N<<endl;

    return 0;
}
