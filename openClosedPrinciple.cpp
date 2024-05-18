#include "ocp.h"

void books1::fantasyBook(bookDetails book) const{
}

void books1::adventureBook(bookDetails book) const{
}

books::books(bookDetails book):book(book){
    this->book.book=book.book;
    this->book.cost=book.cost;
}

books::~books(){
}

fantasy::fantasy(bookDetails book):fantasyBook(book){
}

adventure::adventure(bookDetails book):adventureBook(book){
}

void fantasy::printInfo() const{
    cout << fantasyBook.book.book << endl;
    cout << fantasyBook.book.cost << endl;
}

void adventure::printInfo() const{
    cout << adventureBook.book.book << endl;
    cout << adventureBook.book.cost << endl;
}

int main(){
    bookDetails b1 = {"HarryPotter", 150};
    bookDetails b2 = {"Lord of the Rings", 300};
    fantasy book1(b1);
    fantasy book2(b2);
    book1.printInfo();
    return 0;
}
