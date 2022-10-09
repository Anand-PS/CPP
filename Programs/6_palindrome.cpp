#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num,numInput;
	int revNo = 10;
	string num_in_string;


	cout << "Enter a number: ";
	cin >> num;
	numInput = num;

	while(num!=0)
	{
		int temp = num % 10;
		num = num / 10;
		string tempStr= to_string(temp);
		num_in_string.append(tempStr);
	}

	revNo = stoi(num_in_string);

	if (numInput == revNo)
	{
		cout << "Palindrom";
	}
	else
	{
		cout << "Not a palindrom!";
	}

}
