#include<iostream>
using namespace std;
int main()
{
    int tab,ran;
    cout<<"Enter number whose table you want: "<<endl;
    cin>>tab;
    cout<<"Enter Table range: "<<endl;
    cin>>ran;
    for(int i=1;i<=ran;i++)
    cout<<" "<<tab<<" x  "<<i<<" = "<<i*tab<<endl;
}