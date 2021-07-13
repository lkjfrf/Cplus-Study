#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));			//난수 발생기에 time씨 넣기
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "목표 거리를 입력하세요(끝낼려면 q) : ";

	while (cin >> target)
	{
		cout << "보폭을 입력하세요 : ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << steps < 
	}
}