#include <iostream>
#include <string>

using namespace std;

class Phone { // 전화 번호를 표현하는 클래스
    string name;
    string telnum;
    string address;
public:
    Phone(string name = "", string telnum = "", string address = "") {
        this->name = name;
        this->telnum = telnum;
        this->address = address;
    }
    friend istream& operator>>(istream& is, Phone& x); 
    friend ostream& operator<<(ostream& os, Phone& x);
};

istream& operator>>(istream& stream, Phone& x) {
    cout << "이름: ";
    cin >> x.name;
    cout << "전화번호: ";
    cin >> x.telnum;
    cout << "주소: ";
    cin >> x.address;
    return stream;
}

ostream& operator<<(ostream& stream, Phone& x) {
    stream << "(" << x.name << "," << x.telnum << "," << x.address << ")";
    return stream;
}

int main() {
    Phone girl, boy;
    cin >> girl >> boy; //전화 번호를 키보드로부터 읽는다.
    cout << girl << endl << boy << endl; // 전화 번호를 출력한다.
}