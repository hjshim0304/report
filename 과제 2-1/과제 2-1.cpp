#include <iostream>
#include <string>
using namespace std;

int main() {
	int n1, n2;
	int result;
	cout << "두 수를 입력하라 >>";
	cin >> n1 >> n2;
	result = (n1 > n2) ? n1 : n2;
	cout << result;

	return 0;
}