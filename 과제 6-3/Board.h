class Board {
private:
	Board() { size = 0; };
public:
	static int size;            // �Խ��ǿ� ������ ��ġ ���� �� 
	static string text[100];    // �ִ� 100���� �Խñ� ���� ����
	static string add(string text);
	static string print();
};