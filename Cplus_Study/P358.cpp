#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

using namespace std;

int main()
{
	char filename[SIZE];
	ifstream inFile;
	cout << "대이터 파일 이름 입력하셈 : ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << filename << "파일을 열 수 없습니다." << endl;
		cout << "프로그램 종료";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "파일의 끝에 도달" << endl;
	else if (inFile.fail())
		cout << "데이터 불일치로 입력이 종료" << endl;
	else
		cout << "알수없는 이유로 종료" << endl;

	if (count == 0)
		cout << "데이터가 없습니다.";
	else
	{
		cout << "읽은 항목의 수 : " << count << endl;
		cout << "합계 : " << sum << endl;
		cout << "평균 : " << sum / count << endl;
	}

	inFile.close();

}
