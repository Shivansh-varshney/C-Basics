#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int value)
    {
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertAtPos(int value, int pos)
    {
        if (pos == 0 || head == NULL)
        {
            insertAtHead(value);
            return;
        }
        Node *temp = head;
        int curr = 0;
        while (curr != pos - 1 && temp->next != NULL)
        {
            temp = temp->next;
            curr++;
        }
        if (temp->next == NULL)
            return;
        Node *new_node = new Node(value);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteAtHead()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtTail()
    {
        if (head == NULL)
            return;
        if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete temp;
            return;
        }
        Node *h = head;
        while (h->next->next != NULL)
        {
            h = h->next;
        }
        Node *temp = h->next;
        h->next = NULL;
        delete temp;
    }

    void deleteAtPos(int p)
    {

        if (p < 0 || head == NULL)
        {
            return;
        }
        if (p == 0)
        {
            deleteAtHead();
            return;
        }
        Node *prev = head;
        int curr = 0;
        while (curr != p - 1 && prev->next != NULL)
        {
            prev = prev->next;
            curr++;
        }
        if (prev->next == NULL)
            return;
        Node *temp = prev->next;
        prev->next = prev->next->next;
        delete temp;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};