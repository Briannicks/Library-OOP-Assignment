#ifndef BOOK_H
#define BOOK_H
#include <string> // Must include this

class Book {
private:
    std::string title; // Must use std::
    std::string author;
    std::string isbn;
    bool isAvailable;

public:
    Book(std::string t, std::string a, std::string i) 
        : title(t), author(a), isbn(i), isAvailable(true) {}

    std::string getTitle() const { return title; }
    std::string getIsbn() const { return isbn; }
    bool checkAvailability() const { return isAvailable; }
    void setAvailability(bool status) { isAvailable = status; }
};
#endif