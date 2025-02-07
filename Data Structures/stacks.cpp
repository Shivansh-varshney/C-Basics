#include <iostream>

using namespace std;

class arrayStack
{
    int capacity;
    int *arr;
    int top;

public:
    arrayStack(int c)
    {
        this->capacity = c;
        this->arr = new int[c];
        this->top = -1;
    }

    void push(int value)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = value;
    }

    int pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow\n";
            return 0;
        }
        int value = this->arr[this->top];
        this->top--;
        return value;
    }

    int showTop()
    {
        if (this->top == -1)
        {
            cout << "Underflow\n";
            return 0;
        }
        return this->arr[this->top];
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    int size()
    {
        return this->top + 1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
    }
};

class Node
{
public:
    Node *next;
    int value;

    Node(int value)
    {
        this->value = value;
    }
};

class llStack
{
    Node *head = NULL;
    int capacity;
    int size = -1;

public:
    llStack(int c)
    {
        this->capacity = c;
        return;
    }

    void push(int value)
    {
        if (this->size == this->capacity - 1)
        {
            cout << "Overflow. Could not add: " << value << endl;
            return;
        }

        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
        size++;
    }

    void top()
    {
        if (this->size == -1)
        {
            cout << "Underflow\n";
            return;
        }

        cout << "Top value: " << this->head->value << endl;
    }

    void pop()
    {
        if (this->size == -1)
        {
            cout << "Underflow\n";
            return;
        }

        Node *toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        size--;
    }

    int size()
    {
        return this->size + 1;
    }

    bool isEmpty()
    {
        return this->size == -1;
    }

    bool isFull()
    {
        return this->size == this->capacity - 1;
    }
};

int main()
{
    llStack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.top();

    return 0;
}