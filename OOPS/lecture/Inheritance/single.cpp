#include "iostream"
using namespace std;

class Human{

    public:

    int height;
    int weight;
    int age;
    
    void fun(){
        cout<<"Human class"<<endl;
    }

};

class Male:public Human{

    public:
    int name;

};

int main(){

    Male obj;
    obj.height=10;
    Human obj1;
    obj1.height=20;
    cout<<&obj<<" "<<&obj1<<endl;
    cout<<obj.height<<endl;
    cout<<obj1.height<<endl;
    obj1.fun();
    obj.fun();
    

    return 0;
}