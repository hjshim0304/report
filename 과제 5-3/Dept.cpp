#include <iostream>
#include <string.h>

#include "Dept.h";

using namespace std;

Dept::Dept(const Dept& dept) {
	size = dept.size;
	scores = dept.scores;
}

Dept::~Dept() {

}

void Dept::read() {// size ��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	for (int i = 0; i < size; i++) {
		int num;
		cout << i+1 << "��: ";
		cin >> num;
		scores[i] = num;
	}
}

bool Dept::isOver60(int index) {// index�� �л��� ������ 60���� ũ�� true ����
	if (scores[index] > 60) return true;
	else return false;
}