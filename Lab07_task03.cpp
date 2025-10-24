#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter 7 integers:"<<endl;
    int A[7];
    for(int x=0;x<7;x++)
    {
        cout<<"Enter digit "<<(x+1)<<": "<<endl;
        cin>>A[x];
    } 
    cout<<"Multiple of 5 are :"<<endl;
    for(int x=0;x<7;x++)
    {
        if(A[x]%5==0)
        cout<<A[x]<<endl;
        else
           continue;
    }

    return 0;
}
