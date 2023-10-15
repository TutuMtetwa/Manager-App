#include <iostream>
#include <iomanip>
#include "Manager.h"

using namespace std;

int main() {
    int numManagers;
    cout << "Enter number of managers: ";
    cin >> numManagers;

    Manager* managers[numManagers];

    for (int i = 0; i < numManagers; ++i) 
    {
        string name;
        double wage;
        int hours;
        double bonus;

        cout << "Enter manager " << i << " name: ";
        cin.ignore(); // Clear newline from previous input
        getline(std::cin, name);

        cout << "Enter manager " << i << " hourly wage: ";
        cin >> wage;

        cout << "Enter manager " << i << " hours worked: ";
        cin >> hours;

        cout << "Enter manager " << i << " bonus: ";
        cin >> bonus;

        managers[i] = new Manager(name, wage, hours, bonus);
    }

    double totalPay = 0;
    Manager* highestPaid = managers[0];

    for (int i = 0; i < numManagers; ++i) {
        totalPay += managers[i]->calcPay();
        if (managers[i]->calcPay() > highestPaid->calcPay()) {
            highestPaid = managers[i];
        }
    }

    double averagePay = totalPay / numManagers;

    cout << fixed << setprecision(2);
    cout << "Highest paid manager is " << highestPaid->getName() << " who is paid $" << highestPaid->calcPay() << std::endl;
    cout << "Average pay is $" << averagePay << endl;

    // Clean up dynamically allocated objects
    for (int i = 0; i < numManagers; ++i) {
        delete managers[i];
    }

    return 0;
}
