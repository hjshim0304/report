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

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		char input[50];
		cout << "사람" << i + 1 << ">> ";
		cin >> nameStr;
		cin >> telStr;
		list[i].set(nameStr, telStr);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++){
		cout << list[i].getName() << " ";
	}
	cout << endl;

	char finding[30];
	cout << "전화번호 검색합니다. 이름을 입력하세요>> ";
	cin >> finding;
	for (int i = 0; i < 3; i++) {
		if (list[i].getName() == finding) {
			cout << "전화번호는 " << list[i].getTel() << endl;
		}
	}
}