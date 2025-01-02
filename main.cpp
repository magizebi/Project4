#include <iostream>
#include "pch.h"
#include "Book.h"
#include "BookManager.h"
#include "BorrowManager.h"


int main()
{
	cout << BorrowManager::getMax() << endl;
	BookManager::addBook("난장이가 쏘아올린 작은 공", "조세희");
	BookManager::addBook("우리들의 일그러진 영웅", "이문열");
	BookManager::addBook("한강", "조정래");
	BookManager::addBook("살인자의 기억법", "김영하");
	BookManager::addBook("바람의 딸, 걸어서 지구 세 바퀴 반", "한비야");
	BookManager::addBook("유교란 무엇인가", "김욕옥");
	BookManager::addBook("하늘과 바람과 별과 시", "윤동주");
	BookManager::addBook("코스모스", "칼 세이건");
	BookManager::addBook("어린왕자", "생텍쥐페리");
	BookManager::displayAllBooks();
	BorrowManager::borrowBook("한강");
	BookManager::displayAllBooks();
}