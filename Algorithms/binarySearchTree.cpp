#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

public:
    BST() : root(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (root == nullptr) {
            root = newNode;
            return;
        }

        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) {
            parent = current;
            if (value < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        if (value < parent->data) {
            parent->left = newNode;
        } else {
            parent->right = newNode;
        }
    }

    bool search(int value) {
        Node* current = root;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            } else if (value < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        return false;
    }
};

int main() {
    BST bst;

    // Insert some values into the tree
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);

    // Search for a value in the tree
    cout << "Searching for 7: " << (bst.search(7) ? "Found" : "Not found") << endl;
    cout << "Searching for 12: " << (bst.search(12) ? "Found" : "Not found") << endl;

    return 0;
}
