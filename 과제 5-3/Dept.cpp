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

void Dept::read() {// size 만큼 키보드에서 정수를 읽어 scores 배열에 저장
	for (int i = 0; i < size; i++) {
		int num;
		cout << i+1 << "번: ";
		cin >> num;
		scores[i] = num;
	}
}

bool Dept::isOver60(int index) {// index의 학생의 성적이 60보다 크면 true 리턴
	if (scores[index] > 60) return true;
	else return false;
}