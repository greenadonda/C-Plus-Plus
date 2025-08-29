#include <iostream>
using namespace std;

int main() 
{
    int num, count = 0;
    cout << "Enter any number: ";
    cin >> num;

    do 
    {
        count++;
        num /= 10;
    } while (num > 0);

    cout << "Total number of digits: " << count;
}
