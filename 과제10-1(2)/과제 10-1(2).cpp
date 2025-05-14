#include <iostream>
#include <string>

using namespace std;

template <class T>

bool search(T tar, T x[], int size) {
    for (int i = 0; i < size; i++) {
        if (x[i] == tar) return true;
    }
    return false;
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    if (search(100, x, 5))  // 100�� �迭 x�� ���ԵǾ� �ִ°�?
        cout << "100�� �迭 x�� ���ԵǾ� �ִ�";
    else
        cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�";
    cout << endl;

    char c[] = { 'h', 'e', 'l', 'l', 'o' };
    if (search('e', c, 5))  // 'e'�� �迭 c�� ���ԵǾ� �ִ°�?
        cout << "e�� �迭 c�� ���ԵǾ� �ִ�";
    else
        cout << "e�� �迭 c�� ���ԵǾ� ���� �ʴ�";
    cout << endl;
}