/*

Problem:

Every time a new Employee object is created, it should automatically be assigned a unique ID.
The ID should start counting from 1001.
Create a static function showTotalEmployees() that displays the total number of employees created.
Create a normal function showDetails() that displays the employee’s name and ID.

Output:
Name: Suraj, ID: 1001
Name: Rahul, ID: 1002
Name: Priya, ID: 1003
Total Employees: 3


*/




#include "iostream"
using namespace std;


class Employee
{
    private:
    string name;
    static int EmpId;
    static int EmpCount;
    

    public:
    Employee(string name){
        this->name=name;
        EmpId++;
        EmpCount++;
        cout<<"Name: "<<name<<", ";
        cout<<"ID: "<<EmpId<<endl;
    }

    static void print(){
        cout<<"Total Employees: "<<EmpCount<<endl;
    }



};

int Employee :: EmpId=1000;
int Employee :: EmpCount=0; 


int main(){
    Employee E1("suraj");
    Employee E2("Rahul");
    Employee E3("Priya");
    E1.print();

return 0;
}