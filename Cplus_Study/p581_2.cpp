#include <iostream>
extern double warming;

using namespace std;


void update(double dt);
void local();

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "���� warming�� " << warming;
	cout << "���� ���ŵǾ����ϴ�." << endl;

}

void local()
{
	double warming = 0.8;
	cout << "���� warming�� " << warming << "�� �Դϴ�." << endl;
	cout << "�׷��� ������ " << ::warming << "�� �Դϴ�." << endl;

}