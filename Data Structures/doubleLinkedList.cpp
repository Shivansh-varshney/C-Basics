#include <iostream>
#include <climits>

using namespace std;

class Node
{
public:
    Node *prev;
    Node *next;
    int value;

    Node(int value)
    {
        this->value = value;
    }
};

class doublell
{
public:
    Node *head;
    Node *tail;

    doublell()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtHead(int value)
    {
        Node *new_node = new Node(value);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->prev = NULL;
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);

        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->prev = tail;
        new_node->next = NULL;
        tail->next = new_node;
        tail = new_node;
    }

    void insertAtPos(int position, int value)
    {
        Node *new_node = new Node(value);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        int index = 0;
        Node *temp = head;

        while (index != position - 1)
        {
            temp = temp->next;
            index++;
        }

        new_node->prev = temp;
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
    }

    void deleteAtStart()
    {
        if (head == NULL)
        {
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }

        delete temp;
    }

    void deleteAtEND()
    {
        if (tail == NULL)
        {
            return;
        }

        Node *temp = tail;
        tail = tail->prev;

        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete temp;
    }

    void deleteNode(int value)
    {
        if (head == NULL)
        {
            return;
        }

        Node *temp = head;
        while (temp->value != value)
        {
            temp = temp->next;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    void reverse()
    {
        Node *temp = head;
        Node *current = head;

        while (current != NULL)
        {
            Node *nextptr = current->next;
            current->next = current->prev;
            current->prev = nextptr;
            current = nextptr;
        }

        head = tail;
        tail = temp;
    }

    void whetherPalindrome()
    {
        bool palindrome = true;

        Node *start = head;
        Node *end = tail;

        while (palindrome && (start < end))
        {
            if (start->value == end->value)
            {
                start = start->next;
                end = end->prev;
            }
            else
            {
                palindrome = false;
            }
        }

        if (palindrome)
        {
            cout << "List is palindrome" << endl;
        }
        else
        {
            cout << "List is not palindrome" << endl;
        }
    }

    void deleteDuplicates()
    {
        Node *temp = tail;
        Node *prev = temp->prev;

        while (temp->prev != NULL)
        {
            if (temp->value == prev->value)
            {
                temp->prev = prev->prev;
                if (prev->prev != NULL)
                {
                    prev->prev->next = temp;
                }
                delete prev;
            }
            else
            {
                temp = temp->prev;
            }

            prev = temp->prev;
        }

        head = temp;
    }

    void deleteSameNeighbours()
    {
        Node *current = tail->prev;

        while (current->prev != NULL)
        {
            Node *prev = current->prev;
            if (current->prev->value == current->next->value)
            {
                current->next->prev = current->prev;
                current->prev->next = current->next;
                delete current;
            }

            current = prev;
        }

        head = current;
    }

    bool isCriticalPoint(Node *currentNode)
    {
        if (currentNode->next->value < currentNode->value && currentNode->prev->value < currentNode->value)
        {
            return true;
        }
        else if (currentNode->next->value > currentNode->value && currentNode->prev->value > currentNode->value)
        {
            return true;
        }

        return false;
    }

    void criticalPointsDistance()
    {

        Node *currentNode = head->next;
        Node *first = NULL;
        Node *second = NULL;

        int arr[2] = {
            INT_MAX, INT_MIN};

        while (currentNode->next != NULL)
        {

            if (isCriticalPoint(currentNode))
            {

                if (first == NULL)
                {
                    first = currentNode;
                }
                else
                {
                    second = currentNode;
                    int distance = abs(first->value - second->value);
                    arr[0] = min(arr[0], distance);
                    arr[1] = max(arr[1], distance);
                    first = second;
                }
            }
            currentNode = currentNode->next;
        }

        if (second != NULL)
        {
            cout << "Minimum Distance: " << arr[0] << endl;
            cout << "Maximum Distance: " << arr[1] << endl;
        }
        else
        {
            cout << "Minimum Distance: -1" << endl;
            cout << "Maximum Distance: -1" << endl;
        }
    }

    void checkSum(int value)
    {
        // my approach
        // Node *current = head;
        // Node *second = head->next;
        // int l = -1, r = -1;
        // while (current->next != NULL)
        // {
        //     while (second->next != NULL)
        //     {
        //         if ((current->value + second->value) == value)
        //         {
        //             l = current->value;
        //             r = second->value;
        //         }
        //         second = second->next;
        //     }
        //     current = current->next;
        //     second = current->next;
        // }
        // cout << "The pair is: (" << l << ", " << r << ")" << endl;

        // 2-pointer approach.
        Node *start = head;
        Node *end = tail;
        int l = -1, r = -1;
        bool flag = true;

        while (start != end)
        {
            int sum = start->value + end->value;

            if (sum == value)
            {
                l = start->value;
                r = end->value;
                break;
            }
            else if (sum < value)
            {
                start = start->next;
            }
            else
            {
                end = end->prev;
            }
        }

        cout << "The pair is: (" << l << ", " << r << ")" << endl;
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->value << "<->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    doublell *list = new doublell();

    list->insertAtHead(1);
    list->insertAtTail(2);
    list->insertAtTail(3);
    list->insertAtTail(4);
    list->insertAtTail(7);
    list->insertAtTail(8);
    list->display();
    list->checkSum(10);

    return 0;
}