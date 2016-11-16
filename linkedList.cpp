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
Node *first;
void Print(){
	Node *current;
	current=first;
	cout<<current->data<<endl;
	do{
		current=current->head;
	cout<<current->data<<endl;
}while(current->head!=NULL);
}
int main(){
	Node *firstNode=new Node;
	Node *secondNode=new Node;
	Node *thirdNode=new Node;
	Node *fourthNode=new Node;
	Node *fifthNode=new Node;
	first=firstNode;
	//Value initialization
    firstNode->data=10;
	secondNode->data=20;
	thirdNode->data=30;
	fourthNode->data=40;
	fifthNode->data=50;
//Pointing heads to the next one
	(firstNode->head)=secondNode;
	(secondNode->head)=thirdNode;
	(thirdNode->head)=fourthNode;
    (fourthNode->head)=fifthNode;
	fifthNode->head=NULL;
	//Pointing tails to the previous
    fifthNode->tail=fourthNode;
    fourthNode->tail=thirdNode;
    thirdNode->tail=secondNode;
    secondNode->tail=firstNode;
    firstNode->tail=NULL;
	Print();
	return 0;
}
