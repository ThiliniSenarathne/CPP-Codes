#include<iostream>
using namespace std;
int main()
{
    string name,address,reg_no;
    char sex;

    cout<<"Enter your full name : ";
    cin>>name;

    cout<<"Enter your address : ";
    cin>>address;

    cout<<"Enter your registration number : ";
    cin>>reg_no;

    cout<<"Enter your gender : ";
    cin>>sex;

    cout<<endl;

    cout<<"Name is : "<<name<<endl;
    cout<<"Address is : "<<address<<endl;
    cout<<"Registration number : "<<reg_no<<endl;
    cout<<"Gender is : "<<sex<<endl;

    return 0;
}
