#pragma once
#include "Book.h"
#include "BorrowManager.h"


class BookManager
{
	static vector<Book> books;
private:
	static Book* findBookByTitle(string title);
	static Book* findBookByAuthor(string author);
public:
	static void addBook(string title, string author);
	static void displayAllBooks();
	static Book* getBookByTitle(string title);
	static Book* getBookByAuthor(string author);
};
