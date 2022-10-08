#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string cInput;
	cout << "Enter a string separated by commas: ";
	cin >> cInput;

	stringstream ss;
	ss << cInput;

	vector<int>v;
	string temp;
	while (getline(ss, temp, ','))
	{
		v.push_back(stoi(temp));
	}
	
	sort(v.begin(), v.end());

	int vSize = v.size();

	cout << "Second largest number: " << v[vSize - 2];


	return 0;
}