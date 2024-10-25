// sum of first n natural numbers

#include <iostream>
using namespace std;

int main()
{
    int i,n,sum = 0;
    cout<<"Enter the number of elements: ";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        sum += i;
    }

    cout<<"Sum of "<<n<<" natural numbers: "<<sum;

    return 0;
}