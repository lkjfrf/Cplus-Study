//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	char automobile[50];
//	int year;
//	double a_price;
//	double b_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "자동차 메이커, 차종 입력하셈 : ";
//	cin.getline(automobile, 50);
//	cout << "연식 : ";
//	cin >> year;
//	cout << "구입 가격 : ";
//	cin >> a_price;
//	b_price = 0.913 * a_price;
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "메이커 차종 : " << automobile << endl;
//	cout << "연식 : " << year<< endl;
//	cout << "구입 가격 : " << a_price << endl;
//	cout << "현재 가격 : " << b_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "메이커 차종 : " << automobile << endl;
//	outFile << "연식 : " << year << endl;
//	outFile << "구입 가격 : " << a_price << endl;
//	outFile << "현재 가격 : " << b_price << endl;
//
//	outFile.close();
//
//}
