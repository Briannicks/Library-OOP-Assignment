#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <iostream>

class User {
private:
    std::string name;
    int userId;
    std::vector<std::string> borrowedBooks; // Stores ISBNs

public:
    User(std::string n, int id) : name(n), userId(id) {}

    std::string getName() const { return name; }
    int getId() const { return userId; }

    void addBorrowedBook(std::string isbn) {
        borrowedBooks.push_back(isbn);
    }

    void showAccountInfo() const {
        std::cout << "User: " << name << " (ID: " << userId << ")\n";
        std::cout << "Books borrowed: " << borrowedBooks.size() << "\n";
    }
};

#endif