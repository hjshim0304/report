#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	const char* path = "c:\\windows\\system.ini";
	ifstream fin(path);
	if (!fin) {
		cout << path << " 열기 오류" << endl;
		return 0;
	}

	int c;
	char text[1000];
	for (int i = 0; i < 1000; i++) {
		c = fin.get();
		text[i] = toupper(c);

		if (c == EOF) {
			text[i] = '\0';
			break;
		}
	}
	cout << text;
	fin.close();
}