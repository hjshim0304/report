#include <iostream>
#include <string>

using namespace std;

int big(int x, int y) {
	int bigger;
	if (x > y) bigger = x;
	else if (x < y) bigger = y;
	if (bigger > 100) return 100;
	else return bigger;
}

int big(int x, int y, int z) {
	int bigger;
	if (x > y) bigger = x;
	else if (x < y) bigger = y;
	if (bigger > z) return z;
	else return bigger;
}

int main() {
	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
	int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����

	cout << x << ' ' << y << ' ' << z << endl;
}