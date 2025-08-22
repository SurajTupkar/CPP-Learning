#include "iostream"
using namespace std;

/*
-> classes and objects
-> data members and member function
-> access modifiers
-> getter and setter
-> static and dynamic objects
-> this pointer
-> constructor


*/


class class_name{

    int age;
    public:
    char name;
    bool gender;

    void print(){
        cout<<"Print is a function"<<endl;
    }

    int getage(){
        return age;
    }

    void setage(char ag){
        this->age=ag;
        
    }

    class_name(int age,char name){
        cout<<"parameterised_Constructor_called"<<endl;
        cout<<"age: "<<age<<endl;
    }

};

 

int main(){

    //objects -> static 

    class_name x(14,'X');
    x.name='A';
    cout<<"statically: "<<endl;
    cout<<x.name<<endl;
    x.print();


    //objects -> dynamic
    class_name *y=new class_name(56,'Y');
    cout<<"Dynamically: \n"<<endl;
    y->name='B';
    cout<<y->name<<endl;
    y->print();
    y->setage(20);
    cout<<y->getage()<<endl;






    return 0;
}