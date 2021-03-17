#include <iostream>
#include <string>
using namespace std;
class Account{
private:
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int b);
	string getOwner();
	int deposit(int plus);
	int withdraw(int min);
	int inquiry();
};
Account::Account(string n, int i, int b){
	name = n;
	id = i;
	balance = b;
}
string Account::getOwner(){
	return name;
}
int Account::deposit(int plus){
	balance += plus;
	return 0;
}
int Account::withdraw(int min){
	balance -= min;
	return 0;
}
int Account::inquiry(){
	return balance;
}
int main(){
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << " money>> " << a.inquiry() << endl;
	a.withdraw(2000);
	cout << a.getOwner() << " money>> " << a.inquiry() << endl;
}