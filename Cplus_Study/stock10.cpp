//#include <iostream>
//#include "stock10.h"
//
//Stock::Stock()
//{
//	cout << "����Ʈ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//	company = "no name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const string& co, long n, double pr)
//{
//	cout << co << "�� ����ϴ� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//	company = co;
//
//	if (n < 0)
//	{
//		cerr << "�ֽ� ���� ������ �� �� �����ϴ�, " << company << " shares�� 0���� �����մϴ�." << endl;
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
//	cout << "�ȳ�, " << company << "!" << endl;
//}
//
//void Stock::buy(long num, double price)
//{
//	if (num < 0)
//	{
//		cout << "���� �ֽļ��� ������ �� �� �����ϴ�. �ŷ� ��ҵǾ����ϴ�." << endl;
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
//		cout << "���� �ֽļ��� ������ �� �� �����ϴ�. �ŷ� ��ҵǾ����ϴ�." << endl;
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
//	cout << "ȸ���� : " << company << "�ֽ� �� : " << shares << endl;
//	cout << "�ְ� : $" << share_val;
//	cout.precision(2);
//	cout << " �ֽ� �� ��ġ : $" << total_val << endl;
//
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
