#include<iostream>
using namespace std;
int main()
{
    int matrix1[3][3]={{10,22,38},{45,32,56},{67,12,33}};
    int matrix2[3][3]={{23,45,60},{38,62,40},{17,24,44}};
    int c[3][3];

    for(int i=0;i<3;i++)
    {
        //int c;
        for(int j=0;j<3;j++)
        {
            //int c;
             c[i][j]=0;
            for(int k=0;k<3;k++)
            {
                c[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        //int c;
        for(int j=0;j<3;j++)
        {
            //int c;

            //for(int k=0;k<3;k++)
            {
                cout<<c[i][j]<<"\t";
            }
        }
        cout<<endl;
    }

}
