#include "iostream"
#include "memory"
using namespace std;

/*
Problem 5 (Hard - Composition + unique_ptr)

Ek Library class banao jisme ek vector of unique_ptr<Book> ho.
Book class ke members: title, author.
Library me function addBook() ho jo ek nayi book ko add kare.
Function showBooks() sab books print kare.
main() me ek Library banao aur kuch books add karke show karo.

*/

class Library{
    string title;
    string author;
    int bookcount;
    
    public:
    int getbookcount(){
        return bookcount;
    }

    void setbookcount(int count){
        this->bookcount=count;

    }
    Library(){
        bookcount++;
    }

    virtual void addbook()=0;

};

class Book:public Library{
    public:

    void addbook(){
        cout<<"New book"<<endl;
    }



};

int main(){
    unique_ptr<Library>ptr=make_unique<Book>();
    cout<<ptr->getbookcount()<<endl;
    ptr->addbook();


    return 0;
}