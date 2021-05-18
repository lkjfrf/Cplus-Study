//#include <iostream>
//const int MAX = 5;
//
//int main()
//{
//	using namespace std;
//
//	double fish[MAX];
//	cout << "물고기 무게 입력 : " << endl;
//	cout << "물고기는 최대 " << MAX << "까지 가능" << endl << "입력끝나면 q를 누르셈" << endl;
//
//	cout << "fish #1 : ";
//	int i = 0;
//	while (i < MAX && cin >> fish[i])
//	{
//		if (++i < MAX)
//			cout << "fish #" << i + 1 << ": ";
//	}
//
//	double total = 0.0;
//	for (int j = 0; j < i; j++)
//		total += fish[j];
//
//	if (i == 0)
//		cout << "형 형신이야? 한마리도 못잡넹 \n";
//	else
//		cout << "물고기" << i << "마리의 평균무게는 " << total / i << "그램입니다. " << endl;
//
//
//}