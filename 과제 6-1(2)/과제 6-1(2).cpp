#include <iostream>
#include <string>

using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
	Person(int i, string n, double w);
};


Person::Person(int i = 1, string n = "Grace", double w = 20.5) {
	id = i;
	name = n;
	weight = w;
}

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}