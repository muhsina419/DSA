#include "CircularDoublyLL.cpp"
#include <iostream>
using namespace std;

int main() {
    CircularDoublyLinkedList < int> cdll;
    char choice;
    int data, position;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "a. Insert at Beginning" << endl;
        cout << "b. Insert at End" << endl;
        cout << "c. Insert at a specified Position" << endl;
        cout << "d. Delete from Beginning" << endl;
        cout << "e. Delete from End" << endl;
        cout << "f. Delete from a specified Position" << endl;
        cout << "g. Display" << endl;
        cout << "h. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter data to insert: ";
                cin >> data;
                cdll.insert_at_beginning(data);
                break;
            case 'b':
                cout << "Enter data to insert: ";
                cin >> data;
                cdll.insert_at_end(data);
                break;
            case 'c':
                cout << "Enter position: ";
                cin >> position;
                cout << "Enter data to insert: ";
                cin >> data;
                cdll.insert_at_position(position, data);
                break;
            case 'd':
                cdll.delete_from_beginning();
                break;
            case 'e':
                cdll.delete_from_end();
                break;
            case 'f':
                cout << "Enter position: ";
                cin >> position;
                cdll.delete_from_position(position);
                break;
            case 'g':
                cdll.display();
                break;
            case 'h':
            	cout<<"Exiting the Program. Thank You!!";
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
