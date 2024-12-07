// Pattern printing using loops.
#include <iostream>
using namespace std;

int main()
{
    int rows, i, j;
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "Enter the number of rows: ";
    cin >> rows;

    // 1.
    // *
    // **
    // ***
    // ****
    // upto rows rows
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 2.
    // from n rows
    // ****
    // ***
    // **
    // *
    for(i = rows; i>=1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 3.
    // 1
    // 12
    // 123
    // 1234
    // upto n rows
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 4.
    // from n rows
    // 1234
    // 123
    // 12
    // 1
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 5.
    // 1
    // 22
    // 333
    // 4444
    // upto n rows
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 6.
    // from n rows
    // 4444
    // 333
    // 22
    // 1
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 7.
    // A
    // AB
    // ABC
    // ABCD
    // upto n rows
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout<<letters[j];
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 8.
    // from n rows
    // ABCD
    // ABC
    // AB
    // A
    for(i = rows; i > 0; i--)
    {
        for(j = 0; j<=i; j++)
        {
            cout<<letters[i];
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 9.
    // A
    // BB
    // CCC
    // DDDD
    // upto n rows
    for(i = 0; i <= rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout<<letters[i];
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------";

    // 10.
    // from n rows
    // DDDD
    // CCC
    // BB
    // A
    for (i = rows - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            cout << letters[i];
        }
        cout << endl;
    }

    cout<<"-----------------------------------------";

    // 11.
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    // upto n rows
    // outerloop for the number of rows.
    for(i = 1; i <= rows; i++)
    {
    //     // innerloop to print the spaces before "*"
        for(j = 1; j <= rows - i; j++)
        {
            cout<<"  ";
        }

    //     // innerloop to print the stars
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}