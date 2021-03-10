#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	for (int line = 0; line < num; line++){
		for (int star = 0; star <= line; star++){
			cout << "*";
		}
		cout << '\n';
	}
}