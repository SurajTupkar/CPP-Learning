#include "iostream"
using namespace std;


class Hero{

    public:
    static int age;  //Decalre Static

    static int print(int a){
        return a;
    }

    Hero(){
        age++;
        cout<<"Age: "<<age<<endl;
    }


};

int Hero :: age=25;   // Initialise Static DM

int main(){

    cout<<Hero::age<<endl;  //How to Access static DM 
    cout<<"Function: "<<Hero::print(10)<<endl;

    Hero obj;
    Hero obj1;
    Hero obj2;


    return 0;
}