/*Two dimensional Array */       //Assign values and display
#include<iostream>
using namespace std;
int main()
{
    int M[3][4];            //Manually Insert the values

    M[0][0]=5;     M[0][1]=8;     M[0][2]=9;      M[0][3]=7;
    M[1][0]=5;     M[1][1]=8;     M[1][2]=9;      M[1][3]=7;
    M[2][0]=5;     M[2][1]=8;     M[2][2]=9;      M[2][3]=7;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"M["<<i<<"]["<<j<<"]="<<M[i][j]<<endl;
        }
    }
    return 0;
}
