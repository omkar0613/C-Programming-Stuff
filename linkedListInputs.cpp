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
Node *first,*currentPointer,*printer;
void addTheList(Node *addition){
	currentPointer=first;
        while(currentPointer->head!=NULL)
		{
			currentPointer=currentPointer->head;
		}
		currentPointer->head=addition;
}
void Print(){
	printer=first;
	do{
		cout<<"The element is : "<<(printer->data)<<endl;
		printer=printer->head;
	}
	while(printer->head!=NULL);
	cout<<"The element is : "<<(printer->data)<<endl;	
}

void insertTheValue(){
	Node *insertionNode=new Node;
	cout<<"Enter the value you need to enter"<<endl;
	cin>>insertionNode->data;
	Node *firstValue;
	firstValue=first;
	if(insertionNode->data < firstValue->data){
	       cout<<"Inserted Value : "<<insertionNode->data<<endl;
	       cout<<"First Value : "<<firstValue->data<<endl;
	       first=first->tail;
	       cout<<"New First Value is "<<first->data;
	}

}
int main(){
	int numberOfReg;
	cin >> numberOfReg;
	Node *n;
	for(int count=1;count<=numberOfReg;count++){
	n=new Node;
	if(count==1){
		n->data=count*10;
		n->head=NULL;
		n->tail=NULL;
		first=n;
	}
	else{
		n->data=count*10;
		n->head=NULL;
		n->tail=NULL;
		addTheList(n);
	}
	
}
Print();
insertTheValue();
	return 0;
}
