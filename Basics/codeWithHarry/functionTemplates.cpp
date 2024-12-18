#include <iostream>

using namespace std;

float funcAverage(int a, int b)
{
    float avg = (a + b) / 2;
    return avg;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(2, 5);
    printf("The average is: %.3f", a);
    printf("\n");
    return 0;
}