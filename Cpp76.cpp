/*Write a program in c++ to count all integer between
  100 and 200 which are divisible by 9 */
  #include<iostream>
  using namespace std;
  int main()
  {
    int i,c=0;
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {
             c=c+1;
        }
    }
    cout<<c<<endl;
  }
