#include <iostream>
using namespace std;
int main(){
	int cnt = 0;
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 9; j++){
			cout << j << "x" << i << "=" << i*j << '\t';
			cnt++;
		}
		if (cnt % 9 == 0)
			cout << '\n';
	}
}