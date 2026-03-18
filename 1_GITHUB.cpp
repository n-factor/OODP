#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    int empID;
    string empName;

public:
    void setEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
    }

    void displayEmployeeDetails() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;
    float salary;

public:
    void setManagerDetails() {
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayManagerDetails() {
        displayEmployeeDetails(); 
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main() {
    Manager m;

    m.setEmployeeDetails();
    m.setManagerDetails();

    cout << "\nManager Details\n";
    m.displayManagerDetails();

    return 0;
}