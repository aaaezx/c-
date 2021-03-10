#include <iostream>
using namespace std;
int main(){
	int n, temp=1, cnt=1, i=1;
	cin >> n;
	if (n == 1){
		cnt = 1;
	}
	else{
		while (1){
			cnt++;
			temp += 6 * i;
			if (temp >= n)
				break;
			i++;
		}
	}
	cout << cnt << '\n';
}