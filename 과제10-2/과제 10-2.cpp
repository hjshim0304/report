#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****" << endl;
 
    map<string, string> WHO;
    int type = 0;

    while (type < 3) {
        if (type == 0) {
            cout << "삽입:1, 검사:2, 종료:3>>";
            cin >> type;
        }

        if (type == 1) {
            string name, code;
            cout << "이름 암호>>";
            cin >> name >> code;
            WHO.insert(make_pair(name, code));
            type = 0;
        }

        if (type == 2) {
            string name, code, tar;
            cout << "이름? ";
            cin >> name;
            cout << "암호? ";
            cin >> tar;
            if (WHO[name] == tar) {
                cout << "통과!!" << endl;
            }
            else {
                cout << "실패~~" << endl;
                type = 2;
            }
        }
    }
}