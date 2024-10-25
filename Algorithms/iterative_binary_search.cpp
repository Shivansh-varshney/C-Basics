// searching an element using binary search
#include <iostream>
using namespace std;

int main()
{
    int i, ele, index = -1, mid, start, end; /* declaring an array. */
    int arr[10];

    // storing values in array
    cout << "Enter values of array:" << endl;
    for (i = 0; i < 10; i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin >> arr[i];
    }

    cout<<"Enter the element you want to find: ";
    cin>> ele;

    start = 0;
    end = 9;

    while(start <= end)
    {
        mid = start + (end - start)/2;

        if(arr[mid] == ele)
        {
            index = mid;
            break;
        }

        else if(arr[mid]>ele)
        {
            end = mid - 1;
        }
        
        else if(arr[mid]<ele)
        {
            start = mid + 1;
        }
    }

    if(index == -1)
    {
        cout<<"Entered element is not in the array";
    }
    else{
        cout<<ele<<" is at the index "<<index;
    }

    return 0;
}