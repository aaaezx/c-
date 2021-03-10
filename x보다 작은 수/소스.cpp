#include <iostream>
using namespace std;
int main(){
	int n, x;
	int input;
	cin >> n >> x;
	int min[1000];
	for (int i = 0; i < n; i++){
		cin >> input;
		if (x > input){
			cout << input << " ";
		}
	}
}