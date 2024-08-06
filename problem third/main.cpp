#include "library.hpp"
int showMenu(std::string menu[], int size);

bool shouldProgramExit = false;

int main()
{
    int capacity;
    std::cout << "Enter the capacity of the library: ";
    std::cin >> capacity;
    Library library(capacity);
    int choice;
    std::string menu[] = {"Add a book", "Remove a book", "Return book", "Check if a book is available", "Check if a book is available by title", "Display all books", "Exit"};
    while (!shouldProgramExit)
    {
        choice = showMenu(menu, 7);
        switch (choice)
        {
        case 1:
            // Add a book
            library.addBook();
            break;
        case 2:
            // Remove a book
            break;
        case 3:
            // Return book
            break;
        case 4:
            // Check if a book is available
            break;
        case 5:
            // Check if a book is available by title
            break;
        case 6:
            // Display all books
            library.display();
            break;
        case 7:
            // Exit
            shouldProgramExit = true;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}

int showMenu(std::string menu[], int size)
{
    system("clear");
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << ". " << menu[i] << std::endl;
    }
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}