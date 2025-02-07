#include <iostream>

using namespace std;

int main()
{
    // square pattern
    // if n = 4 then:
    // 1234
    // 1234
    // 1234
    // 1234
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // square pattern
    // if n = 4 then:
    // ABCD
    // ABCD
    // ABCD
    // ABCD
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    cout << endl;

    // square pattern
    // if n = 4 then:
    // 123
    // 456
    // 789
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Triangle pattern
    // if n = 4 then:
    // *
    // **
    // ***
    // ****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // Triangle pattern
    // if n = 4 then:
    // 1
    // 22
    // 333
    // 4444
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << endl;

    // Triangle pattern
    // if n = 4 then:
    // 1
    // 12
    // 123
    // 1234
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Triangle pattern
    // if n = 4 then:
    // 1
    // 21
    // 321
    // 4321
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Floyd's Triangle pattern
    // if n = 4 then:
    // 1
    // 23
    // 456
    // 78910
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Inverted Triangle pattern
    // if n = 4 then:
    // 1111
    //  222
    //   33
    //    4
    // my solution
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                cout << i + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    // tutorial's solution
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // Pyramid Pattern
    // if n = 4 then:
    //    1
    //   121
    //  12321
    // 1234321
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << endl;

    // Hollow Diamond Pattern
    // if n = 4 then:
    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *

    // outer loop for upper body
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }

        // star
        cout << '*';
        // spaces again
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        if (i != 0)
        {
            cout << '*';
        }
        cout << endl;
    }
    // outer loop for lower body
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // star
        cout << '*';
        for (int j = (2 * (n - 2 - i) - 1); j > 0; j--)
        {
            cout << ' ';
        }
        // star
        if (i != n - 2)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Butterfly pattern
    // if n=4 then:
    //
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    // outer loop for upper body
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        // spaces
        for (int j = (2 * (n - i) - 2); j > 0; j--)
        {
            cout << ' ';
        }
        // stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    // outer loop for lower body
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        // spaces
        for (int j = i * 2; j > 0; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}