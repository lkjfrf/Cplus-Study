#include <iostream>
using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
	int cookies[ArSize] = { 1,2,3,4,5,6,7,8 };
	int sum = sum_arr(cookies, ArSize);
	cout << "¸ÔÀº °úÀÚ ÇÕ : " << sum << endl;
}

int sum_arr(int arr[], int n)
{
	int total = 0;

	for (int i = 0; i < ArSize; i++)
	{
		total += arr[i];
	}

	return total;
}

