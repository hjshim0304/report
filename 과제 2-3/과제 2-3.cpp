#include <iostream>
#include <string>
using namespace std;

int main() {
	char name[50];
	char adress[100];
	int age;
	cout << "�̸���? ";
	cin.getline(name, 100);
	cout << "�ּҴ�? ";
	cin.getline(adress, 100);
	cout << "���̴�? ";
	cin >> age;
	cout << name << ", " << adress << ", " << age << "��";

	return 0;
}
