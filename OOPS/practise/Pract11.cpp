#include "iostream"
using namespace std;


class Human{

    private:

    void engineStart(){
        cout<<"Engine Started"<<endl;
    }

    public:


    //Abstraction
    void carStart(){
        cout<<"Car has been started"<<endl;
        engineStart();
    }


};

int main(){

    Human obj;
    obj.carStart();



    return 0;
}