#include <iostream>
using namespace std;
class Stack;
Stack* createStack(int size);

int main() {
    int size;
    cout << "Enter stack size: ";
    cin >> size;

    Stack* s = createStack(size);
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push an element\n";
        cout << "2. Pop an element\n";
        cout << "3. Display top element\n";
        cout << "4. Check if stack is empty\n";
        cout << "5. Check if stack is full\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s->push(value);
            break;
        case 2:
            s->pop();
            break;
        case 3:
            s->topElement();
            break;
        case 4:
            s->isEmpty();
            break;
        case 5:
            s->isFull();
            break;
        case 6:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);

    delete s;
    return 0;
}
