#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	string tel;
public:
	Person(){}
	Person(string n, string t);
	~Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string n, string t);
};

Person::Person(string n, string t) {
	name = n;
	tel = t;
}

void Person::set(string n, string t) {
	name = n;
	tel = t;
}

int main() {
	Person list[3];
	char nameStr[30];
	char telStr[50];

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		char input[50];
		cout << "���" << i + 1 << ">> ";
		cin >> nameStr;
		cin >> telStr;
		list[i].set(nameStr, telStr);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++){
		cout << list[i].getName() << " ";
	}
	cout << endl;

	char finding[30];
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>> ";
	cin >> finding;
	for (int i = 0; i < 3; i++) {
		if (list[i].getName() == finding) {
			cout << "��ȭ��ȣ�� " << list[i].getTel() << endl;
		}
	}
}