#pragma once

class Book
{
	string _title;
	string _author;
public:
	Book(string title, string author) : _title(title), _author(author) {}
	string get_title() const { return _title; }
	string get_author() const { return _author; }
};

