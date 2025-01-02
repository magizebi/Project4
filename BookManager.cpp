#include "pch.h"
#include "BookManager.h"

vector<Book> BookManager::books;

Book* BookManager::findBookByTitle(string title)
{
    for (Book& book : books) {
        if (book.get_title() == title) return &book;
    }
    return nullptr;
}

Book* BookManager::findBookByAuthor(string author)
{
    for (Book& book : books) {
        if (book.get_author() == author) return &book;
    }
    return nullptr;
}

void BookManager::addBook(string title, string author)
{
    Book book = Book(title, author);
    books.push_back(book);
    BorrowManager::initializeStock(book);
}

void BookManager::displayAllBooks()
{
    for (Book& book : books) {
        cout << "이름 : " << book.get_title()
            << " / 저자 : " << book.get_author()
            << " / 재고 : " << BorrowManager::getStock(book.get_title()) << endl;
    }
}

Book* BookManager::getBookByTitle(string title)
{
    for (Book& book : books) {
        if (book.get_title() == title) return &book;
    }
    return nullptr;
}

Book* BookManager::getBookByAuthor(string author)
{
    for (Book& book : books) {
        if (book.get_author() == author) return &book;
    }
    return nullptr;
}
