#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // function objects(functors): Functions wrapped in a class so that it is available as an onject

    int arr[] = {1, 5, 3, 9, 4, 2};
    // sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}