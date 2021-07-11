#include <cmath>
#include "vect.h"
using namespace std;

namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);		// 라디안 내의 각도를 계산 57.295.....

	void Vector::set_mag()		// 크기 설정
	{
		mag = sqrt(x * x + y * y);					//제곱근
	}
	
	void Vector::set_ang()		// 각도 설정
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}

	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)	//직각 좌표 벡터
		{
			x = n1;
			x = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)	// 극 좌표 벡터
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()에 전달된 제3의 매개변수가 잘못됨" << endl;
			cout << "그래서 벡터를 0으로 설정" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}

	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)	//직각 좌표 벡터
		{
			x = n1;
			x = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)	// 극 좌표 벡터
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()에 전달된 제3의 매개변수가 잘못됨" << endl;
			cout << "그래서 벡터를 0으로 설정" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
		cout << "파괴자 두두등장" << endl;
	}

	
	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector& b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const	//바로 위 연산자가 실행되도록 부호바꿈
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
			os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
		else
			os << "Vector 객체의 모드지정이 틀림" << endl;
		return os;
	}


}