#include <iostream>
using namespace std;

class Account
{
public:
    int accNo;
    float balance;

    void accept()
    {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void interest()
    {
        if (balance >= 5000)
            balance += balance * 0.10;
    }

    void display()
    {
        cout << "Account No: " << accNo
             << ", Balance: " << balance << endl;
    }
};

int main()
{
    Account acc[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nAccount " << i + 1 << ":" << endl;
        acc[i].accept();
    }

    for (int i = 0; i < 5; i++)
    {
        acc[i].interest();
    }

    cout << "\nAccount details after applying interest:\n";
    for (int i = 0; i < 5; i++)
    {
        acc[i].display();
    }

    return 0;
}
