// table of n upto m
#include <iostream>
using namespace std;

int main()
{
    int i,n,m;
    cout<<"Enter the number you want table of: ";
    cin>>n;

    cout<<"Enter the number you want table upto: ";
    cin>>m;

    for(i = 1; i <= m; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}