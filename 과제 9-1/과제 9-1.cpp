#include <iostream>
#include <string>

using namespace std;

class Converter {
protected:
    double ratio;
    virtual double convert(double src) { return 0; }
    virtual string getSourceString() { return ""; }
    virtual string getDestString() { return ""; }
public:
    Converter(double ratio) {	this->ratio = ratio;	}
    void run() {
    	double src;
    	cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
	    cout << getSourceString() << "을 입력하세요>> ";  
    	cin >> src;
	    cout << "변환 결과 : " << convert(src) << getDestString() << endl;
    }
};

class KmToMile : public Converter {
protected:
    virtual double convert(double src) { return src / 1.609344; };
    virtual string getSourceString() { return "Km"; };
    virtual string getDestString() { return "Mile"; };
public:
    KmToMile(double ratio) : Converter(ratio) {};
};

int main() {
    KmToMile toMile(1.609344); // 1mile은 1.609344 Km
    toMile.run();
}