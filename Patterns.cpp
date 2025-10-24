# include <iostream>
using namespace std;
int main()
{
    int rows,iter,col;
    cout<<"Enter value of rows: "<<endl;
    cin>>rows;
    cout<<"Enter iteration value: "<<endl;
    cin>>iter;
    for (rows=0;rows<iter;rows++)
    {
        for(col=rows;col<iter;col++)
        {
        cout<<"*";    
        }
        cout<<endl;
    }
    
}