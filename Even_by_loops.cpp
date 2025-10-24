#include<iostream>
using namespace std;
int main()
{
    int ran;
    cout<<"How many even numbers you want?\nPlease Enter."<<endl;
    cin>>ran;
    cout<<"Even numbers are: "<<endl;
    for(int i=0;i<=ran;i=i+2)
    cout<<" "<<i<<endl;

}