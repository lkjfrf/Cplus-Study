#include <iostream>
#include "mytime0.h"

int main()
{
	using namespace std;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	Time diff;
	Time adjusted;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	//total = coding.Sum(fixing);

	//total = coding + fixing;
	//cout << "coding + fixing = ";
	//total.Show();
	//cout << endl;

	//Time morefixing(3, 28);
	//cout << "more fixing time = ";
	//morefixing.Show();
	//cout << endl;
	//total = morefixing.operator+(total);
	//cout << "morefixing.operator+(total) = ";
	//total.Show();
	//cout << endl;

	cout << "totalwork time = ";
	total = coding + fixing;
	total.Show();
	cout << endl;

	diff = coding - fixing;
	cout << "coding - fixing = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;
	cout << " total * 1.5 = ";
	adjusted.Show();
	cout << endl;

}