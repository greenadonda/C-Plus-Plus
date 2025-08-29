#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}
int subtract(int a, int b) 
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b) 
{
    if (b == 0) 
    {
        cout << "Error: Division by zero!" << endl;
    }
    return a / b;
}
int mod(int a, int b) 
{
    if (b == 0)
    {
        cout << "Error: Modulo by zero!" << endl;
    }
    return a % b;
}

int main() {
    int choice, num1, num2;

    do {
        cout << "\nPress 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program..." << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Modulo of " << num1 << " and " << num2 << " is " << mod(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (true);
}
