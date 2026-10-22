

#include <iostream>
using namespace std;
// Timothy cheruyot
 // CT1011/G/26622/25
//COURSE: COMPUTER SCIENCE


class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "Account successfully created" << endl;
	}
    void displayAccount() {
        cout << "\n--- Bank Account Details ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }

    
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    BankAccount account("Timothy Cheruiyot", 123456, 5000.00);

    account.displayAccount();

    return 0;
}