#include "solid.h"

/************************************************************************/
/* If we have the variable in the base class as a particular type, it   */
/* may not be suitable for all the subclasses                           */
/************************************************************************/
class bookGenre1{
public:
    virtual void printInfo(string category) const = 0;
};

/************************************************************************/
/* Instead it is recommended to have a separate member variable in each */
/* subclasses according to its use case and suitability. In this case   */
/* "category" is suitable only to the fantasy genre and it is not       */
/* suitable to the adventure genre. Hence separate member varibales are */
/* created in respective subclasses as "category" in fantasy subclass   */
/* and "adventureType" in adventure subclass                            */
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
    string category;
public:
    fantasy(books fantasyBook, string category);
    void printInfo() const override;
};

class adventure: public bookGenre{
private:
    books adventureBook;
    string adventureType;
public:
    adventure(books adventureBook, string adventureType);
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

adventure::adventure(books adventureBook, string adventureType) :adventureBook(adventureBook), adventureType(adventureType) {
}

void fantasy::printInfo() const {
    cout << fantasyBook.book.book << endl;
    cout << category << endl;
}

void adventure::printInfo() const {
    cout << adventureBook.book.book << endl;
    cout << adventureType << endl;
}
