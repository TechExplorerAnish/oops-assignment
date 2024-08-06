#ifndef LIBRARY_HPP
#define LIBRARY_HPP
#include <iostream>
#include "book.hpp"
class Library
{
private:
    Book *books;
    int size;
    int capacity;

public:
    Library();
    ~Library();
    Library(int capacity);
    int addBook();
    int removeBook(Book book);
    int isBookAvailable(Book book);
    int isBookAvailable(std::string title);
    bool isSpaceAvailable();
    void display();
    Book getBook(int index);
};
#endif // LIBRARY_HPP