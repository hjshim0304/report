#include <iostream>
#include <string>

class Board {
private:
	Board() { size = 0; };
public:
	static int size;            // �Խ��ǿ� ������ ��ġ ���� ��
	static string text[100];	// �ִ� 100���� �Խñ� ���� ����
	static void add(string text);
	static void print();
};