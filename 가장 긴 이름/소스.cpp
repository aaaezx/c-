#include <iostream>
#include <string>
using namespace std;
int main(){
	char name[100];
	char temp[100];
	int max = 0;
	for (int i = 0; i < 5; i++){
		cin.getline(name, 100, ';');
		cout << i + 1 << " " << name << endl;
		if (max < strlen(name)){
			max = strlen(name);
			strcpy(temp, name);
		}
	}
	cout << temp << endl;
}