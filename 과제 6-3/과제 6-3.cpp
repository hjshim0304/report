#include <iostream>
#include <string>
#include "Board.h"

using namespace std;

int main() {
	// Board myBoard; // ��ü ������ ������ �����Դϴ�.
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}