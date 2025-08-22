/*
Ek Circle class banao jisme:
radius ek private data member ho.
Ek constructor ho jo radius initialize kare.
getArea() function ho jo circle ka area return kare. (Formula: π * r * r)
getCircumference() function ho jo circle ka circumference return kare. (Formula: 2 * π * r)

👉 Task:

Circle object create karo with radius = 7.
Uska area aur circumference print karo.

*/


#include "iostream"
using namespace std;


class Circle{
    int radius;

    public:
    Circle(int r){
        this->radius=r;
    }

    float getArea(){
        return 3.14*radius*radius;
    }

    float getCircumference(){
        return 2*3.14*radius;
    }


};

int main(){
    Circle obj(7);
    cout<<obj.getArea()<<endl;
    cout<<obj.getCircumference()<<endl;



}