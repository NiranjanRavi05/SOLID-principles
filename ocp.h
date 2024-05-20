#include "solid.h"

/************************************************************************/
/* It is not recommended to make a class that is open to modifications  */
/* in the future, rather it is best practice to design a class that is  */
/* only extendable without any alterations to the existing structure    */
/************************************************************************/
/************************************************************************/
/* In this example, when we want to add more genre later, it is not     */
/* recommended to modify the existing class                             */
/************************************************************************/
class books1{
private:
    bookDetails book;
public:
    void fantasyBook(bookDetails book) const; 
    void adventureBook(bookDetails book) const; 
};

/************************************************************************/
/* Deployment of Open-closed principle where when we want to add more   */
/* genre later, we can create a new subclass instead of modifying the   */
/* existing one                                                         */
/************************************************************************/
class books{
public:
    bookDetails book;
    books(bookDetails);
    ~books();
};

class bookGenre{
public:
    virtual void printInfo() const = 0;
};

class fantasy: public bookGenre{
private:
    books fantasyBook;
public:
    fantasy(books fantasyBook);
    void printInfo() const override;
};

class adventure: public bookGenre{
private:
    books adventureBook;
public:
    adventure(books adventureBook);
    void printInfo() const override;
};

void books1::fantasyBook(bookDetails book) const {
}

void books1::adventureBook(bookDetails book) const {
}

books::books(bookDetails book) :book(book) {
    this->book.book = book.book;
    this->book.cost = book.cost;
}

books::~books() {
}

fantasy::fantasy(books fantasyBook) :fantasyBook(fantasyBook) {
}

adventure::adventure(books adventureBook) :adventureBook(adventureBook) {
}

void fantasy::printInfo() const {
    cout << fantasyBook.book.book << endl;
    cout << fantasyBook.book.cost << endl;
}

void adventure::printInfo() const {
    cout << adventureBook.book.book << endl;
    cout << adventureBook.book.cost << endl;
}
