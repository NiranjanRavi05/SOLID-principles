#include <iostream>
using namespace std;
typedef struct bookDetails{
    /* data */
    string book="";
    int cost=0;
}bookDetails;

typedef struct customerDetails{
    /* data */
    string customerName="";
}customerDetails;

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
    int bookCount=0;
    virtual void printDetails() const = 0;
};

class books: public bookStore{
private:
    bookDetails book;
public:
    books(bookDetails book);
    ~books();
    void addBook(int bookCount);
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
