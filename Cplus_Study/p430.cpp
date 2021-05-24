//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct polar
//{
//	double distnace;
//	double angle;
//};
//
//struct rect
//{
//	double x;
//	double y;
//};
//
//void rect_to_polar(const rect* pxy, polar* pda);
//void show_polar(const polar* pda);
//
//int main()
//{
//	rect rplace;
//	polar pplace;
//
//	cout << "x값과 y값을 입력 : ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);
//		cout << "x값과 y값을 입력하십시오(끝낼려면 q입력) : ";
//	}
//
//	cout << "프로그램 종료";
//}
//
//void rect_to_polar(const rect* pxy, polar* pda)
//{
//	pda->distnace = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}
//
//void show_polar(const polar* pda)
//{
//	const double Rad_to_deg = 57.29577951;
//	
//	cout << "거리 = " << pda->distnace;
//	cout << ",각도 = " << pda->angle * Rad_to_deg;
//	cout << "도" << endl;
//}
//
