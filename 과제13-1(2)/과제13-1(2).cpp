#include <iostream>
#include <string>

using namespace std;

int get() {
	int num;
	cout << "0~9 ������ ���� �Է� >> ";
	cin >> num;

	if (num < 0 || num > 9)
		throw "input fault";

	return num;
}

int main() {
	while (1) {
		try {
			int a = get();
			int b = get();
			cout << a << 'x' << b << '=' << a * b << endl;
		}
		catch (const char* s) {
			cout << s << " ���� �߻�, ����� �� ����" << endl;
		}
	}
}