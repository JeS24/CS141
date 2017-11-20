#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

class LinkedList {
    private:
        Node *head, *tail;
    
    public:
        LinkedList() {
            head = NULL;
            tail = NULL;
        }
        
        void addNode(int val) {
            Node *temp = new Node;
            temp->data = val;
            temp->next = NULL;
            if (head == NULL) {
                head = temp;
                tail = temp;
                temp = NULL;
            }
            else {
                tail->next = temp;
                tail = temp;
            }
        }
        
        void display() {
            Node *temp = new Node;
            temp = head;
            while (temp != NULL) {
                cout << temp->data << "\t";
                temp = temp->next;
            }
        }
        
        void insertNode(int pos, int val) {
            Node *pre, *cur, *temp;
            cur = head;
            if (pos == 1) {
                temp->data = val;
                temp->next = head;
                head = temp;
            }
            else {
                for (int i = 1 ; i < pos ; i++) {
                    pre = cur;
                    cur = cur->next;
                }
                temp->data = val;
                pre->next = temp;
                temp->next = cur;
            }
        }

        void deleteNode(int pos)
        {
            Node *pre, *cur;
            cur = head;
            if (pos == 1) {
                head = head->next;
                delete cur;
            }
            else {
                for (int i = 1 ; i < pos ; i++){
                    pre = cur;
                    cur = cur->next;
                }
                pre->next = cur->next;
                if (cur->next == NULL)
                    tail = pre;
            }
        }
};

int main()
{
    int b = 0, size = 0;
    LinkedList M;
    cout << "Enter the size of the Linked List: ";
    cin >> size;
    cout << "\nEnter the data of each node in the list: " << endl;
    for (int j = 0; j < size ; j++) {
        cin >> b;
        M.addNode(b);
    }
    M.display();
}
