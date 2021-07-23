//#include <iostream>
//using std::cout;
//using std::endl;
//
//#include "strngbad.h"
//
//void callme1(StringBad&);
//void callme2(StringBad);
//
//int main()
//{
//	{
//		cout << "내부블록을 시작" << endl;
//		StringBad headline1("Celery Stalks at midnight");
//		StringBad headline2("Lettuce Prey");
//		StringBad sport("스페네쉬 머시기");
//		cout << "headline1 : " << headline1 << endl;
//		cout << "headline2 : " << headline2 << endl;
//		cout << "sport : " << sport << endl;
//		callme1(headline1);
//		cout << "headline1 : " << headline1 << endl;
//		callme2(headline2);
//		cout << "headline2 : " << headline2 << endl;
//		cout << "하나의 객체를 다른 객체로 초기화 :" << endl;
//		StringBad sailor = sport;
//		cout << "sailor : " << sailor << endl;
//		cout << "하나의 객체를 다른객체에 대입:" << endl;
//		StringBad knot;
//		knot = headline1;
//		cout << "knot : " << knot << endl;
//		cout << "이블록 빠져나온다." << endl;
//
//
//	}
//	cout << "main끝" << endl;
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "참조로 전달된StrnigBad : " << endl;
//	cout << "    \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb)
//{
//	cout << "값으로 전달된StrnigBad : " << endl;
//	cout << "    \"" << sb<< "\"\n";
//
//}
