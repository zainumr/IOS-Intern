#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
string author;
float price;
public:
string title;
    void display()
    {
        cout<< "Tile: " << title << '\n';
        cout<< "Author: " << author << '\n';
        cout<< "Price: " << price << '\n';
    }

    Book(string t, string a, float p) : title(t), author(a), price(p) {}


    Book(Book &obj)
    {
        this->title = obj.title;
        this->author = obj.author;
        this->price = obj.price;

    }
};


/*
    ================= Problem 1: Copy Constructor =================
    Create a C++ program to demonstrate the use of a Copy Constructor by copying data from one 
    object into another.
    Classes:
    1. Class: Book
        -> Data Members:
            . string title
            . string author
            . float price
        -> Member Functions:
            . void display(); — Displays book details.
        -> Constructors:
            . Parameterized Constructor — to initialize all members.
            . Copy Constructor — to copy one object into another.
    2. Input: Take one book’s details from the user.
    3. Output: Show both original and copied book details.
*/

int main()
{

    // string title = "OOP Concepts", author = "Robert Lafore";
    // float price = 950;;

    string title, author;
    float price;

    cout<< "Enter Book Title: ";
    cin>> title;

    cout<< "Enter Author: ";
    cin>> author;

    cout<< "Enter Price: ";
    cin>> price;

    cout<< "Original Book Details:\n";
    Book b1(title, author, price);
    b1.display();

    cout<< '\n';
    
    cout<< "Copyied Book Details:\n";
    Book b2(b1);
    b2.display();
    

    return 0;
}