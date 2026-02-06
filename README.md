# Online Library Management System (BSD 122)

## Project Overview
This is a C++ application utilizing Object-Oriented Programming (OOP) to manage library operations. 

## OOP Principles Applied
- **Encapsulation:** Used private members and constructors to protect data.
- **Modularity:** Separate classes for Books, Users, and Library logic.

## Test Scenarios
### Positive Scenarios
- Adding a new book to the inventory.
- Successfully borrowing an available book.
### Negative Scenarios
- Attempting to borrow a book that is already checked out.
- Searching for a non-existent ISBN.

## How to Run
1. Clone the repo: `git clone <your-link>`
2. Compile: `g++ main.cpp -o LibraryApp`
3. Run: `./LibraryApp`