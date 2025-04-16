#include <iostream>
#include <string>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << " �� ��" << endl; }
    friend int operator+(int n, Circle& c);
};

int operator+(int n, Circle& c) {
    return n + c.radius;
}

int main() {
    Circle a(5), b(4);
    b = 1 + a; // b�� �������� a�� �������� 1�� ���� ������ ����
    a.show();
    b.show();
}