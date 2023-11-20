#include "Book.h"

void Book::editBook() {
    cout << "Enter new book information:\n";
    cout << "Title: ";
    getline(cin, title);
    cout << "Author: ";
    getline(cin, author);
    cout << "Publisher: ";
    getline(cin, publisher);
    cout << "Genre: ";
    getline(cin, genre);
}