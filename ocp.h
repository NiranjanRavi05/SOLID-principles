#include "solid.h"

/************************************************************************/
/* It is not recommended to make a class that is open to modifications  */
/* in the future, rather it is best practice to design a class that is  */
/* only extendable without any alterations to the existing structure    */
/************************************************************************/
/************************************************************************/
/* In this example, when we want to add more genre later, it is not     */
/* recommended to modify the existing class                             */
/************************************************************************/
class books1{
private:
    bookDetails book;
public:
    void fantasyBook(bookDetails book) const; 
    void adventureBook(bookDetails book) const; 
};

/************************************************************************/
/* Deployment of Open-closed principle where when we want to add more   */
/* genre later, we can create a new subclass instead of modifying the   */
/* existing one                                                         */
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
public:
    fantasy(bookDetails);
    void printInfo() const override;
};

class adventure: public bookGenre{
private:
    books adventureBook;
public:
    adventure(bookDetails);
    void printInfo() const override;
};





