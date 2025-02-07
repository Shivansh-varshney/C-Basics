#include <iostream>
#include <stack>

using namespace std;

// insert at the bottom of the stack.
void insertAtBottom(stack<int> &orignal, int value)
{
    if (orignal.empty())
    {
        orignal.push(value);
        return;
    }

    int top = orignal.top();
    orignal.pop();
    insertAtBottom(orignal, value);
    orignal.push(top);
}

// insert at the any index of the stack.
void insertAtIndex(stack<int> &orignal, int value, int givenIndex, int currentIndex = 0)
{
    if (givenIndex == currentIndex)
    {
        orignal.push(value);
        return;
    }

    int top = orignal.top();
    orignal.pop();
    currentIndex++;
    insertAtIndex(orignal, value, givenIndex, currentIndex);
    orignal.push(top);
}

// copy stack in other stack in the same order.
void copyStack(stack<int> &orignal, stack<int> &copy)
{

    if (orignal.empty())
    {
        return;
    }

    int top = orignal.top();
    orignal.pop();
    copyStack(orignal, copy);
    copy.push(top);

    return;
}

// remove from the bottom of the stack
void removeBottom(stack<int> &orignal)
{
    if (orignal.size() == 1)
    {
        orignal.pop();
        return;
    }

    int top = orignal.top();
    orignal.pop();
    removeBottom(orignal);
    orignal.push(top);
    return;
}

// reverse a stack data in the same stack
void reverse(stack<int> &orignal){

    if(orignal.size() == 0){
        return;
    }

    int top = orignal.top();
    orignal.pop();
    reverse(orignal);
    insertAtBottom(orignal, top);

    return;
}

int main()
{
    stack<int> orignal;
    orignal.push(1);
    orignal.push(2);
    orignal.push(3);
    orignal.push(4);
    orignal.push(5);

    reverse(orignal);

    while (not orignal.empty())
    {
        cout << orignal.top() << endl;
        orignal.pop();
    }

    return 0;
}