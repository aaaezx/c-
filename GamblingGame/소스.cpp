#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Player{
	string name;
public:
	void getName(string name){
		this->name = name;
	}
	string findName(){
		return name;
	}
};
class GamblingGame{
	Player *p = new Player[2];
public:
	GamblingGame(){
		cout << "Game Start" << endl;
		srand(time(0));
	}
	void playName(){
		string name;
		cout << "first player name : ";
		getline(cin, name);
		p[0].getName(name);
		cout << "second player name : ";
		getline(cin, name);
		p[1].getName(name);
	}
	void gameStart(){
		int i = 0;
		int r[3];
		string enter;
		while (1){
			cout << p[i % 2].findName() << ">> ";
			getline(cin, enter);
			cout << "\t\t";
			for (int i = 0; i < 3; i++){
				r[i] = rand() % 3;
				cout << r[i] << "\t";
			}
			if (r[0] == r[1] && r[1] == r[2]){
				cout << p[i % 2].findName() << " win" << endl;
				break;
			}
			else cout << "fali" << endl;
			i++;
		}
	}
};
int main(){
	GamblingGame g;
	g.playName();
	g.gameStart();
}