#include <iostream>
#include"DequeUsingLL.cpp"
using namespace std;

int main() {
    Dequeue<int> dq;
    int choice, element;

    do {
        cout << "\n1. Insert element at front";
        cout << "\n2. Insert element at rear";
        cout << "\n3. Delete element from front";
        cout << "\n4. Delete element from rear";
        cout << "\n5. Display queue";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert at front: ";
                cin >> element;
                dq.insertFront(element);
                dq.display(cout);
                break;
            case 2:
                cout << "Enter element to insert at rear: ";
                cin >> element;
                dq.insertRear(element);
                dq.display(cout);
                break;
            case 3:
                dq.deleteFront();
                dq.display(cout);
                break;
            case 4:
                dq.deleteRear();
                dq.display(cout);
                break;
            case 5:
                dq.display(cout);
                break;
            
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
