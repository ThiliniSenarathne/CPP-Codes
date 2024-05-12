#include<iostream>
using namespace std;
int main()
{
    int c;

    cout<<"Enter your points : ";
    cin>>c;

    switch(c)
    {
        case 8 ... 10 :
            cout<<"Excelent";
            break;

        case 5 ... 7 :
            cout<<"Good";
            break;

        case 1 ... 4 :
            cout<<"Poor";
            break;

        default :
            cout<<"Please looking for grade";
    }
    return 0;
}
