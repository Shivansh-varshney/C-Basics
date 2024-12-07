// prime number

#include <iostream>
using namespace std;

int main()
{
    int i, n, f = 0;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            f += 1;
        }
    }

    if(f > 0)
    {
        cout<<n<<" is not a prime number.";
    }
    else{
        cout<<n<<" is a prime number,";
    }
    return 0;
}