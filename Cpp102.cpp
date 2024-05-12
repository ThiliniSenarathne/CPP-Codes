/*Check whether the given number exist in both arrays*/
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{50,95,67}, {96,78,90}};
    int b[3][5]={{46,56,78,96,68},{78,75,21,12,32},(43,32,54,76,45)};

    int n;
    bool f1=0,f2=0;

    cout<<"Enter No : ";
    cin>>n;

    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(a[r][c]==n)
            {
                f1=1;
            }
        }
    }
    return 0;
}
