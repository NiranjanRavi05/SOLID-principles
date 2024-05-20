#ifndef SRP_H
#define SRP_H

#include "solid.h"

/************************************************************************/
/* More than one responsibility for one class, as it handles both the   */
/* details of books and customers                                       */
/************************************************************************/
class bookStore1{
private:
    bookDetails bookDetail;
    customerDetails customerDetail;
};

/************************************************************************/
/* Deployment of Single Responsibility Principle                        */
/************************************************************************/
class bookStore{
public:
    virtual string printDetails() const = 0;
};

class books: public bookStore{
private:
    bookDetails book;
public:
    books(bookDetails book);
    ~books();
    string printDetails() const override;
};

class customers: public bookStore{
private:
    customerDetails customer;
public:
    customers(customerDetails customer);
    ~customers();
    string printDetails() const override;
};

books::books(bookDetails book) :book() {
    this->book.book = book.book;
    this->book.cost = book.cost;
}

books::~books() {
}

customers::customers(customerDetails customer) :customer() {
    this->customer.customerName = customer.customerName;
}

customers::~customers() {
}

string books::printDetails() const {
    //cout << book.book << endl;
    return this->book.book;
}

string customers::printDetails() const {
    //cout << customer.customerName << endl;
    return this->customer.customerName;
}


#endif SRP_H