// searching an element using binary search
#include <iostream>
using namespace std;

int search(int arr[], int ele, int end, int start = 0)
{
    if(start<=end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == ele)
        {
            return mid;
        }

        else if (arr[mid] > ele)
        {
            end = mid - 1;
            return search(arr, ele, end, start);
        }

        else if (arr[mid] < ele)
        {
            start = mid + 1;        
            return search(arr, ele, end, start);
        }
    }

    return -1;
}

int main()
{
    int i, ele; /* declaring an array. */
    int arr[10];

    // storing values in array
    cout << "Enter values of array: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin >> arr[i];
    }

    cout << "Enter the element you want to find: ";
    cin >> ele;

    int index = search(arr, ele, 9);
    if(index == -1)
    {
        cout<<"Entered element is not in the array.";
    }
    else{
        cout<<"Element is at the index "<<index;
    }

    return 0;
}