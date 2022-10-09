#include <iostream>
using namespace std;
int main()
{
	long long num, mul;
	cout << "Enter a number: ";
	cin >> num;
	mul = num;

	while (true)
	{
		mul--;
		if (mul == 0)
		{
			break;
		}
		num = num * mul;
	}

	cout << "Factorial: " << num;
	return 0;
}
