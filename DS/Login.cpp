#include <iostream>
using namespace std;
class Node {
public:
    int sem,sap;
    string name;
    Node* next;
    Node* prev;
  Node(int sem,int sap,string name)
	{
	this->name=name;
	this->sap=sap;
	this->sem = sem;
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

    void insertionStart(int sem,int sap,string name) {
        Node* newNode = new Node(sem,sap,name);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertionEnd(int sem,int sap,string name) {
        Node* newNode = new Node(sem,sap,name);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtPosition(int sem,int sap,string name, int position) {
        if (position < 1) {
            cout << "Position Invalid." <<endl;
            return;
        }
        Node* newNode = new Node(sem,sap,name);
        if (position == 1) {
            insertionStart(sem,sap,name);
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
        cout << "Semester : " ;
        while (current) {
            cout <<current->sem << " ";
            current = current->next;
        }
        cout <<endl;
        current = head;
        cout << "Sap id   : " ;
        while (current) {
            cout<<current->sap << " ";
            current = current->next;
        }
        cout <<endl;
        current = head;
        cout << "Name     : " ;
        while (current) {
            cout<<current->name << " ";
            current = current->next;
        }
        cout <<endl;
    }
};

int main() {
	DoublyLinkedList D;
	int choice=1;
	string name;
	int sap,sem,pos;
	while(choice>0 && choice<5){
		cout<<"\n 1.Enter Input \n 2.Delete from start \n 3.Delete from end \n 4.Display List \n 0. Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter name"<<endl;
				cin>>name;
				cout<<"Enter sap"<<endl;
				cin>>sap;
				cout<<"Enter semester"<<endl;
				cin>>sem;
				cout<<"Enter position"<<endl;
				cin>>pos;
				D.insertAtPosition(sem,sap,name,pos);
			break;
			case 2:
				D.deleteEnd();
			break;
			case 3:
				D.deleteEnd();
			break;
			case 4:
				D.display();
			break;
			case 0:
                cout<<"\nExiting..."<<endl;
                break;
			default:
				cout<<"\nInvalid Input"<<endl;
			break;
		}
	}

    return 0;
}
