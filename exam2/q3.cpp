#include <iostream>
using namespace std;

int main()
{
    int num, first, last;
    cout << "Enter any number: ";
    cin >> num;

    last = num % 10; 

    while (num >= 10) 
    {
        num /= 10;  
    }
    first = num;
    cout << "Sum of first and last digit: " << first + last;
}
