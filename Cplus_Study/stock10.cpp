//#include <iostream>
//#include "stock10.h"
//
//Stock::Stock()
//{
//	cout << "디폴트 생성자가 호출되었습니다." << endl;
//	company = "no name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const string& co, long n, double pr)
//{
//	cout << co << "를 사용하는 생성자가 호출되었습니다." << endl;
//	company = co;
//
//	if (n < 0)
//	{
//		cerr << "주식 수는 음수가 될 수 업습니다, " << company << " shares를 0으로 설정합니다." << endl;
//		shares = 0;
//	}
//	else
//	{
//		shares = n;
//	}
//	share_val = pr;
//	set_tot();
//}
//
//Stock::~Stock()
//{
//	cout << "안녕, " << company << "!" << endl;
//}
//
//void Stock::buy(long num, double price)
//{
//	if (num < 0)
//	{
//		cout << "매입 주식수는 음수가 될 수 없습니다. 거래 취소되었습니다." << endl;
//	}
//	else
//	{
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price)
//{
//	if (num < 0)
//	{
//		cout << "매입 주식수는 음수가 될 수 없습니다. 거래 취소되었습니다." << endl;
//	}
//	else
//	{
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price)
//{
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show()
//{
//	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//	streamsize prec = cout.precision(3);
//
//	cout << "회수명 : " << company << "주식 수 : " << shares << endl;
//	cout << "주가 : $" << share_val;
//	cout.precision(2);
//	cout << " 주식 총 가치 : $" << total_val << endl;
//
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
