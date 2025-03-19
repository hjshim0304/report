#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	cout << "문자열입력 >> ";
	cin.getline(str, 100);

	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		//	if (str[i] == '\0') break;
		cout << endl;
	}

	return 0;
}