#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Command {
    SHOW_BOOK = 1,
    SHOW_BOOKS,
    INSERT_BOOK,
    REMOVE_BOOK,
    CHANGE_BOOK,
    BORROW_BOOK,
    RETURN_BOOK,
    SHOW_MEMBER,
    SHOW_MEMBERS,
    INSERT_MEMBER,
    REMOVE_MEMBER,
    CHANGE_MEMBER,
    QUIT,
};

struct Book {
    int id;
    string name;
};

struct Member {
    int id;
    string name;
};

vector<Book> books;
vector<Member> members;
vector<pair<int, int>> manage_list; // <book_id, member_id>

bool borrow_book(int book_id, int member_id) {
    for (auto& manage : manage_list) {
        if (manage.first == book_id) {
            return false;
        }
    }
    manage_list.push_back(make_pair(book_id, member_id));
    return true;
}

Book* find_book(int book_id) {
    for (auto& book : books) {
        if (book.id == book_id) {
            return &book;
        }
    }
    return NULL;
}

Member* find_member(int member_id) {
    for (auto& member : members) {
        if (member.id == member_id) {
            return &member;
        }
    }
    return NULL;
}

void load_books() {
    ifstream file("book.txt");
    if (file.is_open()) {
        int book_id;
        string book_name;
        while (file >> book_id >> book_name) {
            books.push_back(Book{ book_id, book_name });
        }
        file.close();
    }
}

void load_manage_list() {
    ifstream file("manage.txt");
    if (file.is_open()) {
        int book_id;
        int member_id;
        while (file >> book_id >> member_id) {
            manage_list.push_back(make_pair(book_id, member_id));
        }
        file.close();
    }
}

void load_members() {
    ifstream file("member.txt");
    if (file.is_open()) {
        int member_id;
        string member_name;
        while (file >> member_id >> member_name) {
            members.push_back(Member{ member_id, member_name });
        }
        file.close();
    }
}

void print_book(Book* book) {
    cout << "Book { ID: " << book->id << ", Name: " << book->name << " }" << endl;
}

void print_books() {
    for (auto& book : books) {
        print_book(&book);
    }
}

void print_commands() {
    cout << "<Command>" << endl
         << "1. show a book" << endl
         << "2. show all books" << endl
         << "3. insert a book" << endl
         << "4. remove a book" << endl
         << "5. change a book" << endl
         << "6. borrow a book" << endl
         << "7. return a book" << endl
         << "8. show a member" << endl
         << "9. show all members" << endl
         << "10. insert a member" << endl
         << "11. remove a member" << endl
         << "12. change a member" << endl
         << "13. quit" << endl;
}

void print_member(Member* member) {
    cout << "Member { ID: " << member->id << ", Name: " << member->name << " }" << endl;
}

void print_members() {
    for (auto& member : members) {
        print_member(&member);
    }
}

bool remove_book(int book_id) {
    int index = 0;
    for (auto& book : books) {
        if (book.id == book_id) {
            books.erase(books.begin() + index);
            return true;
        }
        index += 1;
    }
    return false;
}

bool remove_member(int member_id) {
    int index = 0;
    for (auto& member : members) {
        if (member.id == member_id) {
            members.erase(members.begin() + index);
            return true;
        }
        index += 1;
    }
    return false;
}

bool return_book(int book_id) {
    int index = 0;
    for (auto& manage : manage_list) {
        if (manage.first == book_id) {
            manage_list.erase(manage_list.begin() + index);
            return true;
        }
        index += 1;
    }
    return false;
}

void save_books() {
    ofstream file("book.txt");
    if (file.is_open()) {
        for (auto& book : books) {
            file << book.id << " " << book.name << endl;
        }
        file.close();
    }
}

void save_manage_list() {
    ofstream file("manage.txt");
    if (file.is_open()) {
        for (auto& manage : manage_list) {
            file << manage.first << " " << manage.second << endl;
        }
        file.close();
    }
}

