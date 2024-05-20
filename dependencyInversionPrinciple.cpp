#include "dip.h"

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
