#include "iostream"
using namespace std;

class Payment{
    int amount;

    public:
    int getamount(){
        return amount;
    }

    void setamount(int a){
        this->amount=a;
    }

    virtual void processPayment()=0;

};

class CreditCardPayment:public Payment{
    public:
    void processPayment(){
        cout<<"Processing "<<getamount()<<" via Credit Card"<<endl;
    }
};

class PayPalPayment:public Payment{
    public:
     void processPayment(){
        cout<<"Processing "<<getamount()<<" via PayPal"<<endl;
    }
};

class UPIPayment:public Payment{
    public:
     void processPayment(){
        cout<<"Processing "<<getamount()<<" via UPI"<<endl;
    }
};



int main(){
    Payment *ptr=new CreditCardPayment();
    ptr->setamount(500);
    ptr->processPayment();
    ptr=new PayPalPayment();
    ptr->setamount(500);
    ptr->processPayment();
    ptr=new UPIPayment();
    ptr->setamount(500);
    ptr->processPayment();


    return 0;
}