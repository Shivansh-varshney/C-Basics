#include <iostream>
using namespace std;

class Complex{
    int real, complex;

    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The complex part is "<<complex<<endl;
        }

        void setData(int a, int b){
            real = a;
            complex = b;
        }
};

int main(){

    // ye hai aam jindagi
    // Complex c1;
    // c1.setData(1, 54);
    // c1.getData();

    // ye hai mentos jindagi
    // Complex *ptr = new Complex;
    // arrow operator for using pointers
    // ptr->setData(1, 54);
    // ptr->getData();

    // Arraw of objects using arrow operator
    // Complex *ptr = new Complex[3];
    // ptr->setData(1, 54);
    // ptr->getData();
    // (ptr+1)->setData(2, 64);
    // (ptr+1)->getData();
    
    return 0;
}