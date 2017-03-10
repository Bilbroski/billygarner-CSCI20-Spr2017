#include <iostream>
#include <cstdlib>     // Enables Random
#include <ctime>       // Enables Time
using namespace std;


class Book{    // Class for books
    private:
        void SetTitle(string bookTitle);
        void SetAuthor(string bookAuthor);
        void SetCopyYear(int bookCopyYear);
        string GetTitle();
        string GetAuthor();
        int GetCopyYear();
};

void Book::SetTitle(string bookTitle) {
    title = bookTitle;
    return;
}

void Book::SetAuthor(string bookAuthor){
    author = bookAuthor;
    return;
}

void Book::SetCopyYear(int bookCopyYear){
    copyYear = bookCopyYear;
    return;
}

string Book::GetTitle(){
    return title;
}

string Book::GetAuthor(){
    return author;
}

int Book::GetCopyYear(){
    return copyYear;
}

int main(){
    Book book1; //5 objects declared as books 1 through 5
    Book book2;
    Book book3;
    Book book4;
    Book book5;
    
    string userTitle = 0;
    string userAuthor = 0;
    int userYear = 0;
    
    //book 1 input
    cout << "What is the Book's Title?: " << endl;
    cin >> userTitle;
    book1.SetTitle(userTitle);
    cout << "What is the Book's Author?: " << endl;
    cin >> userAuthor;
    book1.SetAuthor(userAuthor);
    cout << "What is the Book's Copywrite Year?: " << endl;
    cin >> userYear;
    book1.SetCopyYear(userYear);
    cout << "Book1 info" << endl << "Title: " << title << endl << "Author: " << author << endl << "Copywrite Year: " << copyYear << endl;
    
    //book 2 input
    cout << "What is the Book's Title?: " << endl;
    cin >> userTitle;
    book2.SetTitle(userTitle);
    cout << "What is the Book's Author?: " << endl;
    cin >> userAuthor;
    book2.SetAuthor(userAuthor);
    cout << "What is the Book's Copywrite Year?: " << endl;
    cin >> userYear;
    book2.SetCopyYear(userYear);
    cout << "Book2 info" << endl << "Title: " << title << endl << "Author: " << author << endl << "Copywrite Year: " << copyYear << endl;
        
    //book 3 input
    cout << "What is the Book's Title?: " << endl;
    cin >> userTitle;
    book3.SetTitle(userTitle);
    cout << "What is the Book's Author?: " << endl;
    cin >> userAuthor;
    book3.SetAuthor(userAuthor);
    cout << "What is the Book's Copywrite Year?: " << endl;
    cin >> userYear;
    book3.SetCopyYear(userYear);
    cout << "Book3 info" << endl << "Title: " << title << endl << "Author: " << author << endl << "Copywrite Year: " << copyYear << endl;
    
    //book 4 input
    cout << "What is the Book's Title?: " << endl;
    cin >> userTitle;
    book4.SetTitle(userTitle);
    cout << "What is the Book's Author?: " << endl;
    cin >> userAuthor;
    book4.SetAuthor(userAuthor);
    cout << "What is the Book's Copywrite Year?: " << endl;
    cin >> userYear;
    book4.SetCopyYear(userYear);
    cout << "Book4 info" << endl << "Title: " << title << endl << "Author: " << author << endl << "Copywrite Year: " << copyYear << endl;
    
    //book 5 input
    cout << "What is the Book's Title?: " << endl;
    cin >> userTitle;
    book5.SetTitle(userTitle);
    cout << "What is the Book's Author?: " << endl;
    cin >> userAuthor;
    book5.SetAuthor(userAuthor);
    cout << "What is the Book's Copywrite Year?: " << endl;
    cin >> userYear;
    book5.SetCopyYear(userYear);
    cout << "Book5 info" << endl << "Title: " << title << endl << "Author: " << author << endl << "Copywrite Year: " << copyYear << endl;
    
return 0;
}
