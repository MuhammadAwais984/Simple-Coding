#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number of weeks: "<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=i;j++)
        {
            cout<<"\nWeek "<<j<<"\nMonday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nSunday"<<endl;

        }
    }
    return 0;
}