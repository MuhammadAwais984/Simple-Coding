#include <iostream>
using namespace std;

int main() {
     int marks;

    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    
    if (marks >= 90) 
    {
        cout << "Your grade is A." << endl;
    }
    else if (marks >= 75) 
    {
        cout << "Your grade is B." << endl;
    }
    else if (marks >= 50) 
    {
        cout << "Your grade is C." << endl;
    }
    else if (marks < 50) 
    {
        cout << "Your grade is F." << endl;
    }
    else 
    {
        cout << "Invalid marks entered." << endl;
    }

    return 0;
}