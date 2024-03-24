#include"LinearArray.cpp"
int main(){
	Array <int> linearArray;
	char choice;
	int element,position,index,search,result;
	int key;
	do {
		cout << "\nMenu:\n";
        cout << "a. Insertion at Beginning\n";
        cout << "b. Insertion at End\n";
        cout << "c. Insertion at a specified position\n";
        cout << "d. Deletion from Beginning\n";
        cout << "e. Deletion from End\n";
        cout << "f. Deletion from a specified position\n";
        cout << "g. Find the index of a given element\n";
        cout << "h. Display\n";
        cout << "i. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
        case 'a':
            cout << "Enter element to insert at beginning :";
            cin >> element;
            linearArray.insert_at_beginning(element);
            break;
        case 'b':
            cout << "Enter element to insert at end : ";
            cin >> element;
            linearArray.insert_at_end(element);
            break;
        case 'c':
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position to insert at: ";
            cin >> position;
            linearArray.insert_at_index(element, position);
            break;
        case 'd':
            cout << "Deleted element from beginning ";
            linearArray.delete_at_beginning();
            break;
        case 'e':
            cout << "Deleted element from end";
            linearArray.delete_at_end();
            break;
        case 'f':
            cout << "Enter the position to delete from : ";
            cin >> position;
            linearArray.delete_at_index(position);
            break;
        case 'g':
            cout << "Enter the Element to find Index :";
            cin >> element;
            index = linearArray.find_index(element);
            if (index != -1) {
                cout << "Index of Element  " << element << " is " << index << endl;
            }
            else {
                cout << "Element not found in array " << endl;
            }
            break;
        case 'h':
            linearArray.display();
            break;
        case 'i':
        	cout<<"Exiting Program.\n";
        	break;
        default:
        	cout<<"Invalid choice ! Please enter a valid option. "<<endl;
		}
	}
	while(choice != 'i');
	
	return 0;
}
