#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
Node *first_g;
Node* Insert(Node *head,int data){
	while(head->next!=NULL){
		head=head->next;
	}
	cout<<<<data<<"-->";
}
int main()
{
Node *currentNode=new Node();
currentNode->data=2;
currentNode->next=NULL;
first_g=currentNode;
Insert(currentNode,currentNode->data);
return 0;
}
