#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter a string: ";
	string cInput;
	cin >> cInput;

	int len = cInput.length();
	//cout << len;

	string newString, a;

	for (int i = len - 1; i >= 0; i--)
	{
		newString = cInput[i];
		a.append(newString);
	}

	cout << a;

	return 0;

}