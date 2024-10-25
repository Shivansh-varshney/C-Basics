#include<iostream>
using namespace std;

void swapReferenceVar(int &a, int &b){    //temp a  b
    int temp = a;                         // 4   4  5   
    a = b;                                // 4   5  5
    b = temp;                             // 4   5  4 
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}