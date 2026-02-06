#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
public:
    std::string title, author, isbn;
    bool isAvailable;

    Book(std::string t, std::string a, std::string i) 
        : title(t), author(a), isbn(i), isAvailable(true) {}
};
#endif