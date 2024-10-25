// perform matrix addition and multiplication.
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    // Initializing 1st Matrix
    cout << "Enter 1st Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Row " << (i + 1) << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    // Initializing 2nd Matrix
    cout << "Enter 2nd Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Row " << (i + 1) << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    // Addition of Matrix
    cout << "Addition Of Matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << "\t";
        }
        cout << endl;
    }
    // Multiplication of Matrix
    cout << "Multiplication Of Matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x = 0;
            for (int k = 0; k < 3; k++)
            {
                x += a[i][k] * b[k][j];
            }
            cout << x << "\t";
        }
        cout << endl;
    }
}