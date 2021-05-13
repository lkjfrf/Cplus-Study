#include <iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable* ps = new inflatable;
	cout << "풍선이름 : ";
	cin.get(ps->name, 20);
	cout << "부피 : ";
	cin >> (*ps).volume;
	cout << "가격 : ";
	cin >> ps->price;
	cout << ps->name << ps->price << ps->volume << endl;
	delete ps;

}