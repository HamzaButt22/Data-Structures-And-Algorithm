#include <iostream>
using namespace std;

#define max 1000

class Queue {
private:
    int front, rear;
    int arr[max];

public:
Queue() {
front = -1;
rear = -1;
    }

    bool enqueue(int value) {
     if (rear >= max - 1) {
     cout << "Queue overflow" << endl;
            return false;
            } else {
            if (front == -1) {
            front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << value << " enqueued into queue." << endl;
            return true;
        }
    }

    bool dequeue() {
    if (front == -1) {
    cout << "Queue underflow" << endl;
            return false;
        } else {
        cout << "Dequeued element is = " << arr[front] << endl;
            front++;
             if (front > rear) {
             front = rear = -1;
            }
            return true;
        }
    }

    bool isEmpty() {
    return front == -1;
    }

    void display() {
    if (isEmpty()) {
    cout << "Queue is empty" << endl;
    } else {
    cout << "Queue elements are: ";
    for (int i = front; i <= rear; i++) {
    cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.display();

    if (q.isEmpty()) {
    cout << "Queue is empty." << endl;
    } else {
    cout << "Queue is not empty." << endl;
    }

    return 0;
}
