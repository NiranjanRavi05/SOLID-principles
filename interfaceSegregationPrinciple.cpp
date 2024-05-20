#include "isp.h"

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
