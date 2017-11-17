#include <iostream>
using namespace std;

class Node {
    public:
	    int data;
	    Node *next;
};

class LinkedList {
    private:
	    Node *head;
	    Node *tail;
    
    public:
	    LinkedList() {
		    head = NULL;
		    tail = NULL;
    }

	void addNode(int data) {
	    Node *temp = new Node;
		temp->data = data;
		temp->next = NULL;

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			//tail->next == NULL;
			tail->next = temp;
			tail = temp;
		}
	}

	void displayList() {
		if (head == NULL)
			cout << "The List is empty!" << endl;
		else {
			Node *temp = head;
			while(temp != NULL) {
			    cout << temp->data;
			    temp = temp->next;
			}
		}
	}
};

int main()
{

}
