#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string lightColor;

    
    cout << "Enter the traffic light color (Red, Yellow, Green): ";
    cin >> lightColor;

    

    if (lightColor == "red") 
    {
        cout << "Action: Stop" << endl;
    }
    else if (lightColor == "yellow") 
    {
        cout << "Action: Caution" << endl;
    }
    else if (lightColor == "green") 
    {
        cout << "Action: Go" << endl;
    }
    else 
    {
        cout << "Invalid color entered." << endl;
    }

    return 0;
}