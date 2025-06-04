#include <iostream>
#include <string>

using namespace std;

int getGrade(int score) {
	if (score < 0 || score > 100) return -1;
	if (score < 60) return 4;
	if (score < 70) return 3;
	if (score < 80) return 2;
	if (score < 90) return 1;
	if (score <= 100) return 0;
}

int main() {
	int score;
	int grade;
	char gradeList[5] = { 'A', 'B', 'C', 'D', 'F' };

	while (1) {
		cout << "0~100 ������ ������ �Է��ϼ���>>";
		cin >> score;
		grade = getGrade(score);
		if (grade == -1)
			cout << score << " : ���� �Է��� �߸��Ǿ����ϴ�." << endl;
		else
			cout << gradeList[grade] << "����" << endl;
	}
}