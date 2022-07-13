// Constructors

#include <iostream>
using namespace std;

class Book{            
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages){                      //A constructor is a function that is going to be called 
            title = aTitle;                                                   //every time a object is created
            author = aAuthor;
            pages = aPages;
        }};

int main()
{
    Book book1("Harry Potter", "J.K. Rowling", 500);
    Book book2("Lord of the Rings", "Tolkein", 700);

    cout << book1.title;

    return 0;
}