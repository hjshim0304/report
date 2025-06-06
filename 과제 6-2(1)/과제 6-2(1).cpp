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
	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴

	cout << x << ' ' << y << ' ' << z << endl;
}