#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int len;
	int count = 0;

	cout << "문자열 입력>> ";
	cin >> str;
	len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] == 'a') count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}