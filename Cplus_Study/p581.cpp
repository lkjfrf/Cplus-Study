#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main()
{
	cout << "���� warming��" << warming << "���Դϴ�." << endl;
	update(0.1);
	cout << "���� warming��" << warming << "���Դϴ�." << endl;
	local();
	cout << "���� warming��" << warming << "���Դϴ�." << endl;
	return 0;
}