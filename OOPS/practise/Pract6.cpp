// -> classes and objects
// -> data members and member function
// -> access modifiers
// -> getter and setter
// -> static and dynamic objects
// -> this pointer
// -> constructor
//     -> Default and parameterised.




#include "iostream"
using namespace std;



class Class_Name{
    int age;

    public:
    string name;
    static char ch;

    int getage(){
        return age;
    }

    void setage(int a){
        this->age=a;
    }

    Class_Name(){
        cout<<"Default Constuctor called"<<endl;
    }

    Class_Name(int g){
        cout<<"Parameterised Constructor called"<<"Value of g: "<<g<<endl;
    }


};

char Class_Name::ch='a';

int main(){
    cout<< Class_Name::ch<<endl;
    Class_Name obj;
    obj.name="Suraj";
    obj.setage(19);
    cout<<"Statically -> Name: "<<obj.name<<endl;
    cout<<"Statically -> Age: "<<obj.getage()<<endl;
    
    Class_Name *dobj=new Class_Name(9);
    dobj->name="Tupkar";
    dobj->setage(20);
    cout<<"Dynamically -> Name: "<<dobj->name<<endl;
    cout<<"Dynamically -> Age: "<<dobj->getage()<<endl;



}

