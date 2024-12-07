#include <iostream>
using namespace std;

// #include <iostream> & using namespace std;  <-- these are directives. 
// In computer programming, a directive is a special instruction or command provided to the compiler or preprocessor. 
// Directives are not part of the regular programming language syntax and are typically used to convey specific instructions 
// to the compiler or preprocessor about how to process the code.

int main()
{
    int n, f = 1, i;
    // n is for the user input number
    // f is to store factorial
    // i is for the loop

    cout << "Enter the number you want factorial of: - ";
    cin >> n;

    if (n < 0)
    {
        cout << "Error! Factorial of a negative number is not possible.";
    }

    else
    {
        for (i = 2; i <= n; ++i)
        {
            f *= i;
        }
    }

    cout << "Factorial of " << n << " is " << f;

    return 0;
}
 
// this code can calculate factorial upto 20 only.
// because after that the answer becomes so big that it is not easy
// to handle that much big digit using normal