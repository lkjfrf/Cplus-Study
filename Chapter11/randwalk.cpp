#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));			//���� �߻��⿡ time�� �ֱ�
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "��ǥ �Ÿ��� �Է��ϼ���(�������� q) : ";

	while (cin >> target)
	{
		cout << "������ �Է��ϼ��� : ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << steps < 
	}
}