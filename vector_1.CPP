#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a;

    a.assign(3,4);  //insert value 4 in first 3 index

    cout<<"values: "<<endl;

    for(int i=0; i<a.size();i++)
    {
       cout<<"a["<<i<<"] : "<<a[i]<<endl;
    }
    cout<<endl;

    a.push_back(50);
    cout<<"after push back the 3rd index is: "<<a[3]<<endl;

    cout<<"size after push back:"<<a.size()<<endl;

    a.pop_back();

    cout<<"size after pop back: "<<a.size()<<endl;


    a.insert(a.begin(),1);

    cout<<"begining value after inseting: "<<a[0]<<endl;

    cout<<"size after inserting "<<a.size()<<endl;

    cout<<"\nvalues: "<<endl;

    for(int i=0; i<a.size();i++)
    {
       cout<<"a["<<i<<"] : "<<a[i]<<endl;
    }
    cout<<endl;

    a.clear();

    cout<<"size "<<a.size()<<endl;


}
