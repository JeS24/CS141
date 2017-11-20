#include <iostream>
using namespace std;


class Node {
    public:
        int data;
        Node *next;
};

class Stack {
    private:
        Node *head, *tail;
    
    public:
        Stack() {
           head = NULL;
           tail = NULL;
        }
        
        void push(int val) {
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
            while (temp!=NULL) {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
        
        void pop() {
            Node *cur, *pre;
            cur = head;
            while (cur->next != NULL) {
                pre = cur;
                cur =  cur->next;
            }
            tail = pre;
            tail->next = NULL;
            delete cur;
        }
};

int main()
{
    int b = 0, size = 0;
    Stack S;
    cout << "Enter the size of the stack: ";
    cin >> size;
    cout << "\nNow, enter the elements on the stack: " << endl;
    for (int i = 0 ; i < size ; i++) {
        cin >> b;
        S.push(b);
    }
    cout << "\nEntered stack: " << endl; S.display();
    cout << "\nPopping once..." << endl << "The modified stack: " << endl; S.pop(); S.display();
}
