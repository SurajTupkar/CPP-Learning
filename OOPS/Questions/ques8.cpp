#include "iostream"
using namespace std;

/*
Problem Statement

Create a class Vehicle that has the following:
Attributes: brand (string), year (int)
A constructor to initialize these attributes
Create a derived class Car that inherits from Vehicle and has:
Attributes: model (string), price (int)
A constructor that initializes both the base class (brand, year) and its own attributes (model, price)
Finally, write a method in Car to display all details of the car.
*/


class Vehicle{
    public:
    string brand;
    int year;

    Vehicle(string b,int y){
        this->brand=b;
        this->year=y;
    }


};

class Car:public Vehicle{
    public:
    string model;
    int price;

    Car(string b,int y,string m,int p):Vehicle(b,y){
        this->model=m;
        this->price=p;
    }

    void print(){
        cout<<brand<<endl;
        cout<<year<<endl;
        cout<<model<<endl;
        cout<<price<<endl;
    }


};

int main(){
    Car obj("Mahindra",10,"XUV",30);
    obj.print();
    
    return 0;
}