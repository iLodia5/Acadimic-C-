#include <iostream>
#include <string>

using namespace std;

class Salary {
private:
    double basicSalary;
    double certificateAllowance;
    double netSalary;

public:
    // Constructor
    Salary(double basic, double allowance) : basicSalary(basic), certificateAllowance(allowance) {
        calculateNetSalary();
    }

    // Calculate net salary based on the certificate allowance
    void calculateNetSalary() {
        netSalary = basicSalary + (basicSalary * certificateAllowance / 100);
    }

    // Display salary details
    void displaySalary() const {
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "Certificate Allowance: $" << certificateAllowance << endl;
        cout << "Net Salary: $" << netSalary << endl;
    }
};

class Employee {
private:
    string name;
    Salary employeeSalary;

public:
    // Constructor
    Employee(const string& empName, double basic, double allowance)
        : name(empName), employeeSalary(basic, allowance) {}

    // Display employee details
    void displayEmployee() const {
        cout << "Employee Name: " << name << endl;
        employeeSalary.displaySalary();
    }
};

int main() {
    // Example usage
    Employee emp1("John Doe", 50000, 45);  // BAc certificate
    Employee emp2("Jane Smith", 60000, 75);  // MSc certificate

    cout << "Employee 1 Details:" << endl;
    emp1.displayEmployee();

    cout << "\nEmployee 2 Details:" << endl;
    emp2.displayEmployee();

    return 0;
}
