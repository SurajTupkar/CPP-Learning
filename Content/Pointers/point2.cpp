#include "iostream"
using namespace std;


// call by value 





// call by reference 
/*
void fun(int &a,int &b){
    //int a=30,b=40;
    cout<<"Function"<<endl;
    cout<<"Address of a: "<<&a<<" "<<a<<" "<<"Address of b"<<&b<<" "<<b<<endl;
}

int main(){
    int a=10,b=20;
    fun(a,b);
     cout<<"Address of a: "<<&a<<" "<<a<<" "<<"Address of b"<<&b<<" "<<b<<endl;


    return 0;
}
*/

// call by pointer

#include "iostream"
using namespace std;


void fun(int* a,int* b){
    //cout<<"Function"<<endl;
    cout<<"Address of a: "<<a<<"-> "<<*a<<" "<<" And "<<"Address of b: "<<b<<"-> "<<*b<<endl;

}

int main(){
    int a=10,b=20;
    int *c=&a;
    int *d=&b;
    cout<<"Main Function"<<endl;
    cout<<"Address of a: "<<&a<<"-> "<<a<<" "<<" And "<<"Address of b: "<<&b<<"-> "<<b<<endl;
    fun(c,d);



    return 0;
}

