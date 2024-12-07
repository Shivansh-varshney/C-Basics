// fibonacci series upto n numbers
#include <iostream>
using namespace std;

int main()
{
    int i, n, next, first = 0, second = 1;
    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<first<<" "<<second<<" ";

    // print the series
    for(i = 2; i < n; i++)
    {
        next = first + second;
        cout<<next<<" ";
        first = second;
        second = next;
    }

    return 0;
}