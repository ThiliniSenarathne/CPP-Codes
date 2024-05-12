#include<iostream>
using namespace std;
int main()
{
    int c=0;   //c-count
    int a[2][3]={{47,95,67},{2,78,90}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            int f=0;  //f-factors,Every new element should have factor=1, f is a local variable
            for(int k=2;k<=a[i][j];k++)
            {
                if(a[i][j]%k==0)
                {
                    f+=1;
                }
            }
            if(f==1)
            {
                c++;
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<"\nNo of prime numbers is : "<<c;
    return 0;

}
