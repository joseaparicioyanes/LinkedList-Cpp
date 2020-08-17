#include<iostream>
using namespace std;



class LinkedList{
private:
	typedef struct Node{
		int data;
		Node *next;
	}*nodePtr;

	nodePtr head;

public:
	LinkedList(){
		head = NULL;
	}

	void insert(int data){
		nodePtr node = new Node;
		node->next = NULL;

		node->data = data;

		if (head != NULL){
			nodePtr n = head;
			while (n->next != NULL){
				n = n->next;
			}
			n->next = node;
		}
		else if (head == NULL){
			head = node;
		}
	}

	void show(){
		if (head != NULL){
			nodePtr n = head;
			while (n->next != NULL){
				cout << n->data << endl;
				n = n->next;
			}
			cout << n->data << endl;
		}
		else if (head == NULL){
			cout << "Empty List!";
		}
	}

	int deleteNode(int data){
		nodePtr currNode = head;
		nodePtr tempNode = NULL;
		nodePtr delNode = NULL;

		if (head == NULL)
			return-1;
		if (head->data == data){
			if (head->next == NULL){
				head=NULL;
			}
			else{
				head = head->next;
			}
		}
		else{

			while (currNode != NULL && currNode->data != data){
				tempNode = currNode;
				currNode = currNode->next;
			}

			if (currNode == NULL){
				return -1;
			}
			else{
				delNode = currNode;
				currNode = currNode->next;
				tempNode->next = currNode;
				delete[] delNode;
			}
		}

		return 0;
	}

	void deleteAll(int data){
		while (deleteNode(data) == 0);
	}

};