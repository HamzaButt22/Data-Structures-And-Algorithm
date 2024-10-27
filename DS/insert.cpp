#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;
  Node(int data)
	{
	this->data = data;
	this->next = NULL;
	this->prev = NULL;
	}

};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList()
	{
	    head = tail = NULL;
	}

    void insertionStart(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertionEnd(int value) {
        Node* newNode = new Node(value);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtPosition(int value, int position) {
        if (position < 1) {
            cout << "Position Invalid." <<endl;
            return;
        }
        Node* newNode = new Node(value);
        if (position == 1) {
            insertionStart(value);
        } else {
            Node* current = head;
            int currentPosition = 1;

            while (current && currentPosition < position - 1) {
                current = current->next;
                currentPosition++;
            }
            if (!current) {
                cout << "Invalid Position." <<endl;
                delete newNode;
                return;
            }
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next) {
                current->next->prev = newNode;
            }
            current->next = newNode;
        }
    }

    void deleteStart() {
        if (!head) {
            cout << "List is empty." <<endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
    }

    void deleteEnd() {
        if (!tail) {
            cout << "List is empty." <<endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if (tail) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout <<endl;
    }
    int count(){
    	int n=0;
    	Node* front=head;
    		if (!head) {
            cout << "List is empty." <<endl;
            exit;
        }else{

        	while(front){
        		front =front->next;
        		n++;
			}
		}
	return n;
	}

    void insertm(int data){
    	int half =count()/2;
    	Node* position=head;
    	if (!head) {
            cout << "List is empty." <<endl;
            return;
        }
        else{

        	for(int i=1;i<half-1;i++){
        		position=position->next;
			}
			Node* newnode=new Node(data);
		  newnode->next = position->next;
            newnode->prev = position;
            if (position->next) {
                position->next->prev = newnode;
            }
            position->next = newnode;
		}
	}

    void displayreverseList() {
        Node* reverse = tail;
        while (reverse) {
            cout << reverse->data << " ";
            reverse = reverse->prev;
        }
        cout <<endl;
    }
};

int main() {
    DoublyLinkedList D;

    D.insertionStart(9);
    D.insertionEnd(11);
    D.insertionStart(5);
    D.insertAtPosition(7, 2);
    D.display();
    cout<<"Reverse print of Doubly LinkList"<<endl;
    D.displayreverseList();
    D.deleteStart();
    D.deleteEnd();
    D.display();
    D.insertionEnd(15);
    D.insertAtPosition(14, 2);
    D.display();
    int count=D.count();
    cout<<"Size of list "<<count<<endl;
    D.insertm(1);
    D.display();
    D.insertm(2);
    D.display();
    D.insertm(3);
    D.display();
    D.insertm(4);
    D.display();
    D.display();
    return 0;
}