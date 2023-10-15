#include <iostream>
#include <iomanip>
#include "Manager.h"

using namespace std;

int main() {
    int numManagers;
    cout << "Enter number of managers: ";
    cin >> numManagers;

    Manager* managers[numManagers];

     string ordinalNumbers[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth",
                               "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth",
                               "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth",
                               "thirty-first", "thirty-second", "thirty-third", "thirty-fourth", "thirty-fifth", "thirty-sixth", "thirty-seventh", "thirty-eighth", "thirty-ninth", "fortieth",
                               "forty-first", "forty-second", "forty-third", "forty-fourth", "forty-fifth", "forty-sixth", "forty-seventh", "forty-eighth", "forty-ninth", "fiftieth"};

    for (int i = 0; i < numManagers; ++i) 
    {
        string name;
        double wage;
        int hours;
        double bonus;

        cout << "Enter " << ordinalNumbers[i] <<  " manager's name: ";
        cin.ignore(); // Clear newline from previous input
        getline(std::cin, name);

        cout << "Enter " << ordinalNumbers[i] <<  " manager's hourly wage: ";
        cin >> wage;

        cout << "Enter " << ordinalNumbers[i] <<  " manager's worked hours: ";
        cin >> hours;

        cout << "Enter " << ordinalNumbers[i] <<  " manager's bonus: ";
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
