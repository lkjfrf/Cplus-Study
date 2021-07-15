#include <iostream>
#include "stonewt.h"

int main()
{
	using namespace std;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;		//암시적 변환
	cout << "double 형으로 변환 : ";
	cout << "Poppins : " << p_wt << "파운드 " << endl;
	cout << "int 형으로 변환 : Poppins : " << (int)poppins << "파운드 " << endl;		//명시적 변환
	return 0;
}