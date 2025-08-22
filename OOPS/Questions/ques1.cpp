#include "iostream"
using namespace std;


/*

Design a class Car having parameterized constructor that takes two arguments as an input
i.e noOfGear and color and a printCarInfo method that prints the CarInfo i.e noOfGear and color.
Design another class RaceCar having parameterized constructor has an additional attribute 
maxSpeed and 
printRaceCarInfo method that prints the RaceCarInfo i.e noOfGear, color and maxSpeed.
Note: You have to create an object of class RaceCar and call the printRaceCarInfo method.

*/


class Car{

    public:

    Car(){

    }



};

class RaceCar : public Car{
    public:

    int noOfGear;
    string color;
    int maxSpeed;


    RaceCar(int noOfGear,string color,int maxSpeed){
        this->noOfGear=noOfGear;
        this->color=color;
        this->maxSpeed=maxSpeed;
    }

    void print(){
        cout<<"noOfGear: "<<noOfGear<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
    }



};


int main(){

    int noOfGear,maxSpeed;
    string color;

    cin>>noOfGear>>color>>maxSpeed;

    RaceCar *obj=new RaceCar(noOfGear,color,maxSpeed);
    obj->print();

    



    


    return 0;
}