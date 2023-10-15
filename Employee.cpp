#include "Employee.h"
#include <string>

Employee::Employee(const std::string& name, double wage, int hoursWorked)
    : name(name), hourlyWage(wage), hoursWorked(hoursWorked) {}

Employee::~Employee() {
    // Destructor implementation if needed
}

double Employee::calcPay() const {
    return hourlyWage * hoursWorked;
}

std::string Employee::getName() const {
    return name;
}
