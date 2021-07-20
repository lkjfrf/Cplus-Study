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
	cout << pounds << "파운드" << endl;
}

void Stonewt::show_stn() const
{
	cout << stone << "스톤, " << pds_left << "파운드" << endl;
}

Stonewt::operator int() const
{
	return int(pounds + 0.5);	// 반올림 용도로 - 그냥 double을 int로 변환시 소수부분이 반올림없이 사라져버림
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
