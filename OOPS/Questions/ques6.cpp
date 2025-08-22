/*

You need to design a Student class in C++ with the following requirements:
Data Members
string name
int rollNumber
float marks

Constructor

A parameterized constructor that initializes all three data members.
Member Function
displayDetails() → which prints all the student details in a proper format.

Main Function
Create two student objects using the constructor.
Call displayDetails() for both objects


*/


#include "iostream"
using namespace std;


class Student{
    string name;
    int rollNumber;
    float marks;

    public:

    Student(string n,int r,float m){
        this->name=n;
        this->rollNumber=r;
        this->marks=m;
    }


    void displayDetails()
    {
        cout<<name<<endl;
        cout<<rollNumber<<endl;
        cout<<marks<<endl;
    }

};

int main(){

    Student obj("suraj",45,45.25);
    obj.displayDetails();
    
    cout<<endl;

    Student obj1("suraj",45,45.25);
    obj.displayDetails();


    return 0;
}