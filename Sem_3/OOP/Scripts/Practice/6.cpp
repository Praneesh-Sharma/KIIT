// Classes and Objects

#include <iostream>
using namespace std;

class Book{                 //A class is a blueprint/template/specification of a custom datatype
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1;                     //An object is an instance of a class
    book1.title = "Harry Potter";
    book1.author = "J.K. Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book1.title << endl;
    cout << book2.author << endl;

    return 0;
}