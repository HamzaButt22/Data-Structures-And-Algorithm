#include <iostream>
using namespace std;

#define max  1000

class Stack {
private:
    int top;
    int arr[max];

public:
    Stack() {
        top = -1;
    }

    bool push(int value) {
        if (top >= (max - 1)) {
            cout << "Stack overflow" << endl;
            return false;
        } else {
            top++;
            arr[top] = value;
            return true;
        }
    }

    bool pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return false;
        } else {
            cout << "Popped element is = " << arr[top] << endl;
            top--;
            return true;
        }
    }

    bool peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return false;
        } else {
            cout << "Top value is = " << arr[top] << endl;
            return true;
        }
    }

    bool isEmpty() const {
        return top < 0;
    }

    bool isFull() const {
        return top >= (max - 1);
    }
};

int main() {
    Stack s;

    s.push(20);
    s.push(25);
    s.push(30);
    s.push(50);
    
    s.pop();
    s.peek();

    return 0;
}
