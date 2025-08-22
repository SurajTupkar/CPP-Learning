#include "iostream"
using namespace std;


class Human{

    public:
    //int money=10;
    int a=20;



};

class Male:public Human{

    public:

    void print1(){
        cout<<"Print1 Function"<<endl;
    }

    void print(){
        cout<<"Print Function"<<endl;
        cout<<"a"<<a<<endl;
    }

    

    

};

int main(){
    Male *obj=new Male;
   // obj->a;
   //obj->a;
   obj->print();
   obj->print1();


   Human *objt=new Human;
   //objt->a;





    return 0;
}