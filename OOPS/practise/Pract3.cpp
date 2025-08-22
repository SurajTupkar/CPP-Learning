/*
-> classes and objects
-> data members and member function
-> access modifiers
-> getter and setter
-> static and dynamic objects
-> this pointer
-> constructor
    -> Default and parameterised.



*/


#include "iostream"
using namespace std;

class Data{

    int age;
    public:
    char gender;
    string name;

    void print(){
        cout<<"Print Function "<<endl;
    }



   


    //getter
    int getage(){
        return age;
    }

    //setter
    void setage(int a){
        this->age=a;
    }

    Data(){
        cout<<"Default Constructor called"<<endl;
    }

    Data(char gender,string name){
        cout<<gender<<" "<<name<<endl;
    }





};

int main(){

    Data obj('N',"Tupkar"); //static declaration
    Data *dobj=new Data('M',"Suraj"); //Dynamic Declaration

    // Statically 
    obj.gender='c';
    obj.name="Greater";
    obj.setage(20);


    cout<<"Statically -> Gender:"<<obj.gender<<endl;
    cout<<"Statically -> Name:"<<obj.name<<endl;
    cout<<"Statically -> Age:"<<obj.getage()<<endl;

    //Dynamically 
    dobj->gender='D';
    dobj->name="Smaller";
    dobj->setage(30);

    cout<<"Dynamically -> Gender:"<<dobj->gender<<endl;
    cout<<"Dynamically -> Name:"<<dobj->name<<endl;
    cout<<"Dynamically -> Age:"<<dobj->getage()<<endl;






}