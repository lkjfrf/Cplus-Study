#include <iostream>
#include <cstdlib>	// rand, srand()�� ����
#include <time.h>	// time()�� ����
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;
using namespace std;

int main()
{
	String name;
	cout << "�ȿ��ϼ��� ���� : " << endl;
	cin >> name;

	cout << name << "��! ������ ���� �Ӵ� " << ArSize << "���� �Է����ּ� (�������� Enter)" << endl;
	String saying[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			saying[i] = temp;		//�����ε��� [] �����ڶ� �����ε��� ���Կ����� ���
	}
	int total = i;
	if (total > 0)
	{
		cout << "������ ���� �Ӵ� �Է�����" << endl;
		for (i = 0; i < total; i++)
		{
			cout << saying[i] << "\n";
			//cout << saying[i][0] << ": " << saying[i] << endl;
		}
		String* shortest = &saying[0];
		String* first = &saying[0];
		for (i = 1; i < total; i++)
		{
			if (saying[i].lenght() < shortest->lenght())
				shortest = &saying[i];
			if (saying[i] < *first)
			if (saying[i] < *first)
				first = &saying[i];
		}
		cout << "���� ª�� �Ӵ� : " << *shortest << endl;
		cout << "���������� ���� �տ� ������ �Ӵ� : " << *first << endl;
		srand(time(0));
		int choice = rand() % total;
		String* favorite = new String(saying[choice]);
		cout << "���� ���� �����ϴ� �Ӵ� : \n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "�� �ƹ��͵� �ȳ����;" << endl;


	cout << "�����α׷��� " << String::HowMany() << "���� String ��ü�� ����� �̻�!" << endl;
	return 0;
}