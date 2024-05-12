/*Ask the user to enter a number and find the sum of numbers from 1
 to the 1+2+3+4+5......+number */
 #include<iostream>
 using namespace std;
 int main()
 {
    int no,sum;   //no=number

    cout<<"Enter Integer number : ";
    cin>>no;

    while(no>=1)
    {
        sum=sum+no;
        --no;
    }
    cout<<"Sum is : "<<sum;

    return 0;
 }
