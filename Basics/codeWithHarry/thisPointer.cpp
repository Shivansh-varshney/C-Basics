#include <iostream>
using namespace std;

class A{
    int a;

    public:
        void setData(int a){
            // "this" keyword is pointer which points to the object which has invoked 
            // the member function.
            this->a = a;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){

    A a;
    a.setData(4);
    a.getData();
    
    return 0;
}