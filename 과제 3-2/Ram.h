#ifndef Ram_H
#define Ram_H

class Ram {
	char mem[100 * 1024]; // 100KB �޸�, �� ������ �� ����Ʈ�̹Ƿ� char Ÿ�� ���
	int size;
public:
	Ram(); // mem�� 0���� �ʱ�ȭ�ϰ� size�� 100*1024�� �ʱ�ȭ
	~Ram(); // "�޸� ���ŵ�" ���ڿ� ���
	char read(int address); // address �ּ��� �޸𸮸� �о� ����
	void write(int address, char value); // address �ּҿ� value ����
};

#endif