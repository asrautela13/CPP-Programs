#include <iostream>
using std::cin;
using std::cout;

int main()
{
    const int perDollar{100};
    const int perQuater{25};
    const int perDime{10};
    const int perNikel{5};
    const int perPenny{1};

    unsigned int changeAmount{};

    cout << "\n*********__WELCOME TO AMIT CURRENCY CONVERTER__********* \n\n";

    cout << "\nEnter the cents you want to change :\n";
    cin >> changeAmount;

    int remainingBalance{}, dollar{}, quater{}, dime{}, nikel{}, penny{};

    dollar = changeAmount / perDollar;
    remainingBalance = changeAmount % perDollar;

    quater = remainingBalance / perQuater;
    remainingBalance %= perQuater;

    dime = remainingBalance / perDime;
    remainingBalance %= perDime;

    nikel = remainingBalance / perNikel;
    remainingBalance %= perNikel;

    penny = remainingBalance / perPenny;
    remainingBalance %= perPenny;

    cout << "\nYOUR CHANGES ARE AS FOLLOWS:- \n\n";
    cout << "Dollar : $" << dollar << "\n";
    cout << "Quater : $" << quater << "\n";
    cout << "Dime   : $" << dime << "\n";
    cout << "Nikel  : $" << nikel << "\n";
    cout << "Penny  : $" << penny << "\n";

    return 0;
}
