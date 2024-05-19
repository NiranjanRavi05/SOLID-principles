#include "isp.h"

books::books(bookDetails book):book(book){
    this->book.book=book.book;
    this->book.cost=book.cost;
}

books::~books(){
}

fantasy::fantasy(books fantasyBook, string category):fantasyBook(fantasyBook), category(category){
}

adventure::adventure(books adventureBook):adventureBook(adventureBook){
}

void fantasy::printInfo() const{
    cout << fantasyBook.book.book << endl;
}

void adventure::printInfo() const{
    cout << adventureBook.book.book << endl;
}

void fantasy::printCategory() const{
    cout << category << endl;
}

int main(){
    bookDetails b1 = {"HarryPotter", 150};
    bookDetails b2 = {"Lord of the Rings", 300};
    bookDetails b3 = {"Walter Mitty", 200};
    fantasy book1(b1, "I");
    fantasy book2(b2, "II");
    adventure book3(b3);
    book1.printInfo();
    book3.printInfo();
    return 0;
}
