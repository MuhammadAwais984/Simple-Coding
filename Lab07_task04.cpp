#include<iostream>
using namespace std;

int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
    for(int y=9;y>=0;y--)
    {
       cout<<A[y]<<"\t";
    }
    return 0;
}