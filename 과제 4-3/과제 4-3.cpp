#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int index = 0;
	int count = 0;

	cout << "문자열 입력>> ";
	getline(cin, str);
	
	while (index != -1) {
		index = str.find('a', index+1);
		count++;
	}
	
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}