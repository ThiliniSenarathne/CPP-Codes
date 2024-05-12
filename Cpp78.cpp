    /*Write a program in c++ to find the prime numbers */
    #include<iostream>
    using namespace std;
    int main()
    {
        int n,f=0;  //factors
        cout<<"Enter number : ";
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                f=f+1;
            }
        }
        if(f==2)
        {
            cout<<"Prime Number";
        }
        else
        {
            cout<<"Not a Prime Number";
        }
        return 0;
    }
