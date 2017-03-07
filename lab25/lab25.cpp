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
    return 
}

string Book:: GetAuthor(){
    return 
}

int Book::GetCopyYear(){
    return 
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
    
    cout << "What is the Book's Title?: " << endl;
    cin >> userTitle
    book1.SetTitle(userTitle);
    book1.SetTitle(userTitle);
    
    
        cout << "What is the Book's Author?: " << endl;
    cin >> userAuthor
    book1.SetTitle(userAuthor);
    
        cout << "What is the Book's Copywrite Year?: " << endl;
    cin >> userYear
    book1.SetTitle(userYear);
return 0;
}
