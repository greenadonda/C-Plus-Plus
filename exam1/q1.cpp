#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score 0-100: ";
    cin >> score;

    string grade = (score >= 90) ? "A" :
                   (score >= 80) ? "B" :
                   (score >= 70) ? "C" :
                   (score >= 60) ? "D" :
                   (score >= 50) ? "E" : "F";

    cout << "Your grade is: " << grade << endl;
}
