#include "book.hpp"

Book::Book()
{
    title = "";
    author = "";
    numberOfCopies = 0;
}

Book::Book(std::string title, std::string author, int numberOfCopies)
{
    this->title = title;
    this->author = author;
    this->numberOfCopies = numberOfCopies;
}

Book Book::createBook()
{
    std::string title, author;
    int numberOfCopies;
    std::cout << "Enter the title of the book: ";
    std::getline(std::cin >> std::ws, title);
    std::cout << "Enter the author of the book: ";
    std::getline(std::cin >> std::ws, author);
    std::cout << "Enter the number of copies of the book: ";
    std::cin >> numberOfCopies;
    *this = Book(title, author, numberOfCopies);
    return *this;
}

std::string Book::getTitle()
{
    return title;
}

std::string Book::getAuthor()
{
    return author;
}

int Book::getNumberOfCopies()
{
    return numberOfCopies;
}

void Book::setTitle(std::string title)
{
    this->title = title;
}

void Book::setAuthor(std::string author)
{
    this->author = author;
}

void Book::setNumberOfCopies(int numberOfCopies)
{
    this->numberOfCopies = numberOfCopies;
}

void Book::display()
{
    std::cout << "................................." << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Number of copies: " << numberOfCopies << std::endl;
}

void Book::increaseCopies(int n)
{
    numberOfCopies += n;
}
void Book::setLocation(int location)
{
    this->location = location;
}
int Book::getLocation()
{
    return location;
}

void Book::decreaseCopies(int n)
{
    numberOfCopies -= n;
}

bool Book::operator==(const Book &book)
{
    return title == book.title && author == book.author;
}

bool Book::isAvailable()
{
    return numberOfCopies > 0;
}
