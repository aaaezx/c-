#include <iostream>
using namespace std;
class Storage{
private:
	int nData;
	int *strg;
public:
	Storage(int nsize){
		nData = nsize;
		strg = new int[nData];
		int input;
		for (int i = 0; i < nData; i++){
			cin >> input;
			strg[i] = input;
			for (int j = 0; j < i; j++){
				if (strg[j] == strg[i]){
					cout << "<error>" << endl;
					cin >> input;
					strg[i] = input;
				}
			}
		}
	}
	~Storage(){
		delete[] strg;
	}
	void showList(){
		cout << nData << ": ";
		for (int i = 0; i < nData; i++){
			cout << strg[i] << " ";
		}
		cout << "" << endl;
	}
	void add_Strg(const Storage &s){
		int p = nData;
		int *copy = new int[nData + s.nData];
		for (int i = 0; i < nData; i++)
			copy[i] = strg[i];
		for (int i = 0; i < s.nData; i++){
			bool rep = false;
			for (int j = 0; j < nData; j++){
				if (copy[j] == s.strg[i]){
					rep = true;
					break;
				}
			}
			if (!rep)
				copy[p++] = s.strg[i];
		}
		nData = p;
		delete[] strg;
		strg = new int[nData];
		for (int i = 0; i < nData; i++)
			strg[i] = copy[i];
		delete[] copy;
	}
};
int main(){
	Storage s1(4);
	s1.showList();
	Storage s2(10);
	s2.showList();
	s1.add_Strg(s2);
	s1.showList();
}