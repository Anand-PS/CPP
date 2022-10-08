#include <iostream>
#include<sstream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    cout << "Enter a string of integers separated by commas: ";
    string my_string;
    getline(cin,my_string);

    stringstream str;
    str << my_string;

    string data;
    vector<int>v;

    while (getline(str, data, ','))
    {
        v.push_back(stoi(data));
    }

    sort(v.begin(),v.end());

    for (auto i = v.begin(); i != v.end(); i++) {

        cout << *i << endl;
    }
    
    
} 