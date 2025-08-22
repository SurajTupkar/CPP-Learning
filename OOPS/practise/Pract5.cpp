// Q1 – Student Information
// Create a class Student with:
// Private members: name (string), marks (int)

// Public:
// Constructor (default) → sets default values
// Parameterized constructor → sets values from arguments
// Getter and Setter for marks
// Function display() to print details

#include "iostream"
using namespace std;

class Student{
    string name;
    int marks;

    public:
    int getmarks(){
        return marks;
    }

    void setmarks(int m){
        this->marks=m;
        cout<<"Address of m: "<<&m<<endl;
         cout<<"Address of marks: "<<&marks<<endl;
        
        
    }

    void print(string x,int y){
        cout<<"Name: "<<x<<endl;
        cout<<"Marks: "<<y<<endl;
         cout<<"Address of this: " <<this<<endl;
    }

    Student(string a,int m){
        cout<<"Name: "<<a<<endl;
        cout<<"Marks: "<<m<<endl;
    }

    Student(){
        cout<<"This is Default Constructor for Dynamic Object"<<endl;
    }

};

// In main():
int main(){
    // Create one static object using parameterized constructor
    Student obj("Suraj",10);
    obj.print("Tupkar",20);
    cout<<"Address of obj: "<<&obj<<endl;


    // Create one dynamic object using default constructor
    Student *dobj=new Student();
    dobj->setmarks(30);
    cout<<dobj->getmarks();    
    // Display both student details


}





