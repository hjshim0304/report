#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int m = i * j;
			cout << i << " * " << j << " = " << m << "  ";
		}
		cout << "\n";
	}

	return 0;
}