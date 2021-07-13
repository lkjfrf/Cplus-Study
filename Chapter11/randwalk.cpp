//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "vect.h"
//
//int main()
//{
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));			//난수 발생기에 time씨 넣기
//	double direction;
//	Vector step;				// Vecotr 빈 객체 생성
//	Vector result(0.0, 0.0);		// Vector 빈 객체 생성
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "목표 거리를 입력하세요(끝낼려면 q) : ";
//
//	while (cin >> target)		// target에 입력이 오류날때까지 
//	{
//		cout << "보폭을 입력하세요 : ";
//		if (!(cin >> dstep))		// dstep에 입력이 오류날때 break; 후 아래 while문 실행
//			break;
//
//		while (result.magval() < target)	// result.magval = 총걸음의 벡터값 < 목표거리
//		{
//			direction = rand() % 360;		// 랜덤한 direction 각도 생성
//			step.reset(dstep, direction, Vector::POL);	// step 객체 완성
//			result = result + step;			// 연산자 오버로딩을 통해 result에 최종위치 저장
//			steps++;		// 한걸음씩 추가
//		}
//		cout << steps << "걸음을 걸은 후 술고래의 현재 위치 : \n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " 또는 \n" << result << endl;
//		cout << "걸음당 기둥에서 벗어난 평균 거리 = " << result.magval() / steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "목표거리를 입력하세요 (끝낼려면 q) : ";
//	}
//	cout << "프로그램 종료" << endl;
//	cin.clear();
//	while (cin.get() != 'n')
//		continue;
//	return 0;
//}