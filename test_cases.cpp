#include <iostream>
#include "main.cpp"

void runTests() {
    Library library;
    User testUser("Ochieng' Odhiambo", "U002");

    library.addBook("Mtoto na Mzazi", "Mama Mboga", "75848");

    cout << "Searching for 'Mtoto na Mzazi'...\n";
    library.searchBook("Mtoto na Mzazi");

    cout << "Borrowing 'Mtoto na Mzazi'...\n";
    testUser.borrowBook(library.books[0]);

    cout << "Returning 'Mtoto na Mzazi'...\n";
    testUser.returnBook(library.books[0]);

    cout << "Removing 'Mtoto na Mzazi'...\n";
    library.removeBook("99999");
}

int main() {
    runTests();
    return 0;
}
