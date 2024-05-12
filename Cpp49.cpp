/*Write c++ code to find the factorial of a given number 3!=1*2*3 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    int i=1;

    cout<<"Enter No : ";
    cin>>n;

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}
