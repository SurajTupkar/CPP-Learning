#include "iostream"
using namespace std;

class Human{

    private:

    void engineStart(){
        cout<<"Engine starting "<<endl;
    }

    public:

    void carStart(){
        engineStart();
    }

    


};
