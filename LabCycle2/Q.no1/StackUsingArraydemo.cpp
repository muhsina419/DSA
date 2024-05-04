#include "StackUsingArray.cpp"

int main(){
	Stack<int>stack;
	char choice;
	int value;
	do{
		cout<<"\n  MENU: \n";
		cout<<"  a. Push \n";
		cout<<"  b. Pop \n";
		cout<<"  c. isEmpty \n";
		cout<<"  d. Peek \n";
		cout<<"  e. isFull \n";
		cout<<"  f. Display \n";
		cout<<"  g. Exit \n";
		
		cout<<"  Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 'a' :
				cout<<"  Enter a element that wants to push : ";
				cin>>value;
				stack.push(value);
				break;
			case 'b' :
				cout<<"  Pop : "<<stack.pop()<<endl;
				break;
			case 'c' :
				cout<<"  Is stack empty? : "<< (stack.isEmpty() ? "Yes" : "No")<<endl;
				break;
			case 'd' :
				cout<<"  Peek : "<<stack.peek()<<endl;
				break;
			case 'e' :
				cout<<"  Is stack full? : "<<(stack.isFull() ? "Yes" : "No")<<endl;
				break;
			case 'f' :
				cout<<"  Display : "<<endl;
				stack.display();
				break;
			case 'g' :
				cout<<"  Exiting program. \n";
				break;
			default:
				cout<<"  Invalid choice! Please choose a valid option. "<<endl;
		}
	}
	while(choice != 'g');
	return 0;
}

