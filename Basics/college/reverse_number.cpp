#include <iostream>
using namespace std;

int main()
{
    int i, n, digit, ans = 0, multi = 10;
    cout<<"Enter the number: ";
    cin>>n;

    while(n>0)
    {
        digit = n%10;
        ans = ans*10 + digit;
        n=n/10;
    }
    cout<<"Reverse of number is "<<ans;

    return 0;
}