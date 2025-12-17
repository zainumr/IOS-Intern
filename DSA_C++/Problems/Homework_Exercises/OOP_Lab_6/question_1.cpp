#include <iostream>
using namespace std;

// 1
class Book
{
    private:
        string title;
        string author;   
        float price;
    
    public:
        // 2
        Book(string title, string author, float price)
        {
            this->title = title;
            this->author = author;
            this->price = price;
        }

        void display()
        {
            cout<< "Book Title: " << title << ", Author: " << author << ", Price: " << price << '\n';
        }

};

/*
    ================= Problem 1: Constructor =================
    Create a C++ program:
    1. Make a class Book with attributes: title, author, price.
    2. Write a constructor to initialize these values.
    3. Create 2 objects of Book and display their details.
        • (No user input required – hardcode the values in constructor.)
*/

int main()
{
    // 3
    Book b1("Atomic Habit", "James Clear", 1199.99);
    Book b2("Rich Dad Poor Dad", "Robert Kiyosaki", 1500.75);
    b1.display();
    b2.display();

    return 0;
}