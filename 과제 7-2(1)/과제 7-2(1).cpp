#include <iostream>
#include <string>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << " 인 원" << endl; }
    friend int operator++(Circle& c);
    friend int operator++(Circle& c, int);
};

int operator++(Circle& c) {
    return ++c.radius;
}

int operator++(Circle& c, int) {
    return c.radius++;
}

int main() {
    Circle a(5), b(4);
    ++a;     // 반지름을 1 증가 시킨다.
    b = a++; // 반지름을 1 증가 시킨다.
    a.show();
    b.show();
}