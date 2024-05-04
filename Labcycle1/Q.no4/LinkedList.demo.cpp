#include "LinkedList.cpp"
#include<iostream>
using namespace std;

int main() {
    LinkedList <int> list;
    char choice;
    int value, position;
    do {
        std::cout << "Menu:\n";
        std::cout << "a. Insert at Beginning\n";
        std::cout << "b. Insert at End\n";
        std::cout << "c. Insert at a specified Position\n";
        std::cout << "d. Delete from Beginning\n";
        std::cout << "e. Delete from End\n";
        std::cout << "f. Delete from a specified Position\n";
        std::cout << "g. Display\n";
        std::cout << "h. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 'a':
                std::cout << "Enter value to insert at beginning: ";
                std::cin >> value;
                list.insert_at_beginning(value);
                break;
            case 'b':
                std::cout << "Enter value to insert at end: ";
                std::cin >> value;
                list.insert_at_end(value);
                break;
            case 'c':
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                std::cout << "Enter position to insert at: ";
                std::cin >> position;
                list.insert_at_position(value, position);
                break;
            case 'd':
                list.delete_from_beginning();
                break;
            case 'e':
                list.delete_from_end();
                break;
            case 'f':
                std::cout << "Enter position to delete from: ";
                std::cin >> position;
                list.delete_from_specified_position(position);
                break;
            case 'g':
                std::cout << "Linked List: ";
                list.display();
                break;
            case 'h':
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'h');

    return 0;
}
