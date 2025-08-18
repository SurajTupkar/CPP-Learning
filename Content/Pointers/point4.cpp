//Array Pointer

#include "iostream"
using namespace std;



int main(){
    int arr[]={1,2,3,4,5};
    int *b=&arr[1];
    cout<<*b<<endl;
    cout<<arr[1]<<endl;
    cout<<arr+1<<endl;
    cout<<"Addrees of b: "<<b<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"value of b before increment: "<<*b<<" Address: "<<&b<<endl;
    b++;
    cout<<"value of b after increment: "<<*b<<" Address: "<<&b<<endl;

    int f=10,e=20;
    int *ptr=&f;
    cout<<*ptr<<endl;
    ptr=&e;
    cout<<"Address: "<<ptr<<" Value: "<<*ptr<<endl;


    // pointer Arithemetic

    int T=100;
    // int S=20;
    int *ptr1=&T;
    cout<<endl;
    cout<<"Pointer Arithemetic"<<endl;
    cout<<endl;
    cout<<"Value of prt: "<<*ptr1<<" "<<"Address: "<<ptr1<<endl;
    *ptr1++;
    cout<<"Value of prt: "<<*ptr1<<" "<<"Address: "<<ptr1<<endl;




    return 0;
}