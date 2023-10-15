#include "Manager.h"
#include <string>

using namespace std;

Manager::Manager(const std::string& name, double wage, int hoursWorked, double bonus)
    : Employee(name, wage, hoursWorked), bonus(bonus) {}

Manager::~Manager() {
    // Destructor implementation if needed
}

double Manager::calcPay() const {
    return Employee::calcPay() + bonus;
}