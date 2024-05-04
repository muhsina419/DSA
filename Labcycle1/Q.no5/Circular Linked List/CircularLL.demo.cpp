#include"CircularLL.cpp"
#include <iostream>

int main() {
    LinkedList <int> dll;
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
                dll.insert_at_beginning(data);
                break;
            case 'b':
                cout << "Enter data to insert: ";
                cin >> data;
                dll.insert_at_end(data);
                break;
            case 'c':
                cout << "Enter position: ";
                cin >> position;
                cout << "Enter data to insert: ";
                cin >> data;
                dll.insert_at_pos(position, data);
                break;
            case 'd':
                dll.delete_from_front();
                break;
            case 'e':
                dll.delete_from_end();
                break;
            case 'f':
                cout << "Enter position: ";
                cin >> position;
                dll.delete_from_pos(position);
                break;
            case 'g':
                dll.display();
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
