#include <iostream>
#include <string>
using namespace std;

int main() {
	char name[50];
	char adress[100];
	int age;
	cout << "이름은? ";
	cin.getline(name, 100);
	cout << "주소는? ";
	cin.getline(adress, 100);
	cout << "나이는? ";
	cin >> age;
	cout << name << ", " << adress << ", " << age << "세";

	return 0;
}
