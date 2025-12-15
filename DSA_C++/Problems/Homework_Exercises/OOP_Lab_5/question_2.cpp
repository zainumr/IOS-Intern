#include <iostream>
#include <string>
#include <limits>
using namespace std;

// 1
struct Book
{
    string title;
    string author;
    long int isbn;
    int price;
};

// 3
void booksByPrice(Book book[], int n)
{
    cout<< "Books sorted by price: " << '\n';

    for (int i = 0; i < n-1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (book[j].price < book[j+1].price)
            {
                swap(book[j], book[j+1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<< i+1 << ". " << book[i].title << " - Rs. " << book[i].price << '\n';
    } 
    cout<< '\n';
}

// 4
void searchByAuthor(Book book[], int n)
{
    // copy of array
    Book sortedBooks[n];
    for (int i = 0; i < n; i++)
    {
        sortedBooks[i] = book[i];  // copy each element
    }

    // sorrting
    sort(sortedBooks, sortedBooks + n, [](const Book &a, const Book &b) {
    return a.author < b.author;  // ascending order by author
    });
    
    string authName;
    cout<< "Enter Author Name: ";
    getline(cin, authName);
    cout<< '\n';
    
    int st = 0, end = n-1;
    bool found = false;

    while(st <= end)
    {
        int mid = st + (end-st)/2;

        if (authName < book[mid].author)
        {
            end = mid-1;
        }
        else if (authName > book[mid].author)
        {
            st = mid+1;
        }
        else
        {

            cout<< "Search by Author: \'" << authName << "\':\n";
            cout<< "- \"" << book[mid].title << "\" ";
            cout<< "(ISBN : " << book[mid].isbn << ") ";
            cout<< "- Rs. " << book[mid].price << '\n';
            found = true;
            break;
        }
    }
    
    if (!found)
    {
        cout<< "No books found for this author.\n";
    }

    cout<< '\n';
    
}


int main()
{
/*
    ================= Problem: Arrays of Structures =================
    Write a C++ program to manage a collection of books.
    1. Define a struct Book with: Title, Author, ISBN and Price
    2. Store details of 10 books in an array of structures
    3. Write a function to sort books by Price (descending order) and display them
    4. Write another function to search for all books by a given author name entered by the user
    5. Display the most expensive book.
*/
    // 2
    Book books[10];

    books[0] = {"Database System Concepts", "Henry Korth", 9780073523323, 2000};
    books[1] = {"OOP in C++", "Thomas H. Cormen", 9780262033848, 3250};
    books[2] = {"Operating System Concepts", "Abraham Silberschatz", 9781118063330, 2800};
    books[3] = {"Clean Code", "Adam Mike", 9781133526046, 2900};
    books[4] = {"C++ Primer", "Robert C. Martin", 9780132350884, 3000};
    books[5] = {"Python Crash Course", "Eric Matthes", 978159327928, 1300};
    books[6] = {"Data Structures", "Adam Drozdek", 9781133526046, 3500};
    books[7] = {"Design Patterns", "Erich Gamma", 9780201633610, 1900};
    books[8] = {"Head First Java", "Kathy Sierra", 9780596009205, 1500};
    books[9] = {"Computer Networks", "Andrew S. Tanenbaum", 9780132126953, 2200};

    // 3
    booksByPrice(books, 10);  

    // 4
    searchByAuthor(books, 10);

    // 5
    cout<< "Most Expensive Book:\n";
    cout<< "- \"" << books[0].title << "\" ";
    cout<< "(ISBN : " << books[0].isbn << ") ";
    cout<< "- Rs. " << books[0].price << '\n';

    return 0;
}