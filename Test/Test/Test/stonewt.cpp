#include "stonewt.h"
#include <iostream>
using namespace std;


Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

void Stonewt::show_lbs() const
{
	cout << pounds << "�Ŀ��" << endl;
}

void Stonewt::show_stn() const
{
	cout << stone << "����, " << pds_left << "�Ŀ��" << endl;
}

Stonewt::operator int() const
{
	return int(pounds + 0.5);	// �ݿø� �뵵�� - �׳� double�� int�� ��ȯ�� �Ҽ��κ��� �ݿø����� ���������
}

Stonewt::operator double() const
{
	return pounds;
}

Stonewt Stonewt::operator*(double mult)
{
	return Stonewt(mult * pounds);
}

Stonewt operator*(double mult, const Stonewt& s)
{
	return Stonewt(mult * s.pounds);
}
