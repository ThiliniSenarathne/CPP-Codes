/* write a code to display the description based on the
   input grade :
   Grade Description  E-Excellent
                      V-Very Good
                      G-Good
                      A-Average
                      F-Fail
*/
#include<iostream>
using namespace std;
int main()
{
    char E,V,G,A,F,grade;

    cout<<"Enter your grade : ";
    cin>>grade;

    if(grade=='E' || grade=='e')
    {
        cout<<"Excelent";
    }
    else if(grade=='V' || grade=='v')
    {
        cout<<"Very good";
    }
    else if(grade=='G' || grade=='g')
    {
        cout<<"Good";
    }
    else if(grade=='A' || grade=='a')
    {
        cout<<"Average";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}
