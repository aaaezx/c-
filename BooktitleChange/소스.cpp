#include <iostream>
#include <string>
using namespace std;
class Book{
	string str;
	int price;
	char *publishedData;
public:
	Book(){ }
	Book(char *title, int price, char *pData){
		str = title;
		this->price = price;
		publishedData = pData;
	}
	void set(char* title, int price, char *pData){
		str = title;
		this->price = price;
		publishedData = pData;
	}
	void show(){
		cout << str << " " << price << " " << publishedData << endl;
	}
	string bookname(){
		return str;
	}
	void changetitle(char* title){
		str = title;
	}
	~Book(){ }
};
int replaceBookTitle(Book *books, int nbks, char *oldtitle, char *newtitle){
	int index;
	for (int i = 0; i < nbks; i++){
		if (books[i].bookname().compare(oldtitle)==0){
			books[i].changetitle(newtitle);
			index = i;
		}
		if (i == nbks + 1) index = -1;
	}
	return index;
}
int main(){
	Book bookShelf[3] = { Book("c# Programming", 20000, "09012016"),
		Book("c++", 25000, "09022018"), Book() };
	bookShelf[2].set("Java programming", 28000, "1202017");

	bookShelf[0].show();
	bookShelf[1].show();
	cout << endl;
	int n = replaceBookTitle(bookShelf, 3, "c++", "C++");
	if (n < 0)
		cout << "To have no book" << n << endl;
	else
		bookShelf[n].show();
}