// #include "iostream"
// using namespace std;


// class Human{

//     public:

//     void print(){
//         cout<<"Learning Function Overloading"<<endl;
//     }

//     void print(string name){
//         cout<<"Learning Function Overloading:"<<name<<endl;
//     }



// };


// int main(){

//     Human *obj=new Human();
//     obj->print();
//     obj->print("suraj");




//     return 0;
// }


#include "iostream"
using namespace std;


class Parent{
    public:

    void print(){
        cout<<"Inside parent class"<<endl;
    }


};

class subclass1:public Parent{
    public:
    void print(){
        cout<<"Inside Subclass1"<<endl;
    }

};

class subclass2:public Parent{
    public:
    // void print(){
    //     cout<<"Inside Subclass2"<<endl;
    // }
};

int main(){

    Parent o1;
    subclass1 o2;
    subclass2 o3;
    o1.print();
    o2.print();
    o3.print();

    

    return 0;
}