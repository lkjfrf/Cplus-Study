#include <iostream>
using namespace std;
#include "stonewt.h"
void display(const Stonewt& st, int n);

int main()
{
	Stonewt pavarotti = 2775;
	Stonewt wolfe(285.7);
	Stonewt taft(21,8);

	cout << "테너 가수의 몸무게 : ";
	pavarotti.show_stn();
	cout << "탐정의 몸무게 : ";
	wolfe.show_stn();
	cout << "대통령의 몸무게 : ";
	taft.show_lbs();
	pavarotti = 276.8;
	taft = 325;
	cout << "저녁식사를 마친 후 테너 가수의 몸무게 : ";
	pavarotti.show_stn();
	cout << "저녁식사를 마친 후 대통령의 몸무게 : ";
	taft.show_lbs();
	display(taft, 2);
	taft.show_stn();
}

void display(const Stonewt& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "와! ";
		st.show_stn();
	}
}
