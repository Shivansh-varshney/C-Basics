#include <iostream>
using namespace std;

class triangle
{
    public:
    double area(double base, double height)
    {
        return base*height*(0.5);
    }

    public:
    int area()
    {
        double b,h;

        cout<<"Enter the base of the triangle: ";
        cin>>b;

        cout<<"Enter the height of the triangle: ";
        cin>>h;

        return b*h*(0.5);
    }
};

int main()
{
    triangle triobj;

    double area = triobj.area(45, 65);
    cout<<"Area of a trianle with Base 45 and Height 65 is "<<area<<endl;

    area = triobj.area();
    cout<<"Area of a trianle with the given dimensions is "<<area;
}

