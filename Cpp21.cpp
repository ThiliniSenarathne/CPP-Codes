#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c=5;  //Assignment operators

    cout<<"(a<b) && (b>c) : "<<((a<b) && (b>c))<<endl;   //1 && 1 = 1
    cout<<"(a<b) || (b==c) : "<<((a<b) || (b==c))<<endl; //1 || 0 = 1
    cout<<"!(a>b) : "<<(!(a>b))<<endl;                   //0 bar = 1
    cout<<"(a>b) && (b>c) : "<<((a>b) && (b>c))<<endl;   //0 && 0 = 0
    cout<<"(a<b) || (b==c) : "<<((a<b) || (b==c))<<endl; //1 || 0 = 1
    cout<<"!(a>b) : "<<(!(b>a))<<endl; //1 bar = 0
    return 0;

}
