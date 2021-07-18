#include <iostream>
using namespace std;
#include "stonewt.h"
void display(const Stonewt& st, int n);

int main()
{
	Stonewt pavarotti = 2775;
	Stonewt wolfe(285.7);
	Stonewt taft(21,8);

	cout << "�׳� ������ ������ : ";
	pavarotti.show_stn();
	cout << "Ž���� ������ : ";
	wolfe.show_stn();
	cout << "������� ������ : ";
	taft.show_lbs();
	pavarotti = 276.8;
	taft = 325;
	cout << "����Ļ縦 ��ģ �� �׳� ������ ������ : ";
	pavarotti.show_stn();
	cout << "����Ļ縦 ��ģ �� ������� ������ : ";
	taft.show_lbs();
	display(taft, 2);
	taft.show_stn();
}

void display(const Stonewt& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "��! ";
		st.show_stn();
	}
}
