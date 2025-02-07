#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // Q1: Figure out a way to find whether a number is power of 2 without using a loop.

    // with loop
    int n = 32;
    while (n > 2)
    {
        if ((n / 2) % 2 != 0)
        {
            cout << "Number is not the power of 2." << endl;
            break;
        }
        n /= 2;
    }
    if (n == 2)
    {
        cout << "Number is the power of 2." << endl;
    }

    // without a loop
    while (true)
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        if ((n >> 1) % 2 != 0)
        {
            cout << "Number is not the power of 2." << endl;
        }
        else
        {
            cout << "Number is the power of 2." << endl;
        }
        cout << endl;
    }

    // Q2: WAF to reverse an integer.
    int ans = 0, pow = 10, n;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        int r = n % 10;
        n /= 10;
        ans *= pow;
        ans += r;
    }

    // index of largest and smallest number in the array

    int nums[] = {12, -1, 34, 9, -2, -11, 62};
    int size = 7;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallIndex = 0;
    int largeIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == smallest)
        {
            smallIndex = i;
        }
        if (nums[i] == largest)
        {
            largeIndex = i;
        }
    }

    cout << "Index of smallest number: " << smallIndex << endl;
    cout << "Index of largest number: " << largeIndex << endl;

    // reverse an array

    // my approach
    int arr[] = {4, 2, 7, 8, 1, 2};
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    cout << endl;

    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - 1 -i]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    // 2-pointer approach
    int arr[] = {4, 2, 7, 8, 1, 2};
    int size = 6;
    int start = 0, end = size - 1;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    cout << endl;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    return 0;
}