#include "iostream"


/*
1.classes and objects
2.static and dynamic allocation of objects
3.constructors
4.DM And MF
5.Access Modifiers
6.Getter and setter
7. this pointer
8.Static keyword -> Static DM and Static Functions
9.Inheritance -> Single
10.Access Modifiers in Inheritance


*/



using namespace std;


//defination of class
//class class_name
class Human{

    string name;
    public:

    int age;
    char ch;

    void print(string n){
        this->name=n;
        cout<<"Name:"<<this->name<<endl;
    }

    Human(){
        cout<<"Constuctor called"<<endl;
        //cout<<this->name<<endl;  
    }

    Human(int a){
        cout<<"Parameterized Constructor"<<endl;
    }

    void setname(string d){
        this->name=d;
    }

    string getname(){
        return name;
    }


    static string count;


};

class Male:public Human{


};

string Human::count="sk";


int main(){


    Male *objt=new Male;
    objt->age=100;
    objt->ch='J';
    objt->setname("SKT");

    cout<<"Inheritance START:"<<endl;
    cout<<objt->age<<endl;
    cout<<objt->ch<<endl;
    cout<<objt->getname()<<endl;



    cout<<"Inheritance END:"<<endl;




    // Static allocation

    Human obj;
    obj.setname("Suraj");
    obj.age=10;
    obj.ch='A';
    cout<<"Statically -> Age:"<<obj.age<<endl;
    cout<<"Statically -> ch:"<<obj.ch<<endl;
    cout<<"Statically -> Name:"<<obj.getname()<<endl;


    //Dynamic Allocation

    Human *dobj=new Human(90);
    //dobj->name;
    dobj->age=20;
    dobj->ch='B';
    dobj->setname("Tupkar");

    cout<<"Dynamically -> Age:"<<dobj->age<<endl;
    cout<<"Dynamically -> ch:"<<dobj->ch<<endl;
    cout<<"Dynamically -> Name:"<<dobj->getname()<<endl;
    dobj->print("30");

    Human *eobj=new Human();


   cout<<Human::count<<endl;

   cout<<"By using object & statically: "<<obj.count<<endl;
   cout<<"By using object & Dynamically: "<<dobj->count<<endl;

    return 0;
}