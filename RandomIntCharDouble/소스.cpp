#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Random{
public:
	static void seed(){ srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767){
		return rand() % (max - min + 1) + min;
	}
	static char nextAlphabet(){
		char r = rand() % ('z' - 'A' + 1) + 'A';
		return r;
	}
	static double nextDouble(){
		double r = (double)rand() / RAND_MAX;
		return r;
	}
};
int main(){
	Random r;
	r.seed();
	for (int i = 0; i < 10; i++)
		cout << r.nextInt(1, 100) << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << r.nextAlphabet() << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << r.nextDouble() << " ";
	cout << endl;
}