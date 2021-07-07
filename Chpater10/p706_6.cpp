#include "p706_6.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}

Move Move::add(const Move& m) const
{
	cout << "aaddµÊ" << endl;
	return Move(x + m.x, y+ m.y);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
