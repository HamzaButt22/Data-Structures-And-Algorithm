#include<iostream>
using namespace std;

class Node {
    public:
       int data;
       Node* next;
       Node* prev;

       Node(int data){
          this->data=data;
          this->next=NULL;
          this->prev=NULL;
       }
};

class doubleLink {
    Node* head;
    Node* tail;

    public:
         doubleLink(){
             head=NULL;
             tail=NULL;
         }
    void insertionstart(int value);
    void insertionend(int value);
    void display();
};

void doubleLink::insertionstart(int value){
       Node* newNode=new Node(value);
       if(!head){
       head=tail=newNode;
       } else {
       newNode->next=head;
       head->prev=newNode;
       head=newNode;
       }
};

void doubleLink::insertionend(int value){
       Node* newNode=new Node(value);
       if(!tail){
       head=tail=newNode;
       } else {
       tail->next=newNode;
       newNode->prev=tail;
       tail=newNode;
       }
};

void doubleLink::display(){
       Node* current=head;
       while(current){
       cout<<current->data<<" ";
       current=current->next;
       }
       cout<<endl;
}

int main(){
   doubleLink Link;

   Link.insertionstart(12);
   Link.insertionend(45);
   Link.display();

   return 0;
}
