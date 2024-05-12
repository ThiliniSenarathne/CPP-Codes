#include<iostream>
using namespace std;
int main()
{
    string name,address,reg_no;
    char sex;

    //getline can use only string variable

    cout<<"Enter your full name :";
    getline(cin,name);

    cout<<"Enter your address :";
    getline(cin,address);

    cout<<"Enter your Registration number :";
    getline(cin,reg_no);

    cout<<"Enter your gender :";
    cin>>sex;

    cout<<endl;

    cout<<"Name is : "<<name<<endl;
    cout<<"Address is : "<<address<<endl;
    cout<<"Registration number : "<<reg_no<<endl;
    cout<<"Gender is : "<<sex<<endl;

    return 0;
}
