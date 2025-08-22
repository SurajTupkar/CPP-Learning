#include "iostream"
//#include "Pract10.cpp"
using namespace std;


class Human{

    public:

    int age;
    char ch;

    void func(){
        cout<<"This is Base Class"<<endl;
    }


};

class Male:public Human{
    public:
    int weight;

    

};

int main(){

    Male obj;
    obj.func();

    //Human *fobj=new Human();





    return 0;
}