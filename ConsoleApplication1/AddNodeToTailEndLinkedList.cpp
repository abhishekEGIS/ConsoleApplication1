
#include "stdafx.h";
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <new>  


using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

Node *InsertAtTail(Node *head, int data);
Node *InsertAtHead(Node *head, int data);
Node *InsertAtPosition(Node *head, int data, int position);
Node* Delete(Node *head, int position);
void PrintAllElements(Node *head);

int main()
{

	Node *newNode1 = new Node;
	Node *newNode2 = new Node;
	Node *newNode3 = new Node;
	Node *newNode4 = new Node;

	Node *head = newNode1;
	Node *temp = newNode1;

	newNode1->data = 3;
	newNode1->next = newNode2;

	newNode2->data = 4;
	newNode2->next = newNode3;

	newNode3->data = 1;
	newNode3->next = newNode4;

	newNode4->data = 6;
	newNode4->next = NULL;

	PrintAllElements(head);
	
	InsertAtPosition(head, 17, 2);
	
	PrintAllElements(head);
	
	Delete(head, 3);
	
	PrintAllElements(head);

	return 0;
}

void PrintAllElements(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl << endl;
}

Node* DeleteAtLocation(Node *head, int position)
{
	Node *temp = head;
	Node *tempNext;

	if (temp == NULL) {
		return head;
	}

	while (position > 1) {
		temp = temp->next;
		position--;
	}


	tempNext = temp->next;


	temp->next = tempNext->next;

	return head;
}


Node *InsertAtTail(Node *head, int data)
{
	Node *temp = head;
	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;

	if (temp == NULL) { return newNode; }
	while ((temp->next)!=NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	return head;
}

Node *InsertAtHead(Node *head, int data)
{
Node *temp = head;
Node *newNode = new Node;
newNode->data = data;
newNode->next = NULL;
if (temp == NULL) { return newNode; }
newNode->next = temp;
head = newNode;
return head;
}



Node *InsertAtPosition(Node *head, int data, int position)
{
	Node *temp = head;
	Node *tempNext;
	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;

	if (temp == NULL) {
		head = newNode;
		return head;
	}

	while (position > 1) {
		temp = temp->next;
		position--;
	}

	if (temp->next == NULL) { // this means it has reached last node
		temp->next = newNode;
		return head;
	}

	tempNext = temp->next;

	temp->next = newNode;
	newNode->next = tempNext;

	return head;
}
