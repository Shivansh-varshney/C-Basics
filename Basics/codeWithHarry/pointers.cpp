// Pointers in c++ ---> data type which holds the memory location of other data types.

#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int* b = &a;

    // & ---> (Address of) Opertor. It gives the address of variable in memory,
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (Value at ) Dereference Operator. It gives the value of variable in the memory location.
    cout<<"The value @ "<<b<<" is "<<*b<<endl;

    // Pointer to Pointer variable. A pointer to store the memory location of a pointer.
    int** c = &b;
    return 0;
}
