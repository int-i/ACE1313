#include <stdio.h>
#include <string.h>
#define MAX_BOOK 10
#define MAX_MEMBER 10

enum command {
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

typedef struct book {
    int id;
    char name[30];
} BOOK;

typedef struct member {
    int id;
    char name[30];
} MEMBER;

typedef struct item {
    int book_id;
    int member_id;
} ITEM;

BOOK books[MAX_BOOK];
MEMBER members[MAX_MEMBER];
ITEM manage_list[MAX_BOOK];

int borrow_book(int book_id, int member_id) {
    for (int i = 0; i < MAX_BOOK; i += 1) {
        if (manage_list[i].book_id == book_id) {
            return 0;
        }
    }
    for (int i = 0; i < MAX_BOOK; i += 1) {
        if (manage_list[i].book_id == -1) {
            manage_list[i].book_id = book_id;
            manage_list[i].member_id = member_id;
            return 1;
        }
    }
    return 0;
}

BOOK* find_book(int book_id) {
    for (int i = 0; i < MAX_BOOK; i += 1) {
        if (books[i].id == book_id) {
            return &books[i];
        }
    }
    return NULL;
}

MEMBER* find_member(int member_id) {
    for (int i = 0; i < MAX_MEMBER; i += 1) {
        if (members[i].id == member_id) {
            return &members[i];
        }
    }
    return NULL;
}

void load_books() {
    FILE* file = fopen("book.txt", "r");
    if (file != NULL) {
        int book_id;
        char book_name[30];
        for (int i = 0; i < MAX_BOOK; i += 1) {
            fscanf(file, "%d %s", &book_id, &book_name);
            if (!feof(file)) {
                books[i].id = book_id;
                strcpy(books[i].name, book_name);
            } else {
                books[i].id = -1;
                strcpy(books[i].name, "");
            }
        }
        fclose(file);
    }
}

void load_manage_list() {
    FILE* file = fopen("manage.txt", "r");
    if (file != NULL) {
        int book_id;
        int member_id;
        for (int i = 0; i < MAX_BOOK; i += 1) {
            fscanf(file, "%d %d", &book_id, &member_id);
            if (!feof(file)) {
                manage_list[i].book_id = book_id;
                manage_list[i].member_id = member_id;
            } else {
                manage_list[i].book_id = -1;
                manage_list[i].member_id = -1;
            }
        }
        fclose(file);
    }
}

void load_members() {
    FILE* file = fopen("member.txt", "r");
    if (file != NULL) {
        int member_id;
        char member_name[30];
        for (int i = 0; i < MAX_MEMBER; i += 1) {
            fscanf(file, "%d %s", &member_id, &member_name);
            if (!feof(file)) {
                members[i].id = member_id;
                strcpy(members[i].name, member_name);
            } else {
                members[i].id = -1;
                strcpy(members[i].name, "");
            }
        }
        fclose(file);
    }
}

void print_book(BOOK* book) {
    printf("Book { ID: %d , Name: %s }\n", book->id, book->name);
}

void print_books() {
    for (int i = 0; i < MAX_BOOK; i += 1) {
        if (books[i].id != -1) {
            print_book(&books[i]);
        }
    }
}

void print_commands() {
    printf("<Command>\n1. show a book\n2. show all books\n3. insert a book\n4. remove a book\n5. change a book\n6. borrow a book\n7. return a book\n8. show a member\n9. show all members\n10. insert a member\n11. remove a member\n12. change a member\n13. quit\n");
}

void print_member(MEMBER* member) {
    printf("Member { ID: %d , Name: %s }\n", member->id, member->name);
}

void print_members() {
    for (int i = 0; i < MAX_MEMBER; i += 1) {
        if (members[i].id != -1) {
            print_member(&members[i]);
        }
    }
}

int remove_book(int book_id) {
    for (int i = 0; i < MAX_BOOK; i += 1) {
        if (books[i].id == book_id) {
            books[i].id = -1;
            strcpy(books[i].name, "");
            return 1;
        }
    }
    return 0;
}

int remove_member(int member_id) {
    for (int i = 0; i < MAX_MEMBER; i += 1) {
        if (members[i].id == member_id) {
            members[i].id = -1;
            strcpy(members[i].name, "");
            return 1;
        }
    }
    return 0;
}

int return_book(int book_id) {
    for (int i = 0; i < MAX_BOOK; i += 1) {
        if (manage_list[i].book_id == book_id) {
            manage_list[i].book_id = -1;
            manage_list[i].member_id = -1;
            return 1;
        }
    }
    return 0;
}

void save_books() {
    FILE* file = fopen("book.txt", "w");
    if (file != NULL) {
        for (int i = 0; i < MAX_BOOK; i += 1) {
            if (books[i].id != -1) {
                fprintf(file, "%d %s\n", books[i].id, books[i].name);
            }
        }
        fclose(file);
    }
}

void save_manage_list() {
    FILE* file = fopen("manage.txt", "w");
    if (file != NULL) {
        for (int i = 0; i < MAX_BOOK; i += 1) {
            if (manage_list[i].book_id != -1) {
                fprintf(file, "%d %d\n", manage_list[i].book_id, manage_list[i].member_id);
            }
        }
        fclose(file);
    }
}

void save_members() {
    FILE* file = fopen("member.txt", "w");
    if (file != NULL) {
        for (int i = 0; i < MAX_MEMBER; i += 1) {
            if (members[i].id != -1) {
                fprintf(file, "%d %s\n", members[i].id, members[i].name);
            }
        }
        fclose(file);
    }
}

int scan_book_id() {
    int book_id;
    printf("Book ID: ");
    scanf("%d", &book_id);
    return book_id;
}

char* scan_book_name() {
    char book_name[30];
    printf("Book Name: ");
    scanf("%s", &book_name);
    return book_name;
}

int scan_command() {
    int command;
    printf("Command: ");
    scanf("%d", &command);
    return command;
}

int scan_member_id() {
    int member_id;
    printf("Member ID: ");
    scanf("%d", &member_id);
    return member_id;
}

char* scan_member_name() {
    char member_name[30];
    printf("Member Name: ");
    scanf("%s", &member_name);
    return member_name;
}

int main() {
    load_books();
    load_members();
    load_manage_list();
    BOOK* book_ptr;
    MEMBER* member_ptr;
    while (1) {
        print_commands();
        switch (scan_command()) {
        case SHOW_BOOK:
            if (book_ptr = find_book(scan_book_id())) {
                print_book(book_ptr);
            } else {
                printf("Error: Cannot find the book.\n");
            }
            break;
        case SHOW_BOOKS:
            print_books();
            break;
        case INSERT_BOOK:
            for (int i = 0; i < MAX_MEMBER; i += 1) {
                if (books[i].id == -1) {
                    books[i].id = scan_book_id();
                    strcpy(books[i].name, scan_book_name());
                    printf("Inserted.\n");
                    break;
                }
            }
            save_books();
            break;
        case REMOVE_BOOK:
            if (remove_book(scan_book_id())) {
                printf("Removed.\n");
                save_books();
            } else {
                printf("Error: Cannot find the book.\n");
            }
            break;
        case CHANGE_BOOK:
            printf("Original ");
            if (book_ptr = find_book(scan_book_id())) {
                printf("Replaced ");
                book_ptr->id = scan_book_id();
                printf("Replaced ");
                strcpy(book_ptr->name, scan_book_name());
                printf("Replaced.\n");
                save_books();
            } else {
                printf("Error: Cannot find the book.\n");
            }
            break;
        case BORROW_BOOK:
            if (book_ptr = find_book(scan_book_id())) {
                if (member_ptr = find_member(scan_member_id())) {
                    if (borrow_book(book_ptr->id, member_ptr->id)) {
                        printf("Borrowed.\n");
                        save_manage_list();
                    } else {
                        printf("Error: Cannot borrow the book.\n");
                    }
                } else {
                    printf("Error: Cannot find the member.\n");
                }
            } else {
                printf("Error: Cannot find the book.\n");
            }
            break;
        case RETURN_BOOK:
            if (book_ptr = find_book(scan_book_id())) {
                if (return_book(book_ptr->id)) {
                    printf("Returned.\n");
                    save_manage_list();
                } else {
                    printf("Error: Cannot return the book.\n");
                }
            } else {
                printf("Error: Cannot find the book.\n");
            }
            break;
        case SHOW_MEMBER:
            if (member_ptr = find_member(scan_member_id())) {
                print_member(member_ptr);
            } else {
                printf("Error: Cannot find the book.\n");
            }
            break;
        case SHOW_MEMBERS:
            print_members();
            break;
        case INSERT_MEMBER:
            for (int i = 0; i < MAX_MEMBER; i += 1) {
                if (members[i].id == -1) {
                    members[i].id = scan_member_id();
                    strcpy(members[i].name, scan_member_name());
                    printf("Inserted.\n");
                    break;
                }
            }
            save_members();
            break;
        case REMOVE_MEMBER:
            if (remove_member(scan_member_id())) {
                printf("Removed.\n");
                save_members();
            } else {
                printf("Error: Cannot find the member.\n");
            }
            break;
        case CHANGE_MEMBER:
            printf("Original ");
            if (member_ptr = find_member(scan_member_id())) {
                printf("Replaced ");
                member_ptr->id = scan_member_id();
                printf("Replaced ");
                strcpy(member_ptr->name, scan_member_name());
                printf("Replaced.\n");
                save_members();
            } else {
                printf("Error: Cannot find the member.\n");
            }
            break;
        case QUIT:
            return 0;
        }
    }
    return 0;
}
