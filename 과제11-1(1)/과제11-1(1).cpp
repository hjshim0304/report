#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	while (true) {
		cin.getline(str, 100);
		if (strcmp(str, "^Z")) break;
		cin.ignore(100, ";");
	}
	cout << str;
}