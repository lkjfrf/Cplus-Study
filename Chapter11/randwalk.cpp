//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "vect.h"
//
//int main()
//{
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));			//���� �߻��⿡ time�� �ֱ�
//	double direction;
//	Vector step;				// Vecotr �� ��ü ����
//	Vector result(0.0, 0.0);		// Vector �� ��ü ����
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "��ǥ �Ÿ��� �Է��ϼ���(�������� q) : ";
//
//	while (cin >> target)		// target�� �Է��� ������������ 
//	{
//		cout << "������ �Է��ϼ��� : ";
//		if (!(cin >> dstep))		// dstep�� �Է��� �������� break; �� �Ʒ� while�� ����
//			break;
//
//		while (result.magval() < target)	// result.magval = �Ѱ����� ���Ͱ� < ��ǥ�Ÿ�
//		{
//			direction = rand() % 360;		// ������ direction ���� ����
//			step.reset(dstep, direction, Vector::POL);	// step ��ü �ϼ�
//			result = result + step;			// ������ �����ε��� ���� result�� ������ġ ����
//			steps++;		// �Ѱ����� �߰�
//		}
//		cout << steps << "������ ���� �� ������ ���� ��ġ : \n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " �Ǵ� \n" << result << endl;
//		cout << "������ ��տ��� ��� ��� �Ÿ� = " << result.magval() / steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "��ǥ�Ÿ��� �Է��ϼ��� (�������� q) : ";
//	}
//	cout << "���α׷� ����" << endl;
//	cin.clear();
//	while (cin.get() != 'n')
//		continue;
//	return 0;
//}