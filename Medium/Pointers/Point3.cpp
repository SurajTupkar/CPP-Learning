#include "iostream"
using namespace std;


int print(int &a,int &b){ 
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}


int main(){
    int a=10,b=20;
    print(a,b);

    return 0;
}

