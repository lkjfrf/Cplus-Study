#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n �����Ϸ��� Q�� �Է��Ͻʽÿ�" << endl;
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << 'a';
			continue;
		}

		switch (ch)
		{
		case 'A':
		case'a':
			cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ� : ";
			cin >> po;
			if (st.isfull())
				cout << "������ ���� �� �ֽ��ϴ�. \n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
			{
				cout << "������ ����ֽ��ϴ�." << endl;
			}
			else
			{
				st.pop(po);
				cout << "#" << po << " �ֹ����� ó���߽��ϴ�." << endl;
			}
			break;
		}
		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n �����Ϸ��� Q�� �Է��Ͻʽÿ�" << endl;

	}
	cout << "���α׷� ����";

}