#include <iostream>
#include <string>
#include "Board.h"

using namespace std;

int Board::size = 0;
string Board::text[100];

void Board::add(string msg){
	text[size] = msg;
	size++;
}

void Board::print(){
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ": " << text[i] << endl;
	}
}