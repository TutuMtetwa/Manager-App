#ifndef MANAGER_H
#define MANAGER_H


#include <string>
#include "Employee.h"

class Manager : public Employee {
public:
    Manager(const std::string& name, double wage, int hoursWorked, double bonus);
    virtual ~Manager();
    virtual double calcPay() const; // This function overrides the base class function
private:
    double bonus;
};

#endif // MANAGER_H
