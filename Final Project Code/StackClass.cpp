#include <iostream>
#include <stdlib.h>  // for exit statement
using namespace std;

class Stack{
	private:
		int str[10];
		int topOfStack;
	public:
		void push(int r){
			if(topOfStack>10)
			cout<<"Stack is full,you can't push the value\n\n";
			str[++topOfStack]=r;
			cout<<"Value Pushed into the Stack is : "<<r<<"\n\n";
		}
		void pop(){
			if(topOfStack<0){
			cout<<"Stack is empty,you cannot pop the value from the stack\n\n";
		}
		else{
			cout<<"The popped out element is : "<<str[topOfStack--]<<"\n\n";
		}
		}
		bool isEmpty(){
			if(topOfStack<0)
			{
			cout<<"Stack Empty : ";
			return true;
		}
		else{
			cout<<"Stack Empty : ";
			return false;
		}
		}
		bool isFull(){
			if(topOfStack>10)
			{
			cout<<"Stack Full : ";
			return true;
		}
		else{
			cout<<"Stack Full : ";
			return false;
		}
		}
	
		Stack(){
			topOfStack=-1;
		}
		~Stack(){} 
};
int main(){
bool empty,full;
	Stack s1;
	int input;
	while(1){
	cout<<"Press 1 for Push Operation \n 2 for Pop Operation \n 3 to check whether stack is Empty \n 4 to check whether stack is full \n 5 to exit\n";
	cin>>input;
	switch(input){
		case 1:
			cout<<"Enter the number you want to push to stack\n";
			cin>>input;
			s1.push(input);
			break;
		case 2:
			s1.pop();
			break;
		case 3:
			empty=s1.isEmpty();
			cout<<empty<<"\n\n";
			break;
		case 4:
			full=s1.isFull();
			cout<<full<<"\n\n";
			break;
			case 5:
				exit(0);
	}
}
return(0);
}
