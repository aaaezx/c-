#include <iostream>
using namespace std;
class CoffeeMachine{
private:
	int coffe;
	int water;
	int suga;
public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};
CoffeeMachine::CoffeeMachine(int c, int w, int s){
	coffe = c;
	water = w;
	suga = s;
}
void CoffeeMachine::drinkEspresso(){
	coffe -= 1;
	water -= 1;
}
void CoffeeMachine::drinkAmericano(){
	coffe -= 1;
	water -= 2;
}
void CoffeeMachine::drinkSugarCoffee(){
	coffe -= 1;
	water -= 2;
	suga -= 1;
}
void CoffeeMachine::fill(){
	coffe = 10;
	water = 10;
	suga = 10;
}
void CoffeeMachine::show(){
	cout << "coffee>> " << coffe << " water>> " << water << " suga>> " << suga << endl;
}
int main(){
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}