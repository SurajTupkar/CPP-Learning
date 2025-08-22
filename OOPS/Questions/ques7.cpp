/*

A company keeps details of its employees. There are two types of employees:
FullTimeEmployee
PartTimeEmployee

👉 Create a base class Employee with following members:
string name
int id

Constructor to initialize above data
A function display() to show common employee details:
👉 Create derived classes:
FullTimeEmployee (extra data: salary)
PartTimeEmployee (extra data: hourlyRate and hoursWorked)
👉 Both derived classes should have:
Constructor to initialize their own data + base class data
Override display() function to show all details (base + derived)

👉 In main(), create:
One FullTimeEmployee object and one PartTimeEmployee object
Call display() for both




#include "iostream"
using namespace std;


class Employee{
    public:

    string name;
    int id;

    Employee(){}
    Employee(string n,int i){
        this->name=n;
        this->id=i;
    }

};

class FullTimeEmployee:public Employee{
    public:
    int salary;
    FullTimeEmployee (int salary){
        this->salary=salary;
    }
    FullTimeEmployee(){

    }


};

class PartTimeEmployee:public FullTimeEmployee{
    public:
    int hourlyRate;
    int hoursWorked;

    PartTimeEmployee(int hourlyRate,int hoursWorked):FullTimeEmployee(salary)
    {
        this->hoursWorked=hoursWorked;
        this->hourlyRate=hourlyRate;
        this->salary=salary;
    }

    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<salary<<endl;
        cout<<hourlyRate<<endl;
        cout<<hoursWorked<<endl;
    }
    
};


int main(){
    PartTimeEmployee obj(10,100);
    obj.display();





    return 0;
}

*/


/*
Person naam ka ek base class banao jisme name aur age ho.
Student naam ka derived class banao jisme rollNumber aur course ho.
Student ka constructor base class Person ke constructor ko call kare.
Ek object banake values print karo.
*/

#include "iostream"
using namespace std;

class Person{
    public:

    string name;
    int age;


    Person(string n,int a){
        this->name=n;
        this->age=a;
    }

};

class Student:public Person{
    int rollNum;
    int course;
    public:

    Student(string n,int a,int rn,int c):Person(n,a){
        this->rollNum=rn;
        this->course=c;
    }

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollNum<<endl;
        cout<<course<<endl;
    }
};



int main(){
    Student obj("suraj",10,20,30);
    obj.print();

    return 0;
}