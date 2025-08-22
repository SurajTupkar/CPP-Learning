#include "iostream"
using namespace std;

class Hero{

    public:
    int health;

    Hero(int h){
        cout<<this<<endl;
        this->health=h;

    }

};


int main(){

    Hero obj(1);
    cout<<&obj<<endl;
    //cout<<this<<endl;
    cout<<obj.health<<endl;


    return 0;
}