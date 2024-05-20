#include "solid.h"

/************************************************************************/
/* Example of a base class with multiple functionalities which are all  */
/* not used by all the subclasses. In this case, it not recommended to  */
/* add additional methods in the base class which are not really        */
/* necessary for all the subclasses.                                    */
/************************************************************************/
class bookGenre1{
public:
    virtual void printInfo() const = 0;
    virtual void printCategory() const = 0;
};

/************************************************************************/
/* To fix this problem, we can either use inheritance or composition.   */
/* i.e., to extend a base class with a separate class which performs    */
/* the additional new function. By this way, the subclasses which       */
/* require this new feature can extend from this new class further      */
/* instead of extending from the original base class. Whereas the       */
/* subclass which does not need this new functionality can extend from  */
/* the original base class. Hence this principle provides easy          */
/* extensibility of existing functions without affecting other existing */
/* features                                                             */
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

class bookGenreCategory: public bookGenre{
public:
    virtual void printCategory() const = 0;
};

class fantasy: public bookGenreCategory{
private:
    books fantasyBook;
    string category;
public:
    fantasy(books fantasyBook, string category);
    void printInfo() const override;
    void printCategory() const override;
};

class adventure: public bookGenre{
private:
    books adventureBook;
public:
    adventure(books adventureBook);
    void printInfo() const override;
};


books::books(bookDetails book) :book(book) {
    this->book.book = book.book;
    this->book.cost = book.cost;
}

books::~books() {
}

fantasy::fantasy(books fantasyBook, string category) :fantasyBook(fantasyBook), category(category) {
}

adventure::adventure(books adventureBook) :adventureBook(adventureBook) {
}

void fantasy::printInfo() const {
    cout << fantasyBook.book.book << endl;
}

void adventure::printInfo() const {
    cout << adventureBook.book.book << endl;
}

void fantasy::printCategory() const {
    cout << category << endl;
}
