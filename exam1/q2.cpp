#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    char grade;
    grade = (mark >= 91 && mark <= 100)     ? 'A'
        :(mark >= 81 && mark <= 90)         ? 'B' 
        : (mark >= 71 && mark <= 80)        ? 'C' 
        : (mark >= 61 && mark <= 70)        ? 'D' 
        :(mark >= 41 && mark <= 60)         ? 'E' 
        : (mark >= 33 && mark <= 40)        ? 'F' 
        : 'g'; 
              
    switch (grade) {
        case 'A':
            cout << "Excellent work!, grade" << grade << endl;
            break;
        case 'B':
            cout << "Well done!, grade " << grade << endl;
            break;
        case 'C':
            cout << "Good job!, grade " << grade << endl;
            break;
        case 'D':
            cout << "You Passed, but you could do better, grade "<< grade << endl;
            break;
        case 'E':
            cout <<  "Work harder next time ,grade " << grade << endl;
            break;
        case 'F':
            cout << "Sorry, you failed,grade " << grade << endl;
            break;
        default:
            cout << "Invalid mark!" << endl;
    }
}