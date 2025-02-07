#include <iostream>

#define MAX_SIZE 100

class Queue {
private:
    int items[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return rear < front;
    }

    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }
        items[++rear] = value;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1;
        }
        return items[front++];
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot peek." << std::endl;
            return -1;
        }
        return items[front];
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front element: " << queue.peek() << std::endl;
    std::cout << "Dequeuing: " << queue.dequeue() << std::endl;
    std::cout << "Front element after dequeue: " << queue.peek() << std::endl;

    return 0;
}
