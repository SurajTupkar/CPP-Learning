#include "iostream"
using namespace std;


int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int divi(int a,int b){
    return a/b;
}

int main(){
    int(*fp)(int,int);
    fp=&add;
    cout<<fp(4,5)<<endl;
    fp=&sub;
    cout<<fp(10,7)<<endl;
    fp=&mul;
    cout<<fp<<endl;
    fp=&divi;
    cout<<fp(8,4)<<endl;
 
    



    return 0;
}