#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
	string name; // 도형의 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() = 0; // dummy 값 리턴
	string getName() { return name; } // 이름 리턴
};

class Oval : public Shape {
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {};
	virtual double getArea() { return width * height * 3.14; }
};

class Rect : public Shape {
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {};
	virtual double getArea() { return width * height; }
};

class Triangular : public Shape {
public:
	Triangular(string n, int w, int h) : Shape(n, w, h) {};
	virtual double getArea() { return 0.5 * width * height; }
};

int main() {
	Shape* p[3];
	Oval b("빈대떡", 20, 10);
	Rect c("찰떡", 20, 60);
	Triangular t("토스트", 20, 60);

	p[0] = &b;
	p[1] = &c;
	p[2] = &t;

	for(int i=0;i<3;i++){
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
	}
}