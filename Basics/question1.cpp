// find the sum of the following series: -
// s = 1 - (2^n) + (3^n) - (4^n) ..... upto n

#include <iostream>
using namespace std;

int power(int number, int raisedto)
{
    if(raisedto == 1)
    {
        return number;
    }
    return number * power(number, raisedto = raisedto - 1);
}

int main()
{
    int i,n;
    float s;

    cout<<"I can sum the following series"<<endl<<"s = 1 - (2^n) + (3^n) - (4^n) ..... upto n terms"<<endl;
    cout<<"Enter the number of terms you want to calculate upto:";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            s = s - power(i, n);
        }
        else
        {
            s = s + power(i, n);
        }
    }

    cout<<"Your answer is "<<s;

    return 0;
}