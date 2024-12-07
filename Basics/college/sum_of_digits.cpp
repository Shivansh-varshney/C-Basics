// sum of digits of a number

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout<<"Enter the number: ";
    cin>>n;

    while(n>0)
    {
        int digit = n%10;
        sum+=digit;
        n=n/10;
    }
    cout<<"Sum of digits is "<<sum;

    return 0;
}