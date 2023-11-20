#include "Library.h"

#ifdef _WIN32
#include <windows.h>
#endif

Book::editBook() {
    cout << "Enter new title: ";
    getline(cin, title);
    cout << "Enter new author: ";
    getline(cin, author);
    cout << "Enter new publisher: ";
    getline(cin, publisher);
    cout << "Enter new genre: ";
    getline(cin, genre);
}

Library::Library() {
    for (int i = 0; i < BOOK_COUNT; ++i) {
        library[i] = { "Book" + to_string(i + 1), "Author" + to_string(i + 1), "Publisher" + to_string(i + 1), "Genre" + to_string(i + 1) };
    }
}

void Library::editBook() {
    int bookIndex;
    cout << "Enter the index of the book to edit (1-" << BOOK_COUNT << "): ";
    cin >> bookIndex;
    cin.ignore();

    if (bookIndex >= 1 && bookIndex <= BOOK_COUNT) {
        cout << "Editing book at index " << bookIndex << ":\n";
        library[bookIndex - 1].editBook();
        cout << "Book edited successfully.\n";
    }
    else {
        cout << "Invalid index.\n";
    }
}

void Library::printBook(const Book& book) {
#ifdef _WIN32
    setConsoleColor(FOREGROUND_GREEN);
#endif
    cout << "Title: " << book.title << endl;
#ifdef _WIN32
    setConsoleColor(FOREGROUND_RED);
#endif
    cout << "Author: " << book.author << endl;
#ifdef _WIN32
    setConsoleColor(FOREGROUND_BLUE);
#endif
    cout << "Publisher: " << book.publisher << endl;
#ifdef _WIN32
    setConsoleColor(FOREGROUND_MAGENTA);
#endif
    cout << "Genre: " << book.genre << endl;
    cout << "--------------------------\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif
}

void Library::printAllBooksColor() const {
#ifdef _WIN32
    setConsoleColor(FOREGROUND_GREEN);
#endif
    cout << "List of Books:\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif

    for (int i = 0; i < BOOK_COUNT; ++i) {
#ifdef _WIN32
        setConsoleColor(FOREGROUND_CYAN);
#endif
        printBook(library[i]);
#ifdef _WIN32
        setConsoleColor(FOREGROUND_INTENSITY);
#endif
    }
}

void Library::searchByAuthor() const {
    string author;
    cout << "Enter author name to search: ";
    getline(cin, author);

    bool found = false;
#ifdef _WIN32
    setConsoleColor(FOREGROUND_YELLOW);
#endif
    cout << "Books by Author '" << author << "':\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif

    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (library[i].author == author) {
            printBook(library[i]);
            found = true;
        }
    }

    if (!found) {
#ifdef _WIN32
        setConsoleColor(FOREGROUND_RED);
#endif
        cout << "No books found by Author '" << author << "'.\n";
#ifdef _WIN32
        setConsoleColor(FOREGROUND_INTENSITY);
#endif
    }
}

void Library::searchByTitle() const {
    string title;
    cout << "Enter book title to search: ";
    getline(cin, title);

    bool found = false;
#ifdef _WIN32
    setConsoleColor(FOREGROUND_YELLOW);
#endif
    cout << "Books with Title '" << title << "':\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif

    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (library[i].title == title) {
            printBook(library[i]);
            found = true;
            break;
        }
    }

    if (!found) {
#ifdef _WIN32
        setConsoleColor(FOREGROUND_RED);
#endif
        cout << "No books found with Title '" << title << "'.\n";
#ifdef _WIN32
        setConsoleColor(FOREGROUND_INTENSITY);
#endif
    }
}

void Library::sortBooksByTitle() {
    sort(library, library + BOOK_COUNT, [](const Book& a, const Book& b) {
        return a.title < b.title;
        });
#ifdef _WIN32
    setConsoleColor(FOREGROUND_GREEN);
#endif
    cout << "Books sorted by title.\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif
}

void Library::sortBooksByAuthor() {
    sort(library, library + BOOK_COUNT, [](const Book& a, const Book& b) {
        return a.author < b.author;
        });
#ifdef _WIN32
    setConsoleColor(FOREGROUND_GREEN);
#endif
    cout << "Books sorted by author.\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif
}

void Library::sortBooksByPublisher() {
    sort(library, library + BOOK_COUNT, [](const Book& a, const Book& b) {
        return a.publisher < b.publisher;
        });
#ifdef _WIN32
    setConsoleColor(FOREGROUND_GREEN);
#endif
    cout << "Books sorted by publisher.\n";
#ifdef _WIN32
    setConsoleColor(FOREGROUND_INTENSITY);
#endif
}

#ifdef _WIN32
void Library::setConsoleColor(WORD color) const {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
#endif