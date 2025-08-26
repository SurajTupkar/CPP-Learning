#include "iostream"
using namespace std;

/*

Print Function Address
Write a program with a simple function void greet().
Create a function pointer and print the address stored in it.
✅ Goal: Understand that a pointer can store a function’s address.


*/

void greet(){
    cout<<"Address of greet function: "<<&greet<<endl;
}

int main(){
    void (*fp)();
    fp=&greet;
    fp();


    return 0;
}