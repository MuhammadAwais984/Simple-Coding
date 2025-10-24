#include <iostream>
using namespace std;

int main() {
    float hoursStudied[10]; 
    float maxHours = 0;
    int studentWithMaxHours = 0;

    
    for (int i = 0; i < 10; i++) {
        cout << "Enter the number of hours studied by student " << (i + 1) << ": ";
        cin >> hoursStudied[i];

              
            if (hoursStudied[i] > maxHours) {
            maxHours = hoursStudied[i];
            studentWithMaxHours = i + 1;  
        }
    }

        cout << "\nHours studied by each student:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": " << hoursStudied[i] << " hours" << endl;
    }

        cout << "\nStudent " << studentWithMaxHours << " studied the most with " << maxHours << " hours." << endl;

    return 0;
}
