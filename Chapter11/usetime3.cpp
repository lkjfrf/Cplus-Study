#include <iostream>
#include "mytime3.h"

int main()
{
	using namespace std;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida¿Í TOsca : ";
	cout << aida << " / " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca : " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida * 1.17 : " << temp << endl;


}