#include <iostream>
#include <string>

class Board {
private:
	Board() { size = 0; };
public:
	static int size;            // 게시판에 저장할 위치 정보 값
	static string text[100];	// 최대 100개의 게시글 저장 공간
	static void add(string text);
	static void print();
};