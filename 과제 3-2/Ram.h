#ifndef Ram_H
#define Ram_H

class Ram {
	char mem[100 * 1024]; // 100KB 메모리, 한 번지는 한 바이트이므로 char 타입 사용
	int size;
public:
	Ram(); // mem을 0으로 초기화하고 size를 100*1024로 초기화
	~Ram(); // "메모리 제거됨" 문자열 출력
	char read(int address); // address 주소의 메모리를 읽어 리턴
	void write(int address, char value); // address 주소에 value 저장
};

#endif