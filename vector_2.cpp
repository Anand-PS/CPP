#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a;

    for(int i=0;i<5;i++)
    {
        a.push_back(i);
    }

    for(auto j=a.begin();j<a.end();j++) // auto keyword can be used if the data type is complex
    cout<<*j<<endl;

    return 0;
}
