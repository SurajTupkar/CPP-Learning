#include "iostream"
#include <memory>
using namespace std;

class Animal{
    public:
    virtual void speak()=0;


};

class Dog : public Animal{
    public:
    void speak (){
        cout<<"Dog"<<endl;;

    }
};

class Cat:public Animal{
    public:
    void speak(){
        cout<<"Cat"<<endl;
    }
};


int main(){
    unique_ptr<Animal>ptr=make_unique<Dog>();
    ptr->speak();
    ptr=make_unique<Cat>();
    ptr->speak();



    return 0;
}