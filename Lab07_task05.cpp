#include<iostream>
using namespace std;

int main()
{
    int A[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter digit "<<(i+1)<<": "<<endl;
        cin>>A[i];
    }
    cout<<"\nNumber of positive integers are: \n"<<endl;
    for(int i=0;i<10;i++)
    {
        if(A[i]>=0)
        cout<<A[i]<<endl;
        else
        continue;
    }
    cout<<"Negative integers are:\n"<<endl;
    for(int i=0;i<10;i++)
    {
        if(A[i]<0)
        cout<<A[i]<<endl;
        else
        continue;
    }
    cout<<"\nOdd numbers are: \n"<<endl;
    for(int i=0;i<10;i++)
    {
        if(A[i]%2==1)
        cout<<A[i]<<endl;
        else
          continue;
    }
    return 0;
}