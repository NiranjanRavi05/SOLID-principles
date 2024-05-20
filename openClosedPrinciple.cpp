#include "ocp.h"

int main(){
    bookDetails b1 = {"HarryPotter", 150};
    bookDetails b2 = {"Lord of the Rings", 300};
    fantasy book1(b1);
    fantasy book2(b2);
    book1.printInfo();
    return 0;
}
