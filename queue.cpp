#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5];      // fixed-size array
    int front;       // index of front element
    int rear;        // index of last element
    int size;        // maximum size of queue

public:
    Queue() {
        front = -1;
        rear = -1;
        size = 5;
    }

    // Enqueue operation
    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue is Full!" << endl;
            return;
        }

        if (front == -1) front = 0;  // first element inserted
        rear++;
        arr[rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << arr[front] << " removed from queue." << endl;
        front++;
    }

    // Display elements
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); 
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    q.display();
    q.enqueue(70);

    return 0;
}