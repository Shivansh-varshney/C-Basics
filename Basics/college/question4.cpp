#include <iostream>
using namespace std;

int tell_max(int array[], int n)
{
    // find the maximum number in the array
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int tell_min(int array[], int n)
{
    // find the minimum number in the array
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int tell_average(int array[], int n)
{
    int i, sum = 0, average;

    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    average = sum / n;

    return average;
}

int show(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " : " << &array[i] << endl;
    }
}

int main()
{
    int i, n, ch, arr[100];
    ;
    bool flag = true;

    cout << "Enter number of elements you want to push into array: ";
    cin >> n;
    if (n < 0 || n > 100)
    {
        cout << "Enter a size between 1 and 100";
        return true;
    }

    // storing values in array
    cout << "Enter values of array:" << endl;
    for (i = 0; i < n; i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin >> arr[i];
    }

    while (flag == true)
    {
        cout << R"(
-----------------------------------------------------
What do you want to do now?
Enter 1 for maximum.
Enter 2 for minimum.
Enter 3 for average.
Enter 4 to display address of each element.
Enter 5 to end program.)"<<endl;

        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int max = tell_max(arr, n);
            cout << R"(
-----------------------------------------
Mazimum in the array is )"
                 << max;
            continue;
        }
        case 2:
        {
            int min = tell_min(arr, n);
            cout << R"(
-----------------------------------------
Minimum in the array is )"
                 << min;
            continue;
        }
        case 3:
        {
            int average = tell_average(arr, n);
            cout << R"(
-----------------------------------------
Average of the array is )"
                 << average;
            continue;
        }
        case 4:
        {
            cout << R"(
-----------------------------------------)"<<endl;
            show(arr, n);
            continue;
        }
        case 5:
        {
            flag = false;
            continue;
        }
        }
    }
    return 0;
}