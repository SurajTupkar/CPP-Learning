#include "iostream"
using namespace std;


/*
Topic 2: Virtual Functions (Runtime Polymorphism)
Focus: Virtual function calculateSalary()

Mini Problem:
Create a base class Employee with a virtual function calculateSalary().
Create two derived classes Developer and Manager and override calculateSalary().
Use base class pointer to call calculateSalary() for derived objects.
Goal: Understand runtime polymorphism using virtual functions.

*/

class Employee{
    public:
    virtual void calculateSalary()=0;
 
    

};

class Developer:public Employee{
    public:
    void calculateSalary(){
        cout<<"getSalary from derived Developer class"<<endl;
    }

  

};

class Manager:public Employee{
     public:
    void calculateSalary(){
        cout<<"getSalary from derived Manager class"<<endl;
    }


};

int main(){
    Employee *obj=new Manager();
    obj->calculateSalary();


    return 0;
}