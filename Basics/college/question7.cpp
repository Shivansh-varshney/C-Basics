#include <iostream>

class TwoDim {
protected:
    double x, y;

public:
    // Default constructor
    TwoDim() : x(0.0), y(0.0) {}

    // Parameterized constructor
    TwoDim(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Print function
    virtual void print() const {
        std::cout << "2D Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

class ThreeDim : public TwoDim {
protected:
    double z;

public:
    // Default constructor
    ThreeDim() : TwoDim(), z(0.0) {}

    // Parameterized constructor
    ThreeDim(double xVal, double yVal, double zVal) : TwoDim(xVal, yVal), z(zVal) {}

    // Print function (override)
    void print() const override {
        std::cout << "3D Coordinates: (" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    // Demonstrate runtime polymorphism
    TwoDim obj2D(1.0, 2.0);
    ThreeDim obj3D(3.0, 4.0, 5.0);

    obj2D.print();
    obj3D.print();

    return 0;
}
