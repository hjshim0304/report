#include <iostream>
#include <string>

using namespace std;

class Phone { // ��ȭ ��ȣ�� ǥ���ϴ� Ŭ����
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
    cout << "�̸�: ";
    cin >> x.name;
    cout << "��ȭ��ȣ: ";
    cin >> x.telnum;
    cout << "�ּ�: ";
    cin >> x.address;
    return stream;
}

ostream& operator<<(ostream& stream, Phone& x) {
    stream << "(" << x.name << "," << x.telnum << "," << x.address << ")";
    return stream;
}

int main() {
    Phone girl, boy;
    cin >> girl >> boy; //��ȭ ��ȣ�� Ű����κ��� �д´�.
    cout << girl << endl << boy << endl; // ��ȭ ��ȣ�� ����Ѵ�.
}