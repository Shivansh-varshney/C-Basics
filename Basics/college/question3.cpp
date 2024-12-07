// calculate factors using default arguements.

#include <iostream>
using namespace std;

bool factors(int number, int i = 1)
{
    if(number<=0)
    {
        cout<<"Please enter a valid number!!";
        return true;
    }

    for(i; i<=number; i++)
    {
        if(number % i == 0)
        {
            if(i==number)
            {
                cout<<i;
            }
            else
            {
                cout<<i<<", ";
            }
        }
    }
    return true;
}

int main()
{
    bool flag = true;
    while(flag == true)
    {
        int n;
        cout<<"Enter the number you want factors of or enter -1 to end program: ";
        cin>>n;

        if(n == -1)
        {
            flag = false;
        }
        else
        {
            flag = factors(n);
        }
    }
}