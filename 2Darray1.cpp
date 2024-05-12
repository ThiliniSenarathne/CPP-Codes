#include<iostream>
using namespace std;
int main()
{
    int rowSize,colSize;
    cout<<"Enter no of rows :";
    cin>>rowSize;

    cout<<"Enter no of columns :";
    cin>>colSize;

    int arr[rowSize][colSize];
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            cout<<"Enter elements : ["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            cout<<"["<<i<<"]["<<j<<"] :"<<arr[i][j];
        }
        cout<<endl;
    }
    //summation of array
    int sum;
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<endl;
    }
    cout<<"sum = "<<sum<<endl;

    int min=arr[0][0], max=arr[0][0];
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            if(min>arr[i][j])
            {
                min=arr[i][j];
            }
        }
    }
    cout<<"max :"<<max<<endl;
    cout<<"min :"<<min<<endl;
    cout<<endl;

    int rowmin,rowmax,rowsum=0;
    for(int i=0;i<rowSize;i++)
    {
        rowsum=0;
        for(int j=0;j<colSize;j++)
        {
            rowsum=rowsum+arr[i][j];
        }
        cout<<"Summation of row : "<<(i+1)<<":"<<rowsum<<endl;
    }
     rowmax=arr[0][0];
     for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            if(rowmax<arr[i][j])
            {
                rowmax=arr[i][j];
            }
        }
        cout<<"maximum of row  "<<(i+1)<<":"<<rowmax<<endl;
    }
    rowmin=arr[0][0];
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            if(rowmin>arr[i][j])
            {
                rowmin=arr[i][j];
            }
        }
        cout<<"minimum of row  "<<(i+1)<<":"<<rowmin<<endl;
    }

    int colsum,colmax,colmin;
    for(int j=0;j<colSize;j++)
    {
        colsum=0;
        colmax=arr[0][0];
        colmin=arr[0][0];
        for(int i=0;i<rowSize;i++)
        {
            colsum=colsum+arr[i][j];
             if(colmax<arr[i][j])
                {
                    colmax=arr[i][j];
                }
                 if(rowmin>arr[i][j])
            {
                rowmin=arr[i][j];
            }
        }
       cout<<"Summation of col : "<<(j+1)<<":"<<colsum<<endl;
       cout<<"maximum of col  "<<(j+1)<<":"<<colmax<<endl;
       cout<<"minimum of col  "<<(j+1)<<":"<<rowmin<<endl;

    }

    return 0;
}
