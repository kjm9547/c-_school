#include <iostream>
using namespace std;
class Converter {
protected:
	double ratio;;
	virtual double convert(double src) = 0;//���� ���� �Լ�
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};
class KmToMile :public Converter{
public:
	KmToMile(double src) :Converter(src) {};
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "Km"; }
	string getDestString() { return "mile"; }
};
int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}