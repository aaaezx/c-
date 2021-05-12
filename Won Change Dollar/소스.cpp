#include <iostream>
#include <string>
using namespace std;
class Coverter{
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSrcString() = 0;
	virtual string getDestString() = 0;
public:
	Coverter(double ratio){ this->ratio = ratio; }
	void run(){
		double src;
		cout << getSrcString() << " change " << getDestString() << endl;
		cout << getSrcString() << " >> ";
		cin >> src;
		cout << convert(src) << getDestString() << endl;
	}
};
class Change : public Coverter{
	double money;
public:
	Change(double money) :Coverter(money){ this->money = money; }
	double convert(double src){
		return src / money;
	}
	string getSrcString(){
		return "won";
	}
	string getDestString(){
		return "Dollar";
	}
};
int main(){
	Change ch(1010);
	ch.run();
}