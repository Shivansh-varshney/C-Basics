// Implimenting Stack using arrays

#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr, size, top;
    Stack(int size)
    {
        head->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int el)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = el;
        }
        else
        {
            cout << " Stack OverFlow. " << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " Stack UnderFlow. " << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            cout << "Element at Top is : " << endl;
            cout << arr[top] << endl;
        }

        else
        {
            cout << "Stack is Empty. " << endl;
            return -1;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            cout << "True  " << endl;
            return true;
        }
        else
        {
            cout << "False  " << endl;
            return false;
        }
    }
    void print()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Elements in the stack: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack S(5);
    S.push(5);
    S.push(10);
    S.push(15);
    S.push(20);
    S.pop();
    S.peek();
    S.print();
    S.empty();
    if (S.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }
}