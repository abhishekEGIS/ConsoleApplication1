
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
Node *InsertAtPosition(Node *head, int data,int position);

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



Node *InsertAtPosition(Node *head, int data,int position)
{
	Node *temp = head;
	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;

	if (temp == NULL) { return newNode; }
	
	if ((temp->next) == NULL && position==0) { 
		newNode->next = temp;
		head = newNode;
		return head; }

	if ((temp->next) == NULL && position == 1) {
		temp->next = newNode;
		head = temp;
		return head;
	}

}
