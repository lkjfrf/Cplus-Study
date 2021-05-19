#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

using namespace std;

int main()
{
	char filename[SIZE];
	ifstream inFile;
	cout << "������ ���� �̸� �Է��ϼ� : ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << filename << "������ �� �� �����ϴ�." << endl;
		cout << "���α׷� ����";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "������ ���� ����" << endl;
	else if (inFile.fail())
		cout << "������ ����ġ�� �Է��� ����" << endl;
	else
		cout << "�˼����� ������ ����" << endl;

	if (count == 0)
		cout << "�����Ͱ� �����ϴ�.";
	else
	{
		cout << "���� �׸��� �� : " << count << endl;
		cout << "�հ� : " << sum << endl;
		cout << "��� : " << sum / count << endl;
	}

	inFile.close();

}
