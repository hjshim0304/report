#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
	string name; // ������ �̸�
	int width, height; // ������ �����ϴ� �簢���� �ʺ�� ����
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; } // dummy �� ����
	string getName() { return name; } // �̸� ����
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
	Oval b("��붱", 20, 10);
	Rect c("����", 20, 60);
	Triangular t("�佺Ʈ", 20, 60);

	cout << b.getName() << " ���̴� " << b.getArea() << endl;
	cout << c.getName() << " ���̴� " << c.getArea() << endl;
	cout << t.getName() << " ���̴� " << t.getArea() << endl;
}