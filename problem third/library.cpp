#include "library.hpp"

Library::Library()
{
    size = 0;
    capacity = 10;
    books = new Book[capacity];
}

Library::Library(int capacity)
{
    size = 0;
    this->capacity = capacity;
    books = new Book[capacity];
}

Library::~Library()
{
    delete[] books;
}

int Library::addBook()
{
    Book book;
    if (size == capacity)
    {
        std::cout << "Library is full. Cannot add more books." << std::endl;
        return -1;
    }
    book.createBook();
    book.setLocation(size);
    books[size++] = book;
    return 0;
}

int Library::removeBook(Book book)
{
    for (int i = 0; i < size; i++)
    {
        if (books[i] == book)
        {
            for (int j = i; j < size - 1; j++)
            {
                books[j] = books[j + 1];
            }
            size--;
            return 0;
        }
    }
    std::cout << "Book not found in the library." << std::endl;
    return -1;
}

int Library::isBookAvailable(Book book)
{

    if (books[book.getLocation()] == book && books[book.getLocation()].isAvailable())
    {
        return true;
    }

    return false;
}

int Library::isBookAvailable(std::string title)
{
    for (int i = 0; i < size; i++)
    {
        if (books[i].getTitle() == title && books[i].isAvailable())
        {
            return true;
        }
    }
    return false;
}

void Library::display()
{
    char ch;
    for (int i = 0; i < size; i++)
    {
        books[i].display();
    }
    std::cin>>ch;
}