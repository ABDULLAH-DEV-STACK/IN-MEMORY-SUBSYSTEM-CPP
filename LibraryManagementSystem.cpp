#include <iostream>
using namespace std;

 const int MAX = 50;

struct Book {
    int id;
    string title;
    string publishyear;
    string author;
    float price;
    int quantity;
    
};

Book books[MAX];
int countBooks = 0;

// Functions
void addBook();
void displayBooks();
void searchBook();
void updateBook();
void deleteBook();
void countAllBooks();
void searchbybookname();
int main() {
    int choice;

    while (true) {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Count Books\n";
        cout << "7. Search by book name\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: deleteBook(); break;
            case 6: countAllBooks(); break;
            case 7: searchbybookname(); break;
            case 8: cout << "Exiting program...\n"; return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}

// ➕ Add Book
void addBook() {
    if (countBooks >= MAX) {
        cout << "Library is full!\n";
        return;
    }

    int id;
    cout << "Enter Book ID: ";
    cin >> id;
    
    // duplicate check
  for (int i = 0; i < countBooks; i++) {        
        if (books[i].id == id) {
            cout << "Book ID already exists!\n";
            return;
        }
    }

    books[countBooks].id = id;

    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, books[countBooks].title);

    cout << "ENTER PUBLISH YEAR: ";
    getline(cin, books[countBooks].publishyear);

    cout << "Enter Author: ";
    getline(cin, books[countBooks].author);

    cout << "Enter Price: ";
    cin >> books[countBooks].price;

    cout << "Enter Quantity: ";
    cin >> books[countBooks].quantity;

    countBooks++;
    cout << "Book Added Successfully!\n";
}

// 📄 Display Books
void displayBooks() {
    if (countBooks == 0) {
        cout << "No books available!\n";
        return;
    }

    cout << "\nID\tTitle\t\tAuthor\t\tPrice\tQty\tPublish Year \n ";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < countBooks; i++) {
        cout << books[i].id << "\t"
             << books[i].title << "\t\t"
             << books[i].publishyear << "\t\t"
             << books[i].author << "\t\t"
             << books[i].price << "\t"
             << books[i].quantity << endl;
    }
}

// 🔍 Search Book
void searchBook() {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < countBooks; i++) {
        if (books[i].id == id) {
            cout << "Book Found:\n";
            cout << "Title: " << books[i].title <<endl;
            cout << "Publish year:" << books[i].publishyear <<endl;
            cout << "Author: " << books[i].author <<endl;
            cout << "Price: " << books[i].price <<endl;
            cout << "Quantity: " << books[i].quantity <<endl;
            return;
        }
    }

    cout << "Book not found!\n";
}

// ✏️ Update Book
void updateBook() {
    int id;
    cout << "Enter Book ID to update: ";
    cin >> id;

    for (int i = 0; i < countBooks; i++) {
        if (books[i].id == id) {
            cout << "Enter New Price: ";
            cin >> books[i].price;

            cout << "Enter New Quantity: ";
            cin >> books[i].quantity;

            cout << "Book Updated Successfully!\n";
            return;
        }
    }

    cout << "Book not found!\n";
}

// ❌ Delete Book
void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    for (int i = 0; i < countBooks; i++) {
        if (books[i].id == id) {

            for (int j = i; j < countBooks - 1; j++) {
                books[j] = books[j + 1];
            }

            countBooks--;
            cout << "Book Deleted Successfully!\n";
            return;
        }
    }

    cout << "Book not found!\n";
}

// 🔢 Count Books
void countAllBooks() {
    cout << "Total Books: " << countBooks << endl;
}
// Search by book name 
void searchbybookname() {
string name;
cout << "Enter Book Name to search:";
cin.ignore();
getline(cin,name);
 for (int i = 0; i <countBooks; i++){
    if (books[i].title == name){
        cout <<"book found:\n";
        cout << "ID:" << books[i].id <<endl;
        cout << "publish year:"<< books[i].publishyear <<endl;
        cout << "author:" << books[i].author <<endl;
        cout << "price:" << books[i].price <<endl;
        cout << "quantity:" << books[i].quantity <<endl;
        return;
    }
  
}    
}