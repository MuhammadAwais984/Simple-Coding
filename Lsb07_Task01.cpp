#include<iostream>
using namespace std;

int main()
{
    int a,x;
    cout<<"Enter the size of array:"<<endl;
    cin>>a;
    int A[a];
    for( x=0;x<a;x++)
    {
        cout<<"Eneter value to store in array: "<<endl;
        cin>>A[x];
    }
    cout<<"You entered :\n"<<endl;
    for(int y=0;y<=a;y++)
    {
        cout<<A[y]<<endl;
    } 


    return 0;
}

