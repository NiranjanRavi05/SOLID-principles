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
    virtual void printDetails() const = 0;
};

class books: public bookStore{
private:
    bookDetails book;
public:
    books(bookDetails book);
    ~books();
    void printDetails() const override;
};

class customers: public bookStore{
private:
    customerDetails customer;
public:
    customers(customerDetails customer);
    ~customers();
    void printDetails() const override;
};
