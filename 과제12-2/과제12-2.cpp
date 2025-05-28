#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	const char* oriPath = "c:\\windows\\system.ini";
	const char* copPath = "c:\\temp\\system.txt";
	
	ifstream ori(oriPath, ios::binary);
	if (!ori) {
		cout << oriPath << " 읽기 오류";
		return 0;
	}

	ofstream cop(copPath, ios::out | ios::binary);
	if (!cop) {
		cout << copPath << " 읽기 오류";
		return 0;
	}

	int count = 0;
	int c;
	char text[1000];
	for (int i = 0; i < 1000; i++) {
		c = ori.get();
		text[i] = c;
		count++;

		if (c == EOF) {
			text[i] = '\0';
			break;
		}
	}

	reverse(text, text + strlen(text));
	cop.write(text, count);
	
	ori.close();
	cop.close();
}