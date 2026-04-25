#include <iostream>
#include <vector>
using namespace std;

// book class
class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isIssued = false;
    }
};

// library class
class Library {
private:
    vector<Book> books;

public:
    // add book
    void addBook(int id, string title, string author) {
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    // Display books
    void displayBooks() {
        cout << "\n--- Library Books ---\n";
        for (auto &b : books) {
            cout << "ID: " << b.id
                 << " | Title: " << b.title
                 << " | Author: " << b.author
                 << " | Status: " << (b.isIssued ? "Issued" : "Available")
                 << endl;
        }
    }

    // Search book
    void searchBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                cout << "Book Found: " << b.title << " by " << b.author << endl;
                return;
            }
        }
        cout << "Book not found!\n";
    }

    // issue book
    void issueBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                if (!b.isIssued) {
                    b.isIssued = true;
                    cout << "Book issued successfully!\n";
                } else {
                    cout << "Book already issued!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }

    // return book
    void returnBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                if (b.isIssued) {
                    b.isIssued = false;
                    cout << "Book returned successfully!\n";
                } else {
                    cout << "Book was not issued!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }
};

// main function
int main() {
    Library lib;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter ID, Title, Author: ";
            cin >> id;
            cin.ignore();
            getline(cin, title);
            getline(cin, author);
            lib.addBook(id, title, author);
            break;

        case 2:
            lib.displayBooks();
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> id;
            lib.searchBook(id);
            break;

        case 4:
            cout << "Enter Book ID: ";
            cin >> id;
            lib.issueBook(id);
            break;

        case 5:
            cout << "Enter Book ID: ";
            cin >> id;
            lib.returnBook(id);
            break;

        case 6:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
    }
}