#include <iostream>
#include <string>

using namespace std;

extern "C" void printline(int count);

int main() {
	int num;
	num = 3;
	for (int i = 0; i < num; i++) {
		printline(i + 1);
	}
}