#include<iostream>
#include<string>

using namespace std;

class ATM
{
    double balance;
    int pin;
    double amount;

    public:
    ATM()
    {
        this->balance = 10000;
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
            cout << "Pin Accepted" << endl;
            return *this;
        }
        else
        {
            cout << "Invalid Pin!" << endl;
            return *this;
            exit(0);
        }
    }

    ATM &Withdraw()
    {
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
        cout << "Current Balance: " << balance << endl;
    }

};

int main()
{
    ATM myATM;

    myATM.InsertCard().EnterPin().Withdraw().CheckBalance();

    return 0;
}