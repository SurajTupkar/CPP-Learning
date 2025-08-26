#include "iostream"
using namespace std;

/*
Call a Function using Function Pointer
Write a function int add(int a, int b).
Create a pointer to this function and call it via the pointer.
✅ Goal: Call function through pointer.
*/

int add(int a,int b){
    return a+b;
}

int main(){
    int (*fp)(int,int);
    fp=*add;
    cout<<fp(1,2);


    return 0;
}