#include <iostream>
#include <string>
#include "Board.h"

using namespace std;

string Board::add(string msg){
	text[size] = msg;
	size++;
	cout << size << text << endl;
}
string Board::print(){
	for (int i = 0; i < size; i++) {
		cout << i << ": " << text[i] << endl;
	}
}