#include<iostream>
using namespace std;

void Display_details(string firstName, string LastName,string LevelOfStudy,string RegistrationNumber,string Distric)
{


    cout<<"First name : "<<firstName<<"\nLast nMAe :"<<LastName<<"\nLevel : "<<LevelOfStudy;
}
int main()
{
    string firstName,LastName,LevelOfStudy,RegistrationNumber,Distric;
    cout<<"Enter your first name : ";
    cin>>firstName;

    cout<<"Enter your last name : ";
    cin>>LastName;

    cout<<"Enter your Level of study : ";
    cin>>LevelOfStudy;

    cout<<"Enter your registration number : ";
    cin>>RegistrationNumber;

    cout<<"Enter your distric : ";
    cin>>Distric;

    Display_details(firstName,LastName,LevelOfStudy,RegistrationNumber,Distric);
    return 0;

}
