#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct dataHolder{
	int data;
};
struct Node{
	Node *head;
	Node *tail;
	dataHolder *dataPointer;
};

Node *first_g,*last;
int main(){
	dataHolder *m=new dataHolder;
	Node *n=new Node;
	n->head=NULL;
	n->tail=NULL;
	n->dataPointer->data=10;
	cout<<n->dataPointer->data<<endl;
	return 0;
}
