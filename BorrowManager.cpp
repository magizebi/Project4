#include "pch.h"
#include "BorrowManager.h"

unordered_map<string, int> BorrowManager::stock;
int BorrowManager::max_quantity = 3;

void BorrowManager::initializeStock(Book book)
{
	string title = book.get_title();
	stock[title] = max_quantity;
}

void BorrowManager::borrowBook(string title)
{
	Book* book = BookManager::getBookByTitle(title);
	if (book == nullptr) return;

	int count = stock[title];

	if (count > 0 && count <= max_quantity) {
		stock[title]--;
	}
}

void BorrowManager::returnBook(string title)
{
	Book* book = BookManager::getBookByTitle(title);
	if (book == nullptr) return;

	int count = stock[title];

	if (count >= 0 && count < max_quantity) {
		stock[title]++;
	}
}

int BorrowManager::getStock(string title)
{
	Book* book = BookManager::getBookByTitle(title);
	if (book == nullptr) return 0;
	return stock[title];
}

int BorrowManager::getMax()
{
	return max_quantity;
}
