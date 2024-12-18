#include <iostream>
using namespace std;

int main(){
	// Basic Example
	int a = 4;
	int* ptr = &a;

	cout<<"The Value of a is "<<*(ptr)<<endl;
	
	// Dynamically making a pointer
	int* p = new int(40);
	cout<<"The Value of at Dynamic pointer is "<<*p<<endl;

	// Allocating a block of memory using new keyword
	int* arr = new int[3];
	arr[0] = 34;
	arr[1] = 45;
	arr[2] = 87;

	cout<<"The value of arr[0] is "<< arr[0] <<endl;
	cout<<"The value of arr[1] is "<< arr[1] <<endl;
        cout<<"The value of arr[2] is "<< arr[2] <<endl;

	return 0;
}
