#include<bits/stdc++.h>
#include<unistd.h>

using namespace std;

int main()
{
    int ID;
    string name;

    cout<<"Enter your ID: ";
    cin>>ID;

    cin.ignore();
    cout<<"Enter your full name: ";
    getline(cin,name);

    sleep(1.5); // simple delay in seconds, just for rasam

    cout<<"\nHay "<<name<<" your ID is, "<<ID<<endl;
    sleep(1.5); // simple delay in seconds
    return 0;
}
