#include <iostream>
using namespace std;

// 1
class Book
{
public:
    string title;
    string author;
    float price;
    static int totalBooks;

    Book() { }

    Book(string title, string author, float price)
    { 
        this->title = title;
        this->author = author;
        this->price = price;
    }

    Book(string title)
    {
        this->title = title;
        this->author = "Unknown";
        this->price = 0;
    }

    void getBook()
    {
        cout<< "Book " << ++totalBooks << " Title: " << title << ", Author: " << author << ", Price: " << price << '\n';
    }

    static int showTotalBooks()
    {
        return totalBooks;
    }

   

    void applyDiscount(int discountVal)
    {
        price = price - (price * discountVal / 100.0f);
        cout<< "New Price of \"" << title << "\" after discount: " << price << '\n';
    }
 
};

int Book::totalBooks = 0;

// 2
class LibraryManager
{
private:
    static LibraryManager* instance;
    LibraryManager() {}
    
public:
    // creating object
    static LibraryManager* getInstance()
    {
        if (instance == nullptr)
        {
            instance = new LibraryManager();
        }

        return instance;
        
    }

    void displayTotalBooks()
    {
        cout<< "[Library Manager] Total Books in Library: " << Book::showTotalBooks() << '\n';
    }
};

LibraryManager* LibraryManager::instance = nullptr;

/*
    ================= Problem 7: Merger =================
    Create a C++ program:
    You are tasked to design a simple Library System.
    1. Create a class Book with:
        . Data members: title, author, price.
        . Constructors:
        . Default constructor (empty values).
        . Parameterized constructor (initialize all values).
        . Constructor Overloading: One constructor should take only title (set author = "Unknown", price = 0).
        . Static variable: totalBooks → count how many books are created.
        . Static function: showTotalBooks() → display the number of books created.
        . Utility function: applyDiscount(float percent) → reduce price by percentage.
    2. Create another class LibraryManager:
        . It should have a private constructor so objects cannot be created normally.
        . Provide a static function getInstance() that creates and returns a single manager object.
        . Add a function displayTotalBooks() → calls Book::showTotalBooks().
    3. In main():
        . Create 3 books using different constructors.
        . Show their details.
        . Ask the user to enter a discount percentage for one book → apply discount → show new price.
        . Use the LibraryManager object to show total books.
*/

int main()
{
    Book b1;
    b1.title = "C++ Basics";
    b1.author = "Ali";
    b1.price = 600;
    b1.getBook();

    Book b2("Data Structure", "Sara", 750);
    b2.getBook();

    Book b3("OOP Concept");
    b3.getBook();

    cout<< '\n';

    int discount;

    cout<< "Enter discount in percentage for Book 1: ";
    cin>> discount;
    b1.applyDiscount(discount);

    cout<< '\n';

    LibraryManager* totalBooks = LibraryManager::getInstance();
    totalBooks->displayTotalBooks();



    return 0;
}