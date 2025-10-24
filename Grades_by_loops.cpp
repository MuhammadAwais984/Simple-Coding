#include<iostream>
using namespace std;
int main()
{
    int a,marks,total;
    float avg;
    cout<<"How many Subjects you have?\nEnter number:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<"Enter marks of subjects (out of 100): "<<endl;
        cin>>marks;
        if(marks>=90)
        cout<<"Grade=A"<<endl;
        else if(marks>=75)
        cout<<"Grade=B"<<endl;
        else if(marks>=50)
        cout<<"Grad=C"<<endl;
        else
        cout<<"Grade=F"<<endl;
        total+=marks;
    }
    cout<<"Total is: "<<total<<endl;
    avg=total/a;
    int obt=a*100;
    cout<<"Average is: "<<avg<<endl;
    if(avg>=90)
    cout<<"Your Grade is \"A\"\nCongratulations"<<endl;
    else if(avg>=75)
    cout<<"Your Grade is:\"B\"\nCongratulations"<<endl;
    else if(avg>=50)
    cout<<"Your Grade is:\"C\""<<endl;
    else
    cout<<"Your Grade is \"F\"\nSorry you will appea agian"<<endl;

}