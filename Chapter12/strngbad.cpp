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
	cout << num_strings << ": \"" << str << "\" 按眉 积己\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	strcpy_s(str, 4, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 叼弃飘 按眉 积己\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" 按眉 颇鲍, ";
	--num_strings;
	cout << "巢篮 按眉 荐: " << num_strings << "\n";
	delete[] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
	// TODO: insert return statement here
}
