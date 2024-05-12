#include<iostream>
using namespace std;
int main()
{
    //store the car sales information in an array
    int sales[6][5]={{10,7,12,10,4},
                {18,11,15,17,10},
                {12,10,9,5,13},
                {16,6,13,8,3},
                {10,7,12,6,4},
                {9,4,7,12,11} };

    string color[5]={"Red","Brown","Black","White","Gray"};
    string brand[6]={"Honda","Ford","GM","Toyota","Nissan","BMW"};

    //print car sales information
    for(int row=0;row<6;row++)
    {
        for(int col=0;col<5;col++)
        {
            cout<<sales[row][col]<<"\t";
        }
        cout<<endl;
    }
    /*int colmax,colmaxIndex;
   for(int col=0;<col<5;col++)
    {
        colmax=sales[0][col];
        colmaxIndex=0;
        for(int row=0;row<6;row++)
        {
            if(colmax<sales[row][col])
            {
                colmax=sales[row][col];
                colmaxIndex=row;
            }
        }
        cout<<"Brand : "<<brand[colmaxIndex]<<"\tsales : "<<colmax<<endl;
    }
    cout<<endl;*/
    int rowMax,rowMaxIndex;
    for(int row=0;row<6;row++)
    {
        rowMax=sales[row][0];
        for(int col=0;col<5;col++)
        {
            if(rowMax<sales[row][col])
            {
                rowMax=sales[row][col];
                rowMaxIndex=col;
            }

        }
        cout<<"Color :"<<color[rowMaxIndex]<<"\tsales :"<<rowMax;
    }
    cout<<endl;
return 0;
}
