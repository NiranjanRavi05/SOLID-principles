#include "srp.h"

books::books(bookDetails book):book(){
    this->book.book=book.book;
    this->book.cost=book.cost;
}

books::~books(){
}

customers::customers(customerDetails customer):customer(){
    this->customer.customerName=customer.customerName;
}

customers::~customers(){
}

void books::printDetails() const{
    cout << book.book << endl;
}

void customers::printDetails() const{
    cout << customer.customerName << endl;
}

int main(){
    bookDetails b1 = {"HarryPotter", 150};
    bookDetails b2 = {"Lord of the Rings", 300};
    books book1(b1);
    books book2(b2);
    book1.printDetails();
    return 0;
}
