// print the following pattern and take number of rows as n from the user
// A
// B A
// C B A
// D C B A

#include <iostream>
using namespace std;

int main()
{
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j,n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    // outerloop for number of rows.
    for(i = 0; i<n; i++)
    {
        // innerloop for the number characters.
        for(j = i; j>=0; j--)
        {
            cout<<letters[j];
        }
        // change line after completion of one row.
        cout<<endl;
    }
}