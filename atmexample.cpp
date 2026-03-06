#include<iostream>
#include<string>

using namespace std;

class ATM
{
    double balance;
    int pin;
    double amount;
    bool isAuthenticated;

    public:
    ATM()
    {
        this->balance = 10000;
        this->isAuthenticated = false;
    }

    ATM &InsertCard()
    {
        cout << "Card Inserted" << endl;
        return *this;
    }

    ATM &EnterPin()
    {
        cout << "Enter Pin: ";
        cin >> pin;

        if (pin == 1234)
        {
            isAuthenticated = true;
            cout << "Pin Accepted" << endl;
            return *this;
        }
        else
        {
            isAuthenticated = false;
            cout << "Invalid Pin!" << endl;
            return *this;
        }
    }

    ATM &Withdraw()
    {
        if (!isAuthenticated)
        {
            cout << "Authentication required before withdrawal." << endl;
            return *this;
        }

        cout << " Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Please collect your cash" << endl;
            return *this;
        }
        else
        {
            cout << "Insufficient funds or invalid amount!" << endl;
            return *this;
        }
    }

    void CheckBalance()
    {
        if (!isAuthenticated)
        {
            cout << "Authentication required to check balance." << endl;
            return;
        }
        cout << "Current Balance: " << balance << endl;
    }

};

int main()
{
    ATM myATM;

    myATM.InsertCard().EnterPin().Withdraw().CheckBalance();

    return 0;
}
