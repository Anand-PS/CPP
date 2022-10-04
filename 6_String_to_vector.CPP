//#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;

    string datas;
    cout<<"Enter datas separated by coma: ";
    cin>>datas;

    stringstream ss;

    ss.str(datas);

    string tempString;

    while(getline(ss,tempString,','))
    {
        v.push_back(stoi(tempString));
    }

    cout<<"Parsed values are,\n";

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }


    return 0;
}
