/*
Problem Statement:

Topic : Classes & Objects + Constructors

Q1. Write a C++ program to create a class Student with data members: name, roll number, and marks.
Use a default constructor and a parameterized constructor.
Create 2 objects (1 using default, 1 using parameterized) and display details.

*/


#include "iostream"
using namespace std;



class Student{
    public:
    string name;
    int roll_number;
    int marks;

    Student(){
        cout<<"Default Constructor"<<endl;

    }

    Student(string name,int roll_numbers,int marks){
        this->name=name;
        this->roll_number=roll_numbers;
        this->marks=marks;
    }

    void print(){
        cout<<"name: "<<name<<endl;
        cout<<"roll_number: "<<roll_number<<endl;
        cout<<"marks: "<<marks<<endl;
    }


};

int main(){

    Student* obj=new Student();
    Student* obj1=new Student("Suraj",10,95);
    //obj1->print

    obj1->print();






    return 0;
}