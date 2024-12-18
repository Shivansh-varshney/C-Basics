#include <iostream>
using namespace std;

class Shop{
    int id;
    float price;

    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }

        void getData(){            
            cout<<"The id of product is "<<id<<endl;
            cout<<"The price of product is "<< price<<endl;
        }
};

int main(){
    Shop *ptr = new Shop[3];
    Shop *ptrTemp = ptr;

    int p, q, i;
    for (i = 0; i < 3; i++)
    {
        cout<<"Enter the details for product "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    
    for (i = 0; i < 3; i++)
    {
        cout<<endl;
        cout<<"The details for product "<<i+1<<" are"<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    


    return 0;
}