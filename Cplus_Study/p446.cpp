//#include <iostream>
//using namespace std;
//
//double gildong(int);
//double moonsoo(int);
//void estimate(int lines, double (*pf)(int));
//
//int main()
//{
//	int code;
//
//	cout << "필요한 코드 행 수를 입력 : ";
//	cin >> code;
//	cout << "홍길동 시간 예상 : " << endl;
//	estimate(code, gildong);
//	cout << "박문수 시간 예상 ; " << endl;
//	estimate(code, moonsoo);
//}
//
//double gildong(int lns)
//{
//	return 0.05 * lns;
//}
//
//double moonsoo(int lns)
//{
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double(*pf)(int))
//{
//	cout << lines << "행을 작성하는데 ";
//	cout << (*pf)(lines) << endl;
//}
