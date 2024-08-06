#ifndef BOOK_HPP
#define BOOK_HPP
#include <iostream>
class Book
{
private:
    std::string title;
    std::string author;
    int numberOfCopies;
    int location;

public:
    Book();
    Book(std::string title, std::string author, int numberOfCopies);
    std::string getTitle();
    std::string getAuthor();
    int getNumberOfCopies();
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setNumberOfCopies(int numberOfCopies);
    void display();
    void increaseCopies(int n);
    void decreaseCopies(int n);
    Book createBook();
    void setLocation(int location);
    int getLocation();
    bool operator==(const Book &book);
    bool isAvailable();

    
};

#endif // BOOK_HPP