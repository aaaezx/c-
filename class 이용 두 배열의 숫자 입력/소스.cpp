#include <iostream>
using namespace std;
class Storage{
private:
	int nData;
	int strg[20];
public:
	Storage(int nsize){
		nData = nsize;
		strg[nData];
		int input;
		cout << "input >>";
		for (int i = 0; i < nData; i++){
			cin >> input;
			strg[i] = input;
		}
	}
	void showList(){
		cout << nData << " : ";
		for (int i = 0; i < nData; i++){
			cout << strg[i] << " ";
		}
		cout << "" << endl;
	}
	void multipleN(int num){
		int cnt = 0;
		for (int i = 0; i < nData; i++){
			int temp = strg[i] % 10;
			if (temp > 0){
				if (temp%num == 0){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	void add_Strg(Storage s){
		int sum = nData + s.nData;
		int *copy = new int[sum];
		for (int i = 0; i < nData; i++){
			copy[i] = strg[i];
		}
		int z = 0;
		for (int i = nData; i < sum; i++){
			copy[i] = s.strg[z];
			z++;
		}
		strg[sum];
		for (int i = 0; i < sum; i++){
			strg[i] = copy[i];
		}
		delete[] copy;
		nData = sum;
	}
};
int main(){
	Storage s1(4);
	s1.showList();
	Storage s2(10);
	s2.showList();
	s1.multipleN(3);
	s1.add_Strg(s2);
	s1.showList();
}