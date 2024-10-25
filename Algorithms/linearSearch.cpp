#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}
