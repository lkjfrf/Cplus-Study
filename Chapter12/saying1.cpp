//#include <iostream>
//#include "string1.h"
//
//const int ArSize = 10;
//const int MaxLen = 81;
//using namespace std;
//
//int main()
//{
//	String name;
//	cout << "�ȿ��ϼ��� ���� : " << endl;
//	cin >> name;
//
//	cout << name << "��! ������ ���� �Ӵ� " << ArSize << "���� �Է����ּ� (�������� Enter)" << endl;
//	String saying[ArSize];
//	char temp[MaxLen];
//	int i;
//	for (i = 0; i < ArSize; i++)
//	{
//		cout << i + 1 << ": ";
//		cin.get(temp, MaxLen);
//		while (cin && cin.get() != '\n')
//			continue;
//		if (!cin || temp[0] == '\0')
//			break;
//		else
//			saying[i] = temp;		//�����ε��� [] �����ڶ� �����ε��� ���Կ����� ���
//	}
//	int total = i;
//	if (total > 0)
//	{
//		cout << "������ ���� �Ӵ� �Է�����" << endl;
//		for (i = 0; i < total; i++)
//		{
//			cout << saying[i][0] << ": " << saying[i] << endl;
//		}
//		int shortest = 0;
//		int first = 0;
//		for (i = 1; i < total; i++)
//		{
//			if (saying[i].lenght() < saying[shortest].lenght())
//				shortest = i;
//			if (saying[i] < saying[first])
//				first = i;
//		}
//		cout << "���� ª�� �Ӵ� : " << saying[shortest] << endl;
//		cout << "���������� ���� �տ� ������ �Ӵ� : " << saying[first] << endl;
//		cout << "�����α׷��� " << String::HowMany() << "���� String ��ü�� ����� �̻�!" << endl;
//	}
//	else
//		cout << "�Է±���! �̻�" << endl;
//
//}