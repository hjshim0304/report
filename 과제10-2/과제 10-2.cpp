#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    cout << "***** ��ȣ���� ���α׷� WHO�� �����մϴ� *****" << endl;
 
    map<string, string> WHO;
    int type = 0;

    while (type < 3) {
        if (type == 0) {
            cout << "����:1, �˻�:2, ����:3>> ";
            cin >> type;
        }

        if (type == 1) {
            string name, code;
            cout << "�̸� ��ȣ>> ";
            cin >> name >> code;
            WHO.insert(make_pair(name, code));
            type = 0;
        }

        if (type == 2) {
            string name, code;
            bool pass = false;
            cout << "�̸�? ";
            cin >> name;
            while (pass == false) {
                cout << "��ȣ? ";
                cin >> code;
                if (WHO[name] == code) {
                    cout << "���!!" << endl;
                    pass = true;
                    type = 0;
                }
                else {
                    cout << "����~~" << endl;
                    pass = false;
                }
            }
        }

        if (type == 3) {
            cout << "���α׷��� �����մϴ�..." << endl;
        }
    }
}