/*
new is needed as import file for new key word in c++
a function has to be declared once before defining it later 
Terminating condition of linked list is when the node reaches null
and NOT when node->next reaches null

*/

#include "stdafx.h";
#include <iostream>
#include <string>
#include <sstream>
#include <new>  
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

void Print(Node *head);

int LinkedList()
{
	Node *head = new Node;
	head->data = 10;
	head->next = NULL;
	Print(head);

	return 0;
}

void Print(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << endl;
		head = head->next;
	}
}