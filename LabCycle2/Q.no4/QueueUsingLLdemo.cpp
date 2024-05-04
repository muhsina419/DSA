#include "QueueUsingLL.cpp"

int main(){
	Queue myqueue(5);
	int value;
	char choice;
	
	do{
		
		cout<<"\n  MENU\n";
		cout<<"  a. Insert element to the rear\n";
		cout<<"  b. Delete element from the front\n";
		cout<<"  c. Display the elements of Queue\n";
		cout<<"  d. Exit\n";
		
		cout<<"  Enter your choice :";
		cin>>choice;
		
		switch(choice){
			case 'a':
				cout<<"  Enter the value to insert onto queue :";
				cin>>value;
				if(myqueue.isFull() == 0){
					cout<<"  Insert "<<value<<" to the rear of the Queue.\n";
				}
				myqueue.enqueue(value);
				break;
			case 'b':
				cout<<"  Delete element from the front of the queue "<<myqueue.dequeue()<<endl;
				break;
			case 'c':
				cout<<"  Elements of the queue :";
				myqueue.display();
				break;
			case 'd':
				cout<<"  Exiting program."<<endl;
				break;
			default:
				cout<<"  Invalid choice! Please enter a valid choice."<<endl;
		}
		
	}
	
	while(choice != 'd');
	
	return 0;
	
}


