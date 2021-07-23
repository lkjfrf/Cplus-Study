#include "strngbad.h"
#include <cstring>
using namespace std;

int StringBad::num_strings = 0;
StringBad::StringBad(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len+1,  s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ��ü ����\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	strcpy_s(str, 4, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ����Ʈ ��ü ����\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" ��ü �ı�, ";
	--num_strings;
	cout << "���� ��ü ��: " << num_strings << "\n";
	delete[] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
	// TODO: insert return statement here
}
