#include <iostream>
extern double warming;

using namespace std;


void update(double dt);
void local();

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "전역 warming이 " << warming;
	cout << "도로 갱신되었습니다." << endl;

}

void local()
{
	double warming = 0.8;
	cout << "지역 warming은 " << warming << "도 입니다." << endl;
	cout << "그러나 전역은 " << ::warming << "도 입니다." << endl;

}