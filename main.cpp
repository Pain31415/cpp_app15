#include "Library.h"

int main() {
    Library library;

    library.printAllBooksColor();
    library.searchByAuthor();
    library.searchByTitle();
    library.sortBooksByTitle();
    library.sortBooksByAuthor();
    library.sortBooksByPublisher();
    library.editBook();
    library.printAllBooksColor();

    return 0;
}