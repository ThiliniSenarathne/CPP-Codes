#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{50,95,67},{96,78,90}};
    int b[3][5]={{46,56,78,96,68},{78,75,21,12,32},{43,32,54,76,45}};

    int temp;
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            for(int j=c+1;j<3;j++)
            {
                if(a[r][c]>a[r][j])
                {
                    temp=a[r][c];
                    a[r][c]=a[r][j];
                    a[r][j]=temp;
                }
            }
            cout<<"a["<<r<<"]["<<c<<"]:"<<a[r][c]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;


    for(int r=0;r<3;r++)
    {
        for(int c=0;c<5;c++)
        {
            for( int j=c+1;j<5;j++)
            {
                if(b[r][c]>b[r][j])
                {
                    temp=b[r][c];
                    b[r][c]=b[r][j];
                    b[r][j]=temp;
                }
            }
            cout<<"b["<<r<<"]["<<c<<"]:"<<b[r][c]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
