#include <iostream>
#include <string>

using namespace std;

int main() {
	char ch[100];
	while (true) {
		cin.getline(ch, 100, ';');
		if (strcmp(ch, "^Z") == 0) break;
		cout << ch << endl;
		cin.ignore(100, '\n');
	}
}