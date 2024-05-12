/*Count the even numbers between 50 and 100 */
#include<iostream>
using namespace std;
int main()
{
    int i,c=0; //counter

    for(i=50;i<=100;i=i+2)
    {
        c++;
    }
    cout<<"count of the even number between 50-100 : "<<c<<endl;
    return 0;
}
