#include <iostream>

using namespace std;

const int ArSize = 6;

int main()
{
	float naaq[ArSize];
	cout << "NAAQ������ �Է��ϼ� \n" << ArSize << "���� ������ ��� �Է��ϰų�, ������ �Է��ϸ� Ż���մϴ�." << endl;

	int i = 0;
	float temp;

	do while (i <= ArSize && temp >= 0)
	{
		if (i <= ArSize)
		{
			cout << i << "�� �� : ";
			cin >> temp;
		}

		naaq[i] = temp;
		++i;
	}


}

