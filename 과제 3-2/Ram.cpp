#include<iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	mem[100 * 1024] = 0;
	size = 100 * 1024;
}

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int adress) {
	return mem[adress];
}

void Ram::write(int adresss, char value) {
	mem[adresss] = value;
}