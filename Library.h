#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    string publisher;
    string genre;

    void editBook();
};

class Library {
public:
    static const int BOOK_COUNT = 10;

    Library();

    void editBook();
    void printBook(const Book& book);
    void printAllBooksColor() const;
    void searchByAuthor() const;
    void searchByTitle() const;
    void sortBooksByTitle();
    void sortBooksByAuthor();
    void sortBooksByPublisher();

private:
    Book library[BOOK_COUNT];

#ifdef _WIN32
    void setConsoleColor(WORD color) const;
#endif
};

#endif