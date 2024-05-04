#include "StackUsingLL.cpp"

int main(){
	Stack mystack;
	char choice;
	int value;
	
	do{
		cout<<"\n  MENU: \n";
		cout<<"  a. Push \n";
		cout<<"  b. Pop \n";
		cout<<"  c. isEmpty \n";
		cout<<"  d. Display \n";
		cout<<"  e. Exit \n";
		
		cout<<"  Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 'a':
				cout<<"  Enter a element that wants to push : ";
				cin>>value;
				mystack.push(value);
				break;
			case 'b':
				cout<<"  Pop : "<<mystack.pop()<<endl;
				break;
			case 'c':
				cout<<"  Is stack empty? : "<< (mystack.isEmpty() ? "Yes" : "No")<<endl;
				break;
			case 'd':
				mystack.display();
				break;
			case 'e':
					cout<<"  Exiting program. \n";
				break;
			default:
				cout<<"  Invalid choice! Please choose a valid option. "<<endl;
		}
	}
	while(choice != 'e');
	
	return 0;
}

