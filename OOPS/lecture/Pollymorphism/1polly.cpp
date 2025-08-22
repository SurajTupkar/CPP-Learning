


// /*
// 2. RunTime Poly
// -> Example/Types: 1. Function/Method overriding
// -> Both Parent and Child have same function 

// Virtual Functions 
// Abstract class -> pure virtual functions 

// */ 

// class Parent{
//     public:
//     void func(){
//         cout<<"This is a func from Parent Class"<<endl;
//     }

// };

// class child:public Parent{
//     public:
//     void func(){
//         cout<<"This is func from child class"<<endl;
//     }

// };


// int main(){

//     child obj;
//     obj.func();



//     return 0;
// }


// #include "iostream"
// using namespace std;

// void fun(){
//    static int x=0;
//     cout<<"x:"<<x<<endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
    
// }



// static keyword

// #include "iostream"
// using namespace std;


// class A{
//     public:
//     static int x;

//     A(){
//         cout<<"Constructor called"<<endl;
//         cout<<"x:"<<x<<endl;
//         x++;
//     }

//     ~A(){
//         cout<<"Destructor called"<<endl;
//     }

//     static void print(){
//         cout<<"Static Function"<<endl;
//     }

// };

// int A::x=0;


// static int y=0;
// void func(){
//     cout<<"y: "<<y<<endl;
//     y++;


// }


// void static fun(){

// }

// int main(){

//     func();
//     func();

//     //cout<<A::print()<<endl;
//     cout<<A::x<<endl;

//     A objl;
//     A obj2;
//     A obj3;




//     return 0;
// }



#include "iostream"
using namespace std;


class A{
    public:
    int x=0;

    A(){
        cout<<"Constructor called"<<endl;
    }
    ~A(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
   // static A obj;
    A static obj;
    cout<<"Exit of main func"<<endl;





    return 0;
}