#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Book {
public:
    string title, author, ISBN;
    bool available;

    Book(string t, string a, string i) : title(t), author(a), ISBN(i), available(true) {}

    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << ISBN
             << ", Available: " << (available ? "Yes" : "No") << endl;
    }
};

class User {
public:
    string name, userID;
    vector<Book*> borrowedBooks;

    User(string n, string id) : name(n), userID(id) {}

    void borrowBook(Book &book) {
        if (book.available) {
            book.available = false;
            borrowedBooks.push_back(&book);
            cout << name << " borrowed " << book.title << endl;
        } else {
            cout << "Book is not available." << endl;
        }
    }

    void returnBook(Book &book) {
        auto it = find(borrowedBooks.begin(), borrowedBooks.end(), &book);
        if (it != borrowedBooks.end()) {
            book.available = true;
            borrowedBooks.erase(it);
            cout << name << " returned " << book.title << endl;
        } else {
            cout << "Book not found in borrowed list." << endl;
        }
    }
};

class Library {
public:
    vector<Book> books;
    vector<User> users;

    void addBook(string title, string author, string ISBN) {
        books.emplace_back(title, author, ISBN);
        cout << "Book added: " << title << endl;
    }

    void removeBook(string ISBN) {
        auto it = remove_if(books.begin(), books.end(), [&](Book &b) { return b.ISBN == ISBN; });
        if (it != books.end()) {
            cout << "Book removed: " << it->title << endl;
            books.erase(it);
        } else {
            cout << "Book not found." << endl;
        }
    }

    void searchBook(string query) {
        for (auto &book : books) {
            if (book.title == query || book.author == query || book.ISBN == query) {
                book.display();
                return;
            }
        }
        cout << "Book not found." << endl;
    }
};

#endif // LIBRARY_SYSTEM_H
