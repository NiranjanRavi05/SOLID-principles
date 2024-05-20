#include "pch.h"
#include "../srp.h"

TEST(SRPTest1, BookName) {
    bookDetails b1 = { "HarryPotter", 150 };
    books book1(b1);
    EXPECT_EQ("HarryPotter", book1.printDetails());
    EXPECT_TRUE(true);
}

TEST(SRPTest2, BookNameFalse) {
    bookDetails b2 = { "Lord of the Rings", 300 };
    books book2(b2);
    EXPECT_EQ("Lord of the Rings", book2.printDetails());
    EXPECT_TRUE(true);
}

TEST(SRPTest3, CustomerName) {
    customerDetails c1 = { "Maxwell" };
    customers customer1(c1);
    EXPECT_EQ("Maxwell", customer1.printDetails());
    EXPECT_TRUE(true);
}

// Main function to run all tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}