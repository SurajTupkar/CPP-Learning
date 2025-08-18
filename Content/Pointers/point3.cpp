#include "iostream"
using namespace std;

// pass by value and pass by reference(alias)

void changeA(int* a){
    *a=20;
    cout<<"ChageA: "<<*a<<endl;
    
}

int main(){
    int a=10;
    changeA(&a);
    cout<<a<<endl;




    return 0;
}