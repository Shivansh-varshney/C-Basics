#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class linkedList
{
public:
    Node *head;
    Node *tail;

    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    // insert at the begining
    void insertAtHead(int val)
    {
        Node *new_node = new Node(val);
        new_node->next = head;

        if (tail == NULL)
        {
            tail = new_node;
        }

        head = new_node;
    }

    // insertion at the end
    void insertAtTail(int val)
    {
        Node *new_node = new Node(val);
        new_node->next = NULL;
        tail->next = new_node;
        tail = new_node;
    }

    // insert at a given position
    void insertAtPos(int position, int val)
    {
        if (position == 0)
        {
            insertAtHead(val);
            return;
        }

        Node *new_node = new Node(val);
        Node *temp = head;
        int index = 0;

        while (index != position - 1)
        {
            temp = temp->next;
            index++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    // updating at a given position
    void updateAtPos(int position, int val)
    {
        if (position == 0)
        {
            head->data = val;
            return;
        }

        Node *temp = head;
        int index = 0;

        while (index != position - 1)
        {
            temp = temp->next;
            index++;
        }
        temp->data = val;
    }

    // deleting from the given position
    void deleteAtPos(int position)
    {
        if (position == 0)
        {
            head = head->next;
            return;
        }

        Node *temp = head;
        int index = 0;

        while (index != position - 1)
        {
            temp = temp->next;
            index++;
        }
        Node *next_node = temp->next;
        temp->next = next_node->next;
        delete next_node;
    }

    // delete at the end
    void deleteAtEnd()
    {
        Node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    // delete alternate in the list
    void deleteAlternate()
    {
        int index = 0;
        Node *temp = head;

        while (temp->next != NULL)
        {
            if ((index + 1) % 2 != 0)
            {
                Node *next_node = temp->next;
                temp->next = next_node->next;
                delete next_node;
                index++;
            }
            else
            {
                temp = temp->next;
                index++;
            }
        }
    }

    // delete duplicate
    void deleteDuplicates()
    {
        Node *temp = head;
        Node *next_node = temp->next;

        while (temp->next != NULL)
        {
            if (temp->data == next_node->data)
            {
                temp->next = next_node->next;
                delete next_node;
                next_node = temp->next;
            }
            else
            {
                temp = temp->next;
                next_node = next_node->next;
            }
        }
    }

    // print in reverse the list
    void reverse(Node *head)
    {
        if (head->next == NULL)
        {
            cout << head->data << "->";
            return;
        }

        reverse(head->next);
        cout << head->data << "->";
    }

    Node * reverselist()
    {
        Node *prev = NULL;
        Node *current = head;

        while (current != NULL)
        {
            Node *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        return prev;
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";

            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    linkedList *list = new linkedList();

    list->insertAtHead(1);
    list->insertAtTail(2);
    list->insertAtTail(3);
    list->insertAtTail(4);
    list->display();
    list->head = list->reverselist();
    list->display();

    delete list;

    return 0;
}