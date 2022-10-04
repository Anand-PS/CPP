#include<iostream>
#include<sstream>
//#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name_age;
    cout<<"Enter your name and in a line separated by coma: ";
    cin>>name_age;

    stringstream my_str;
    my_str<<name_age;

    string name,age;

    getline(my_str, name, ',');
    getline(my_str,age);

    cout<<"Hey "<<name+" you are "<<age<<" years old.";

    return 0;
}
