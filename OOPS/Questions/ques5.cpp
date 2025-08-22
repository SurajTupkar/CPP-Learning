/*

Next Problem Statement (Inheritance – Single Inheritance)

👉 Create a program where you have a base class Person with attributes:
name
age
And a derived class Student which inherits Person and adds:
rollNumber
marks


✅ Tasks:
Create constructors for both classes.
In Student, write a function displayDetails() which shows all details (name, age, rollNumber, marks).
Create an object of Student in main() and display its details.
*/

#include "iostream"
using namespace std;


class Person{
    public:
    string name;
    int age;
    Person(){}
    

};

class Student:public Person{
    public:
    int rollNumber;
    int marks;
    Student(int rolln,int marks,string name,int age){
        this->rollNumber=rolln;
        this->marks=marks;
        this->name=name;
        this->age=age;
    }

    void DisplayDetails(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollNumber<<endl;
        cout<<marks<<endl;
    }
};

int main(){
    Student obj(10,100,"suraj",23);
    //Person obj1("suraj",23);
    obj.DisplayDetails();

    return 0;
}