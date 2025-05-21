#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	cout << "dec\thexa\tchar\t";
	cout << "dec\thexa\tchar\t";
	cout << "dec\thexa\tchar\t";
	cout << "dec\thexa\tchar\t" << endl;
	cout << "___\t____\t____\t";
	cout << "___\t____\t____\t";
	cout << "___\t____\t____\t";
	cout << "___\t____\t____\t";

	for (int i = 0; i < 128; i++) {
		if (i % 4 == 0) cout << endl;

		cout << setw(4) << dec << i << '\t';

		cout << setw(4) << hex << i << '\t';
		
		cout << (isprint(i) ? char(i) : '.') << '\t';
	}
}