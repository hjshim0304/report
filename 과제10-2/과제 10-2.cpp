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
            cout << "삽입:1, 검사:2, 종료:3>> ";
            cin >> type;
        }

        if (type == 1) {
            string name, code;
            cout << "이름 암호>> ";
            cin >> name >> code;
            WHO.insert(make_pair(name, code));
            type = 0;
        }

        if (type == 2) {
            string name, code;
            bool pass = false;
            cout << "이름? ";
            cin >> name;
            while (pass == false) {
                cout << "암호? ";
                cin >> code;
                if (WHO[name] == code) {
                    cout << "통과!!" << endl;
                    pass = true;
                    type = 0;
                }
                else {
                    cout << "실패~~" << endl;
                    pass = false;
                }
            }
        }

        if (type == 3) {
            cout << "프로그램을 종료합니다..." << endl;
        }
    }
}