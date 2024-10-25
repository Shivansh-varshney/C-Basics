// implementing recursive functions
#include <iostream>
using namespace std;

// factorial of a number.
int Factorial(int a)
{
    if (a < 1)
    {
        return 1;
    }
    return a * Factorial(a - 1);
}

// Nth fibonacci number
int Fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(){
    cout<<"Factorial of 5 is:"<<Factorial(5)<<"\n";
    cout<<"10th Fibonacci number is:"<<Fibonacci(10);
}