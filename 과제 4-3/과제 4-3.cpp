#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int index = 0;
	int count = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, str);
	
	while (index != -1) {
		index = str.find('a', index+1);
		count++;
	}
	
	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}