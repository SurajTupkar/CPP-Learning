



/*


Question:
Ek Rectangle class banao jisme:
length aur width private data members ho.
Parameterized constructor ho jo length aur width initialize kare.
getArea() function ho jo rectangle ka area return kare.
getPerimeter() function ho jo rectangle ka perimeter return kare.

👉 Task:

Rectangle object create karke length = 10, width = 5 pass karo.
Uska area aur perimeter print karo.

*/


#include "iostream"
using namespace std;


class Rectangle{

    int length;
    int width;

    public:



    Rectangle(int length,int width){
        this->length=length;
        this->width=width;
    }

    void getArea(){
        cout<<length*width<<endl;
    }

    void getPerimeter(){
       cout<<(2*(length+width))<<endl;
    }



};







int main(){

    Rectangle obj(10,5);
    obj.getArea();
    obj.getPerimeter();
    //obj.print1();





    return 0;
}