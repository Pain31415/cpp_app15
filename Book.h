#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    string publisher;
    string genre;

    void editBook();
};

#endif