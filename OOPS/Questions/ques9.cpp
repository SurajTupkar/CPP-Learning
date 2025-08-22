#include "iostream"
using namespace std;

/*
Focus: employeeCount static variable and getEmployeeCount() static function
Mini Problem:

Create a class Employee with name and id.
Add a static variable employeeCount that increases whenever a new Employee object is created.
Add a static function getEmployeeCount() to print total employees.
Goal: Understand static variables and static functions.
*/

class Employee{
    public:

    string name;
    int id;

    static int employeeCount;

    Employee(){
        employeeCount++;
    }

    static int getEmployeeCount(){
        return employeeCount;
    }


};

int Employee:: employeeCount =0;

int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee E5;
    Employee E6;
    cout<<Employee::getEmployeeCount()<<endl; // 6


    return 0;
}