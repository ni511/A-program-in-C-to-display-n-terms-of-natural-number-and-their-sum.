//Write a program in C++ to display n terms of natural number and their sum.
#include<iostream>
using  namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the integers for sum:\n";
    cin>>n;
    cout<<"The natural numbers upto"<<n<<"th terms are:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The Sum of the natural numbers is:"<<sum<<endl;
    return 0;
}