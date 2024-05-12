#include <iostream>
using namespace std;
int main()
{
   //two dimensional array
   int anArray[2][3]={
            {23,45,64},//row 0
            {56,78,90} //row 1
        };
    int anArray2[3][5]{
            {45,56,78,90,52},//row 0
            {78,90,21,54,32},//row 1
            {43,32,54,76,88}//row 2
        };

    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
           cout<<" ["<<row<<"]["<<col<<"]:"<<anArray[row][col];
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<" ["<<i<<"]["<<j<<"]:"<<anArray2[i][j];
        }
         cout<<endl;
    }

    return 0;
}
