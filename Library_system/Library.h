#include <vector>
#include <iostream>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(Book b) { books.push_back(b); }

    bool borrowBook(std::string isbn) {
        for (auto &b : books) {
            if (b.isbn == isbn) {
                if (b.isAvailable) {
                    b.isAvailable = false;
                    return true; // Positive Case
                }
                std::cout << "Error: Book is already borrowed.\n";
                return false; // Negative Case
            }
        }
        std::cout << "Error: ISBN not found.\n";
        return false; // Negative Case
    }
};