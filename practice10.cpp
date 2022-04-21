#include <iostream>
#include <string>

struct Vector{
    double x;
    double y;

    Vector operator+(Vector &other){
        return Vector(x + other.x, y + other.y);
    }

    Vector(double _x, double _y):
        x(_x),
        y(_y)
    {}
};

std::ostream& operator<<(std::ostream &o, const Vector &p) {
    o << "<" << p.x << ", " << p.y << ">";
    return o;
}

int main() {
    Vector a(7.0, 8.0);
    Vector b(9.5, 2.0);

    std::cout << a << " + " << b << " = " << a + b << std::endl;
}
