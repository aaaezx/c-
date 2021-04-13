#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	int *num_array = new int[num];
	int input, sum=0;
	for (int i = 0; i < num; i++){
		cin >> input;
		num_array[i] = input;
		sum += input;
	}
	cout << (double)sum / num << endl;
		
}