#include <iostream>
#include "stonewt.h"

int main()
{
	using namespace std;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;		//�Ͻ��� ��ȯ
	cout << "double ������ ��ȯ : ";
	cout << "Poppins : " << p_wt << "�Ŀ�� " << endl;
	cout << "int ������ ��ȯ : Poppins : " << (int)poppins << "�Ŀ�� " << endl;		//����� ��ȯ
	return 0;
}