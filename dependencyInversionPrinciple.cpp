#include "dip.h"

books::books(bookDetails book):book(book){
    this->book.book=book.book;
    this->book.cost=book.cost;
}

books::~books(){
}

void booksNoDiscount::applyDiscount() const{
    cout << discount << endl;
}

void booksDiscount::applyDiscount() const{
    cout << "Discount Percent = " << discount << "%" << endl;
}

fantasy::fantasy(books fantasyBook, string category, std::shared_ptr<booksDiscounts> discount):fantasyBook(fantasyBook), category(category), discount(std::move(discount)){
}

adventure::adventure(books adventureBook, std::shared_ptr<booksDiscounts> discount):adventureBook(adventureBook), discount(std::move(discount)){
}

void fantasy::printInfo() const{
    cout << fantasyBook.book.book << endl;
    printCategory();
    discount->applyDiscount();
}

void adventure::printInfo() const{
    cout << adventureBook.book.book << endl;
    discount->applyDiscount();
}

void fantasy::printCategory() const{
    cout << category << endl;
}

int main(){
    bookDetails b1 = {"HarryPotter", 150};
    bookDetails b2 = {"Lord of the Rings", 300};
    bookDetails b3 = {"Walter Mitty", 200};
    auto discount1 = std::make_shared<booksNoDiscount>();
    auto discount2 = std::make_shared<booksDiscount>();
    fantasy book1(b1, "I", discount1);
    fantasy book2(b2, "II", discount1);
    adventure book3(b3, discount2);
    book1.printInfo();
    book2.printInfo();
    book3.printInfo();
    return 0;
}
