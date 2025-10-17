#include "Banksystem.cpp"
using namespace std;

int main()
{
    int choice;
    SavingsAccount sav;
    CheckingAccount cas;
    FixedDepositAccount fai;

    do
    {
        cout << "\n--- Bank System Menu ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Get Balance\n";
        cout << "5. Get Account Info\n";
        cout << "6. Set Interest Rate\n";
        cout << "7. Check Overdraft\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sav.bankAccount();
            cout << "Account Created Successfully\n";
            break;
        case 2:
            sav.deposit();
            cout << endl;
            break;
        case 3:
            sav.setwithdraw();
            sav.getwithdraw();
            cout << endl;
            break;
        case 4:
            sav.getBalance();
            cout << endl;
            break;
        case 5:
            sav.getAccountInfo();
            cout << endl;
            break;
        case 6:
            sav.calculateInterest();
            cout << endl;
            break;
        case 7:
            cas.checkOverdraft();
            cout << endl;
            break;
        case 8:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0 && choice != 8);

    return 0;
}
