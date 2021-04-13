#include <iostream>
#include <string>
using namespace std;
class Person{
	string name;
	string tel;
public:
	Person();
	string getName(){ return name; }
	string getTel(){ return tel; }
	void set(string name, string tel){
		this->name = name;
		this->tel = tel;

	}
};
Person::Person(){}
int main(){
	string name, tel;
	Person *pInf = new Person[3];
	for (int i = 0; i < 3; i++){
		cin >> name >> tel;
		pInf[i].set(name, tel);
	}
	for (int i = 0; i < 3; i++){
		cout << pInf[i].getName() << " ";
	}
	cout << endl;
	cout << "serch name>>";
	string serch;
	cin >> serch;
	for (int i = 0; i < 3; i++){
		if (serch == pInf[i].getName()){
			cout << serch << " " << pInf[i].getTel() << endl;
			break;
		}
		if (i == 2)
			cout << "error" << endl;
	}
}