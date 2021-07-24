#include <iostream>
#include <cstdlib>	// rand, srand()를 위해
#include <time.h>	// time()을 위해
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;
using namespace std;

int main()
{
	String name;
	cout << "안여하세여 성함 : " << endl;
	cin >> name;

	cout << name << "씨! 간단한 영어 속담 " << ArSize << "개만 입력해주셍 (끝낼려면 Enter)" << endl;
	String saying[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			saying[i] = temp;		//오버로딩된 [] 연산자랑 오버로딩된 대입연산자 사용
	}
	int total = i;
	if (total > 0)
	{
		cout << "다음과 같은 속담 입력햇음" << endl;
		for (i = 0; i < total; i++)
		{
			cout << saying[i] << "\n";
			//cout << saying[i][0] << ": " << saying[i] << endl;
		}
		String* shortest = &saying[0];
		String* first = &saying[0];
		for (i = 1; i < total; i++)
		{
			if (saying[i].lenght() < shortest->lenght())
				shortest = &saying[i];
			if (saying[i] < *first)
			if (saying[i] < *first)
				first = &saying[i];
		}
		cout << "가장 짧은 속담 : " << *shortest << endl;
		cout << "사전순으로 가장 앞에 나오는 속담 : " << *first << endl;
		srand(time(0));
		int choice = rand() % total;
		String* favorite = new String(saying[choice]);
		cout << "내가 가장 좋아하는 속담 : \n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "왜 아무것도 안너헝용;" << endl;


	cout << "이프로그램은 " << String::HowMany() << "개의 String 객체를 사용함 이상!" << endl;
	return 0;
}