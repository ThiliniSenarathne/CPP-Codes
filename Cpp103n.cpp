#include<iostream> //Find the maximum
using namespace std;
int main()
{
    int a[2][3]={{50,95,67}, {96,78,90}};
    int b[3][5]={{46,56,78,100,68},{78,75,21,12,32},(43,32,54,76,45)};

    int M=a[0][0];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(M<=a[i][j])
            {
                M=a[i][j];
            }
        }
    }
    cout<<"Maximum of a array a is : "<<M<<endl;


    int N=b[0][0];

    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=5;j++)
        {
            if(N<=b[i][j])
            {
                N=b[i][j];
            }
        }
    }
    cout<<"Maximum of b array is : "<<N<<endl;
    return 0;
}
