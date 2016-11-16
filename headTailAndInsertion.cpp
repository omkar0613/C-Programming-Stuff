#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
	Node *head;
	Node *tail;
	int data;
};

Node *first_g,*last;

void addTheList(Node *addition) {
	Node *currentPointer;
	currentPointer=first_g;
        while(currentPointer->head)
		{
			currentPointer=currentPointer->head;
		}
		currentPointer->head=addition;
		last=addition;
		last->tail=currentPointer;
}


void Print(char *fileName, int lineNumber){
	printf("Being called from %s  %d",fileName,lineNumber);
	cout<<endl;
	Node *printer,*reverseOrder;
	printer=first_g;

	do {
		cout<<"The element is : "<<(printer->data)<<endl;
		printer=printer->head;
	}
	while(printer->head);
	cout<<"The element is : "<<(printer->data)<<endl;	
	
	cout<<endl<<endl;
	
	cout<<"Lets print numbers in reverse order."<<endl;
	reverseOrder=last;
	do{
		cout<<"The element is : "<<(reverseOrder->data)<<endl;
		reverseOrder=reverseOrder->tail;
	}
	while(reverseOrder->tail);
	cout<<"The element is : "<<(reverseOrder->data)<<endl;
}

    void additionOfHead(Node *input,Node *currentHeader){
    	currentHeader->tail=input;
		   input->head=currentHeader;
		   input->tail=NULL;
	       first_g=input;
	}
	
	void additionOfNewtail(Node *newTail,Node *currentTail){
		currentTail->head=newTail;
		newTail->tail=currentTail;
		newTail->head=NULL;
		last=newTail;
	}
	void insertionInTheMiddle(Node *input,Node *currentHeader){
		Node *previousPointer;
		do{
			previousPointer=currentHeader;  //10
			currentHeader=currentHeader->head; //20
			if(currentHeader==last && currentHeader->data<=input->data){
				additionOfNewtail(input,currentHeader);
				return;
			}
		}while(currentHeader->data < input->data);
		previousPointer->head=input;
		input->head=currentHeader;
		currentHeader->tail=input;
		input->tail=previousPointer;
	}
	
    void insertTheValue(){
	Node *insertionNode=new Node;
	cout<<"Enter the value you need to enter : ";
	cin>>insertionNode->data;
	Node *firstValue;
	firstValue=first_g;
	if(insertionNode->data <= firstValue->data){
		additionOfHead(insertionNode,firstValue);
	}
	else{
		insertionInTheMiddle(insertionNode,firstValue);
	}

}
int main(){
	int numberOfReg,numberOfInserts;
	cout<<"How many registers you want to specify in your list ?"<<endl;
	cin >> numberOfReg;
	Node *n;
	
	for(int count=1;count<=numberOfReg;count++){
		n=new Node;
		if(count==1){
			n->data=count*10;
			n->head=NULL;
			n->tail=NULL;
			first_g=n;
			last=n;
		}		
		else{
			n->data=count*10;
			n->head=NULL;
			n->tail=NULL;
			addTheList(n);
		}
	}	
	
	Print(__FILE__, __LINE__);
	cout<<"How many values you need to enter in a list : ";
	cin>>numberOfInserts;
	for(int iteration=0;iteration<numberOfInserts;iteration++){	
    insertTheValue();
    cout<<"Your linked list after Iteration "<<iteration+1<<endl;
    Print(__FILE__, __LINE__);
}
	return 0;
}
