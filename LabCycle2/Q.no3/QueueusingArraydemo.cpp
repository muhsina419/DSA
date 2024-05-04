#include "QueueUsingArray.cpp"

int main(){
	Queue<int>myqueue;
	char choice;
	int value;
	
	do{
		cout<<"\n  MENU: \n";
		cout<<"  a. Enqueue \n";
		cout<<"  b. Dequeue \n";
		cout<<"  c. Display \n";
		cout<<"  d. Exit \n";
		
		cout<<"  Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 'a':
				cout<<"  Enter the value that wants to insert into the queue : ";
				cin>>value;
				myqueue.enqueue(value);
				cout<<"  Inserts "<<value<<"  into the queue. \n";
				break;
			case 'b':
				cout<<"  Removes : "<<myqueue.dequeue()<<endl;
				break;
			case 'c':
				cout<<"  Display : ";
				myqueue.display();
			case 'd' :
				cout<<"  Exiting program. \n";
				break;
			default:
				cout<<"  Invalid choice! Please choose a valid option. "<<endl;
		}
	}
	while(choice != 'd');
	
	return 0;
}


