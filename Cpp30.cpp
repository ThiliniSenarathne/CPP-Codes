#include<iostream>
using namespace std;
int main()
{
    char c;

    cout<<"Enter your grade : ";
    cin>>c;

    switch(c)
    {
        case 'E':
        case 'e':
            cout<<"Excelent";
            break;

        case 'V':
        case 'v':
            cout<<"Very Good";
            break;

        case 'G':
        case 'g':
            cout<<"Good";
            break;

        case 'A':
        case 'a':
            cout<<"Average";
            break;

        case 'F':
        case 'f':
            cout<<"Fail";
            break;

        default:
            cout<<"Please looking for a grade";

    }
    return 0;
}
