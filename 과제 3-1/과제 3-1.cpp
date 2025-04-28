#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int year;
	int month;
	int date;
	string dates;

public: 
	void show();
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return date; }
	Date(int y, int m, int d) : year(y), month(m), date(d) {}
	Date(string s) : dates(s) {}
};

void Date::show() {
	int index1 = dates.find("/");
	int index2 = dates.find("/", index1 + 1);
	year = stoi(dates.substr(0, index1));
	month = stoi(dates.substr(index1 + 1, index2 - index1 - 1));
	date = stoi(dates.substr(index2 + 1));
	cout << year << "년 " << month << "월 " << date << "일" << endl;
}

int main() {
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}