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
	cout << "ǳ���̸� : ";
	cin.get(ps->name, 20);
	cout << "���� : ";
	cin >> (*ps).volume;
	cout << "���� : ";
	cin >> ps->price;
	cout << ps->name << ps->price << ps->volume << endl;
	delete ps;

}