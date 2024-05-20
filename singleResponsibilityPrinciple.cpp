#include "srp.h"

int main(){
    bookDetails b1 = {"HarryPotter", 150};
    bookDetails b2 = {"Lord of the Rings", 300};
    books book1(b1);
    books book2(b2);
    book1.printDetails();
    return 0;
}
