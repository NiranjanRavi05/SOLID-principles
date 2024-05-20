#include "solid.h"

/************************************************************************/
/* In this case, if we design the class in this way, it is not easy to  */
/* use it for different cases. For example, we discount to any books if */
/* we use the below class                                               */
/************************************************************************/
class booksDiscount1{
private:
    string discount = "No discount";
};

/************************************************************************/
/* To fix this problem, we can create the class as an abstract base     */
/* class. Then from this abstract base class, we can easily create      */
/* the different types that we need for our use cases. In this modified */
/* example based on Dependency Inversion Principle, we can extend the   */
/* abstract base class to different subclasses, either to give discount */
/* or no discount for the books                                         */
/************************************************************************/
class booksDiscounts{
public:
    virtual void applyDiscount() const = 0;
};

class booksNoDiscount: public booksDiscounts{
private:
    string discount = "No discount";
public:
    void applyDiscount() const override;
};

class booksDiscount: public booksDiscounts{
private:    
    int discount = 10;
public:
    void applyDiscount() const override;
};

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
    std::shared_ptr<booksDiscounts> discount;
public:
    fantasy(books fantasyBook, string category, std::shared_ptr<booksDiscounts> discount);
    void printInfo() const override;
    void printCategory() const override;
};

class adventure: public bookGenre{
private:
    books adventureBook;
    std::shared_ptr<booksDiscounts> discount;
public:
    adventure(books adventureBook, std::shared_ptr<booksDiscounts> discount);
    void printInfo() const override;
};

books::books(bookDetails book) :book(book) {
    this->book.book = book.book;
    this->book.cost = book.cost;
}

books::~books() {
}

void booksNoDiscount::applyDiscount() const {
    cout << discount << endl;
}

void booksDiscount::applyDiscount() const {
    cout << "Discount Percent = " << discount << "%" << endl;
}

fantasy::fantasy(books fantasyBook, string category, std::shared_ptr<booksDiscounts> discount) :fantasyBook(fantasyBook), category(category), discount(std::move(discount)) {
}

adventure::adventure(books adventureBook, std::shared_ptr<booksDiscounts> discount) :adventureBook(adventureBook), discount(std::move(discount)) {
}

void fantasy::printInfo() const {
    cout << fantasyBook.book.book << endl;
    printCategory();
    discount->applyDiscount();
}

void adventure::printInfo() const {
    cout << adventureBook.book.book << endl;
    discount->applyDiscount();
}

void fantasy::printCategory() const {
    cout << category << endl;
}
