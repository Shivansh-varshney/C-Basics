// Implementing Stack using Linked List
#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int info;
    Node *next;
    Node(int el, Node *ptr = nullptr)
    {
        info = el;
        next = ptr;
    }
};

class Stack
{
public:
    Node *head;
    Stack()
    {
        head = 0;
    }
    int size = 0;
    void push(int el)
    {
        size++;
        if (head == 0)
        {
            head = new Node(el);
        }
        else
        {
            Node *tmp = new Node(el, head);
            head = tmp;
        }
    }

    void pop()
    {
        if (head == 0)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        Node *tmp = head;
        head = head->next;
        delete tmp;
        size--;
        cout << "Element deleted" << endl;
    }
    void top()
    {
        cout << "Top element of the stack is " << head->info << endl;
    }
    void getSize()
    {
        cout << "Size of the stack is " << size << endl;
    }
    bool empty()
    {
        if (size == 0)
        {
            cout << "Stack is empty." << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty." << endl;
            return false;
        }
    }
    void print()
    {
        Node *p = head;
        cout << "Elements of the stack is/are  ";
        while (p != 0)
        {
            cout << p->info << "   ";
            p = p->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(15);
    s.pop();
    s.print();
    s.getSize();
    s.empty();
}
