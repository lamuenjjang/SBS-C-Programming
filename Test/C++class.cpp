#include <iostream>
#include <stdlib.h>
using namespace std;



struct Node 
{
	int data;
	Node* next;
};



int main() {
	// ���� ����Ʈ


	// 1. �ܹ��� ���� ����Ʈ
	Node* Head = NULL;
	Node* node1 = new Node;
	Node* node2 = new Node;
	Node* node3 = new Node;
	Head = node1;
	
	Head->next = node2;
	Head->next->next = node3;
	Head->next->next->next = NULL;
	node1->data = 10;
	node2->data = 20;
	node3->data = 30;

	cout << Head->data << endl;
	cout << Head->next->data << endl;
	cout << Head->next->next->data << endl;

	// 2. ���� ���� ����Ʈ
	
	// 3. ������ ���� ����Ʈ
	
	return 0;
}