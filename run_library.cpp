#include "main.cpp"

int main() {
    Library library;
    User user("Kevo", "U001");

    library.addBook("Johnny Test", "Wanjiu Morara", "12345");
    library.addBook("Mshataki Mewa", "Mwongela Atieno", "67890");

    library.searchBook("Johnny Test");
    user.borrowBook(library.books[0]);
    user.returnBook(library.books[0]);

    return 0;
}
