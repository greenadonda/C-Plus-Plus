#include <iostream>
using namespace std;
int cube(int *x) 
{
    return (*x) * (*x) * (*x);
}

int main() {
    int row, col;
    cout << "Enter array row size: ";
    cin >> row;
    cout << "Enter array column size: ";
    cin >> col;

    int arr[row][col];

    cout << "\nEnter array elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*(arr + i) + j); 
        }
    }

    cout << "\nCubes of all elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << cube(*(arr + i) + j) << "\t";  
        }
        cout << endl;
    }
}
