// Functions


#include "iostream"
using namespace std;


void print(){
    cout<<"Print"<<endl;
}

int add(int a,int b){
    return a+b;
}

int mul(int a,int b){
    return a+b;
}

int ultimate(int a,int b,int (*oper)(int,int)){
    oper(a,b);
    oper;
}

int main(){
    print();
    int (*fp)(int,int);
    fp=&add;
    cout<<"The function add:"<<fp(2,4)<<endl;
    fp=&mul;
    cout<<"The function mul:"<<fp(2,4)<<endl;
    cout<<"Ultimate: "<<ultimate(2,3,add)<<endl;
    
    return 0;
}