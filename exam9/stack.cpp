#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int *arr;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    Stack() {
        delete[] arr;
    }
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack is full. Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }
    void topElement() {
        if (top == -1)
            cout << "Stack is empty." << endl;
        else
            cout << "Top element: " << arr[top] << endl;
    }
    void isEmpty() {
        if (top == -1)
            cout << "Stack is empty." << endl;
        else
            cout << "Stack is not empty." << endl;
    }
    void isFull() {
        if (top == size - 1)
            cout << "Stack is full." << endl;
        else
            cout << "Stack is not full." << endl;
    }
};
Stack* createStack(int size) {
    return new Stack(size);
}
