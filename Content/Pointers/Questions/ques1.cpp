#include "iostream"
using namespace std;


/*
Question:

What will be the output ?

float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;

*/

int main(){

    float f=10.5;
    float p=2.5;
    float* ptr=&f;
    cout<<ptr<<endl;
    cout<<&f<<endl;
    cout<<*ptr<<" "<<f<<endl;
    (*ptr)++;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    *ptr=p;
    cout<<*ptr<<endl;



    return 0;
}