#include "iostream"
using namespace std;


/*

Create a system for a School:

1. Base Class: Person
   - Private data members: name (string), age (int)
   - Public constructor to initialize name and age
   - Public getter functions for name and age

2. Derived Class: Teacher
   - Private data member: salary (float)
   - Public constructor to initialize name, age, salary
   - Public function: displayDetails() → prints name, age, salary

3. Derived Class: Student
   - Private data member: marks (float)
   - Public constructor to initialize name, age, marks
   - Public function: displayDetails() → prints name, age, marks

4. Polymorphism:
   - Create a base class pointer pointing to both Teacher and Student objects
   - Call displayDetails() via base class pointer (use virtual function in base class)

Goal:
- Understand inheritance, encapsulation, and runtime polymorphism together.


*/

class Person{
   

   string name;
   int age;

   public:
   Person(string n,int a){
    this->name=n;
    this->age=a;
   }
    
   string getname(){
    return name;
   }

   void setname(string name){
    this->name=name;
   }

   int getage(){
    return age;
   }

   void setage(int age){
    this->age=age;
   }

   virtual void displayDetails()=0;

};



class Teacher:public Person{
    public:
    float salary;

    public:
    Teacher(string n,int a,float sal):Person(n,a){
        this->salary=sal;
    }

    float getsalary(){
        return salary;
    }

    void setsalary(float salary){
        this->salary=salary;
    }

    void displayDetails(){
        cout<<getname()<<endl;
        cout<<getage()<<endl;
        cout<<getsalary()<<endl;
    }

};





class Student:public Teacher{
    float marks;
    public:

    Student(string n,int a,float sal,float mar):Teacher(n,a,sal){
        this->marks=mar;
    }

    void setmarks(float marks){
        this->marks=marks;
    }

    float getmarks(){
        return marks;
    }



      void displayDetails(){
        cout<<getname()<<endl;
        cout<<getage()<<endl;
        cout<<getsalary()<<endl;
        cout<<getmarks()<<endl;
    }

};

int main(){

//     4. Polymorphism:
//    - Create a base class pointer pointing to both Teacher and Student objects
//    - Call displayDetails() via base class pointer (use virtual function in base class)

        Person *ptr=new Teacher("suraj",24,23000);
        ptr->displayDetails();
        Person *ptr1=new Student("Tupkar",24,23000,560);
        ptr1->displayDetails();



    return 0;
}