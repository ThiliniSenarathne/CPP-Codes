/*Display the following pattern
    1 1 1 1 1 1 1 1 1 1
    2 2 2 2 2 2 2 2 2 2
    3 3 3 3 3 3 3 3 3 3
    4 4 4 4 4 4 4 4 4 4
    5 5 5 5 5 5 5 5 5 5
    6 6 6 6 6 6 6 6 6 6
    7 7 7 7 7 7 7 7 7 7
    8 8 8 8 8 8 8 8 8 8
    9 9 9 9 9 9 9 9 9 9
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
