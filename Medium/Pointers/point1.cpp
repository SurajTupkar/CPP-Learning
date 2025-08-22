#include "iostream"
using namespace std;




int main(){

    // pointer
    int a=10;
    int* ptr=&a;
    cout<<"Address of a:a   ->"<<&a<<endl;
    cout<<"Address of a:ptr ->"<<ptr<<endl;
  cout<<endl;
    cout<<"value of a:a      -> "<<a<<endl;
    cout<<"value of prt:*ptr -> "<<*ptr<<endl;

    cout<<endl;

    // pointer to pointer concept

    int** pptr=&ptr;
    cout<<"Address of ptr:ptr  -> "<<&ptr<<endl;
    cout<<"Address of ptr:pptr -> "<<pptr<<endl;
      cout<<endl;
    cout<<"value of ptr  "<<*ptr<<endl;
    cout<<"value of pptr "<<**pptr<<endl;




    return 0;
}