void save_members() {
    ofstream file("member.txt");
    if (file.is_open()) {
        for (auto& member : members) {
            file << member.id << " " << member.name << endl;
        }
        file.close();
    }
}

int scan_book_id() {
    int book_id;
    cout << "Book ID: ";
    cin >> book_id;
    return book_id;
}

string scan_book_name() {
    string book_name;
    cout << "Book Name: ";
    cin >> book_name;
    return book_name;
}

int scan_command() {
    int command;
    cout << "Command: ";
    cin >> command;
    return command;
}

int scan_member_id() {
    int member_id;
    cout << "Member ID: ";
    cin >> member_id;
    return member_id;
}

string scan_member_name() {
    string member_name;
    cout << "Member Name: ";
    cin >> member_name;
    return member_name;
}

int main() {
    load_books();
    load_members();
    load_manage_list();
    Book* book_ptr;
    Member* member_ptr;
    while (true) {
        print_commands();
        switch (scan_command()) {
        case SHOW_BOOK:
            if (book_ptr = find_book(scan_book_id())) {
                print_book(book_ptr);
            } else {
                cout << "Error: Cannot find the book." << endl;
            }
            break;
        case SHOW_BOOKS:
            print_books();
            break;
        case INSERT_BOOK:
            books.push_back(Book{ scan_book_id(), scan_book_name() });
            cout << "Inserted." << endl;
            save_books();
            break;
        case REMOVE_BOOK:
            if (remove_book(scan_book_id())) {
                cout << "Removed." << endl;
                save_books();
            } else {
                cout << "Error: Cannot find the book." << endl;
            }
            break;
        case CHANGE_BOOK:
            cout << "Original ";
            if (book_ptr = find_book(scan_book_id())) {
                cout << "Replaced ";
                book_ptr->id = scan_book_id();
                cout << "Replaced ";
                book_ptr->name = scan_book_name();
                cout << "Replaced." << endl;
                save_books();
            } else {
                cout << "Error: Cannot find the book." << endl;
            }
            break;
        case BORROW_BOOK:
            if (book_ptr = find_book(scan_book_id())) {
                if (member_ptr = find_member(scan_member_id())) {
                    if (borrow_book(book_ptr->id, member_ptr->id)) {
                        cout << "Borrowed." << endl;
                        save_manage_list();
                    } else {
                        cout << "Error: Cannot borrow the book." << endl;
                    }
                } else {
                    cout << "Error: Cannot find the member." << endl;
                }
            } else {
                cout << "Error: Cannot find the book." << endl;
            }
            break;
        case RETURN_BOOK:
            if (book_ptr = find_book(scan_book_id())) {
                if (return_book(book_ptr->id)) {
                    cout << "Returned." << endl;
                    save_manage_list();
                } else {
                    cout << "Error: Cannot return the book." << endl;
                }
            } else {
                cout << "Error: Cannot find the book." << endl;
            }
            break;
        case SHOW_MEMBER:
            if (member_ptr = find_member(scan_member_id())) {
                print_member(member_ptr);
            } else {
                cout << "Error: Cannot find the member." << endl;
            }
            break;
        case SHOW_MEMBERS:
            print_members();
            break;
        case INSERT_MEMBER:
            members.push_back(Member{ scan_member_id(), scan_member_name() });
            cout << "Inserted." << endl;
            save_members();
            break;
        case REMOVE_MEMBER:
            if (remove_member(scan_member_id())) {
                cout << "Removed." << endl;
                save_members();
            } else {
                cout << "Error: Cannot find the member." << endl;
            }
            break;
        case CHANGE_MEMBER:
            cout << "Original ";
            if (member_ptr = find_member(scan_member_id())) {
                cout << "Replaced ";
                member_ptr->id = scan_member_id();
                cout << "Replaced ";
                member_ptr->name = scan_member_name();
                cout << "Replaced." << endl;
                save_members();
            } else {
                cout << "Error: Cannot find the member." << endl;
            }
            break;
        case QUIT:
            return 0;
        }
    }
    return 0;
}
