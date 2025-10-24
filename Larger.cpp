#include <iostream>
using namespace std;

int main() 
{
    
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;
    if (num1 > num2) 
    {
        cout << "The first number (" << num1 << ") is larger." << endl;
    } 
    else if (num2 > num1) 
    {
        cout << "The second number (" << num2 << ") is larger." << endl;
    } 
    else 
    {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}