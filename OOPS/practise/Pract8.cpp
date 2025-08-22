// -> classes and objects
// -> data members and member function
// -> access modifiers
// -> getter and setter
// -> static and dynamic objects
// -> this pointer
// -> constructor
//     -> Default and parameterised.
// -> Static Keyword
// -> Static Function
// Encapsulation
// Fully Abstracted Class



#include "iostream"
using namespace std;


class Class_Name{

    string name;
    public:
    int age;
    char ch;

    void print(){
        cout<<"This is the print Function"<<endl;
    }

    string getname(){
        return name;
    }

    void setname(string n){
        this->name=n;
    }

    Class_Name(){
        cout<<"Constructor Called:"<<b<<endl;
        ++b;
    }

    // Class_Name(int a){
    //     cout<<"Parameterised constructor called: "<<a<<endl;
    // }

    static int b;


    static void count(){
        cout<<b<<endl;
    }
};

int Class_Name :: b=0;



int main(){

    //object creation -> 2 Types
    //1.Statically
    //2.Dynamically

    //1.statically
    cout<<Class_Name :: b<<endl;
    Class_Name obj;
    obj.age=20;
    obj.ch='D';
    obj.setname("tfvgbh");

    cout<<"Class_Name::Count:"<<Class_Name::count<<endl;
    cout<<"Address of obj: "<<&obj<<endl;
    cout<<"Statically ->"<<" Age: "<<obj.age<<endl;
    cout<<"Statically ->"<<" Ch: "<<obj.ch<<endl;
    cout<<"Statically ->"<<" name: "<<obj.getname()<<endl;

    //2.Dyanamically
    Class_Name *obj1=new Class_Name();
    obj1->age=30;
    obj1->ch='Y';
    obj1->setname("cfgvhb");

    cout<<"Dynamically -> age: "<<obj1->age<<endl;
    cout<<"Dynamically -> ch: "<<obj1->ch<<endl;
    cout<<"Dynamically -> name: "<<obj1->getname()<<endl;



    return 0;
}