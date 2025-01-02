#pragma once
#include "Book.h"
#include "BookManager.h"

class BorrowManager
{
	static unordered_map<string, int> stock;
	static int max_quantity;
public:
	static void initializeStock(Book book);
	static void borrowBook(string title);
	static void returnBook(string title);
	static int getStock(string title);
	static int getMax();
};
