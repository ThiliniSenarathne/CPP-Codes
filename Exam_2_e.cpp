#include<iostream>
using namespace std;
int main()
{
    string s1 = "wood";
    string s2= " is my world";
    cout<<s1<<endl;
    s1[0] = 'F';
    cout<<s1<<endl;
    string s3=s1+s2;
    cout<<s3<<endl;
    return 0;
}
