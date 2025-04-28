#include <iostream>
#include <string>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; };
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(){}
    NamedCircle(int radius, string name);
    void set(int radius, string name);
    string getName();
};

NamedCircle::NamedCircle(int radius, string name) : Circle(radius) {
    this->name = name;
}

void NamedCircle::set(int radius, string name) {
    Circle::setRadius(radius);
    this->name = name;
}

string NamedCircle::getName() {
    return name;
}


string biggest(NamedCircle p[], int n) {
    int max = 0;
    for(int i=0;i<n;i++){
        if (p[max].getArea() < p[i].getArea()) max = i;
    }
    return p[max].getName();
};

int main() {
    NamedCircle pizza[5];

    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;

    for (int i = 0; i < 5; i++) {
        int r;
        string n;
        cout << i+1 << ">> ";
        cin >> r >> n;
        pizza[i].set(r, n);
    }

    cout << "가장 면적이 큰 피자는 " << biggest(pizza, 5) << "입니다." << endl;

}