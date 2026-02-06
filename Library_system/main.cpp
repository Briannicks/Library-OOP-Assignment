#include <iostream>
#include "Book.h"
#include "User.h"
#include "Library.h"

void runTests() {
    std::cout << "--- STARTING TEST SUITE ---\n";
    Library lib;
    lib.addBook(Book("Clean Code", "Robert Martin", "978-01"));
    lib.addBook(Book("C++ Primer", "Stanley Lippman", "978-02"));

    // 1. Positive Scenario: Successful Borrowing
    std::cout << "Test 1 (Borrowing Available Book): ";
    if (lib.borrowBook("978-01")) std::cout << "PASSED\n";
    else std::cout << "FAILED\n";

    // 2. Negative Scenario: Borrowing the same book twice
    std::cout << "Test 2 (Borrowing Already Borrowed Book): ";
    if (!lib.borrowBook("978-01")) std::cout << "PASSED (Error caught correctly)\n";
    else std::cout << "FAILED\n";

    // 3. Negative Scenario: Searching for non-existent ISBN
    std::cout << "Test 3 (Borrowing Non-existent ISBN): ";
    if (!lib.borrowBook("000-00")) std::cout << "PASSED (Error caught correctly)\n";
    else std::cout << "FAILED\n";

    std::cout << "--- TESTS COMPLETE ---\n\n";
}

int main() {
    // Run the automated validation first (Required by assignment)
    runTests();

    // Demonstrate User Interaction
    User brian("Brian Cheruiyot", 1001);
    brian.showAccountInfo();

    return 0;
}