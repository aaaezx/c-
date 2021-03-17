#include <iostream>
using namespace std;
class Tower{
public:
	int height;
	Tower();
	Tower(int a);
	int getHeight();
};
Tower::Tower() :Tower(1){}
Tower::Tower(int a){
	height = a;
}
int Tower::getHeight(){
	return height;
}
int main(){
	Tower myTower;
	Tower seoulTower(100);
	cout << "Height = " << myTower.getHeight() << endl;
	cout << "Height = " << seoulTower.getHeight() << endl;
}