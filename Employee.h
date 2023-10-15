#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& name, double wage, int hoursWorked);
    virtual ~Employee();
    virtual double calcPay() const;
    std::string getName() const;
protected:
    std::string name;
    double hourlyWage;
    int hoursWorked;
};

#endif // EMPLOYEE_H
