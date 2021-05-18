//#include <iostream>
//
//using namespace std;
//
//const int ArSize = 6;
//
//int main()
//{
//	float naaq[ArSize];
//	cout << "NAAQ지수를 입력하셈 \n" << ArSize << "명의 데이터 모두 입력하거나, 음수를 입력하면 탈출합니다." << endl;
//
//	int i = 0;
//	float temp;
//
//	do 
//	{
//		if (i <= ArSize)
//		{
//			cout << i << "번 값 : ";
//			cin >> temp;
//		}
//
//		naaq[i] = temp;
//		++i;
//	} while (i <= ArSize && temp >= 0);
//
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << naaq[i];
//	}
//
//	return 0;
//}
//
