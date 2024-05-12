//count the prime numbers
#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int a[3][5]={{46,56,78,96,68},{78,75,21,87,32},{46,56,78,96,68}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            int f;
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
    cout<<"Number of values : "<<c;
    return 0;
}
