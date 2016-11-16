#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct dataHolder{                                                                          // Structure for holding the values
	int data;
};
struct Node{                                                                               // Structue used for pointing all links
	Node *head;                                                                            // Pointer pointing to the next attached link
	Node *tail;                                                                            // Pointer pointing to the previous attached link
	dataHolder *dataPointer;                                                               // Pointer pointing to the value represented by the reg
};

Node *first_g,*last;                                             // Global Pointers


void addTheList(Node *addition) {
	Node *currentPointer;
	currentPointer=first_g;                               // Always it will save the head of the link
        while(currentPointer->head)
		{
			currentPointer=currentPointer->head;         // while loop will find out the second last reg and will be stored in currentPointer
		}
		currentPointer->head=addition;                   // New addition will be the tail in the list
		last=addition;
		last->tail=currentPointer;                       // Tail of the last reg will be connected to second last reg
}

void Print(char *fileName, int lineNumber){
	printf("Being called from %s  %d",fileName,lineNumber);
	cout<<endl;
	Node *printer,*reverseOrder;
	printer=first_g;

	do {                                                  // Printing List from head to tail
		cout<<"The element is : "<<(printer->dataPointer->data)<<endl;
		printer=printer->head;
	}
	while(printer->head);
	cout<<"The element is : "<<(printer->dataPointer->data)<<endl;	
	
	cout<<endl<<endl;
	
	cout<<"Lets print numbers in reverse order."<<endl;
	reverseOrder=last;
	do{                                                   // Printing List from tail to head
		cout<<"The element is : "<<(reverseOrder->dataPointer->data)<<endl;
		reverseOrder=reverseOrder->tail;
	}
	while(reverseOrder->tail);
	cout<<"The element is : "<<(reverseOrder->dataPointer->data)<<endl;
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
			if(currentHeader==last && currentHeader->dataPointer->data<=input->dataPointer->data){
				additionOfNewtail(input,currentHeader);
				return;
			}
		}while(currentHeader->dataPointer->data < input->dataPointer->data);
		previousPointer->head=input;
		input->head=currentHeader;
		currentHeader->tail=input;
		input->tail=previousPointer;
	}
void insertTheValue(){
	Node *insertionNode=new Node;
	insertionNode->dataPointer=new dataHolder;
	int temporary;
	cout<<"Enter the value you need to enter : ";
	cin>>temporary;
	insertionNode->dataPointer->data=temporary;
	Node *firstValue;
	firstValue=first_g;
	if(insertionNode->dataPointer->data <= firstValue->dataPointer->data){
		additionOfHead(insertionNode,firstValue);
	}
	else{
		insertionInTheMiddle(insertionNode,firstValue);
	}

}
void searchTheNumber(int numberToBeRemoved){
	Node *currentRemovalNode;
	currentRemovalNode=first_g;
	while(currentRemovalNode->head && currentRemovalNode->dataPointer->data!=numberToBeRemoved){
		currentRemovalNode=currentRemovalNode->head;
	}
	if(currentRemovalNode->dataPointer->data==numberToBeRemoved){
		Node *previousLink,*nextLink;
		if(currentRemovalNode==first_g){
			nextLink=currentRemovalNode->head;
			nextLink->tail=NULL;
			delete currentRemovalNode->dataPointer;
		    delete currentRemovalNode;
		    first_g=nextLink;
		}
		else if(currentRemovalNode==last){
			previousLink=currentRemovalNode->tail;
			previousLink->head=NULL;
			delete currentRemovalNode->dataPointer;
		    delete currentRemovalNode;
		    last=previousLink;
		}
		else{
		previousLink=currentRemovalNode->tail;
		nextLink=currentRemovalNode->head;
		previousLink->head=nextLink;
		nextLink->tail=previousLink;
		delete currentRemovalNode->dataPointer;
		delete currentRemovalNode;
	}
	}
	else if(currentRemovalNode==last){
		cout<<"Number is not in the list"<<endl;
	}
}

int main(){
	int numberOfReg,numberOfInserts,numberOfDelets,noToBeDeleted;
	cout<<"How many registers you want to specify in your list ?"<<endl;
	cin >> numberOfReg;                                                  // Number of Links user wants to attach
	Node *reg;
	for(int count=1;count<=numberOfReg;count++){
		reg=new Node;
		reg->dataPointer = new dataHolder;
		
		if(count==1){                                 // On a first iteration, first and last register will be the same
            reg->dataPointer->data=count*10;
		    reg->head=NULL;
			reg->tail=NULL;
			first_g=reg;
			last=reg;

		}		
		else{
            reg->dataPointer->data=count*10;;
			reg->head=NULL;
			reg->tail=NULL;
			addTheList(reg);
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
    cout<<"How many times you need to delete the entries in your link?"<<endl;
    cin>>numberOfDelets;
    for(int delCount=0;delCount<numberOfDelets;delCount++){
    	cout<<"Enter the number to be deleted : ";
    	cin>>noToBeDeleted;
    	searchTheNumber(noToBeDeleted);
    	Print(__FILE__, __LINE__);
	}

    return 0;
}
