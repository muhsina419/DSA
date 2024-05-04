#include "DequeUsingArray.cpp"

int main(){
	char choice;
	int value;
	
	Deque<int>mydeque;
	cout<<"\n  A Double-Ended Queue (DEQUEUE) using array  created with no elements. "<<endl;
	
	do{
		cout<<"\n  MENU: \n";
		cout<<"  a. Insert  elements to the Front of the queue \n";
		cout<<"  b. Insert elements to the Rear of the queue \n";
		cout<<"  c. Delete elements from the Front of the queue \n";
		cout<<"  d. Delete elements from the Rear of the queue \n";
		cout<<"  e. Display the queue \n";
		cout<<"  f. Exit \n";
		
		cout<<"  Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 'a':
				cout<<"  Enter the value that wants to insert to Front of the queue : ";
				cin>>value;
				mydeque.enqueue_front(value);
				cout<<"  Inserts "<<value<<"  to Front of queue. \n";
				break;
				
			case 'b':
				cout<<"  Enter the value that wants to insert to Rear of the queue : ";
				cin>>value;
				mydeque.enqueue_rear(value);
				cout<<"  Inserts "<<value<<"  to Rear of the queue. \n";
				break;
				
			case 'c':
				cout<<"  Deletes "<<mydeque.dequeue_front()<<" from Front of the queue"<<endl;
				break;
				
			case 'd':
				cout<<"  Deletes "<<mydeque.dequeue_rear()<<" from Rear of the queue"<<endl;
				break;
				
			case 'e':
				cout<<"  Display the queue : ";
				mydeque.display();
				break;
			case 'f' :
				cout<<"  Exiting program. \n";
				break;
			default:
				cout<<"  Invalid choice! Please choose a valid option. "<<endl;
		}
	}
	
	while(choice != 'f');
	
	return 0;
	
}
