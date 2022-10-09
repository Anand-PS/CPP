#include<iostream>
using namespace std;
int main()
{
    int num;
    bool result;
    cout << "Enter a year: ";
    cin >> num;
    if (num % 400 == 0)
    {
        result = true;
    }
    
    if (num % 100 == 0)
    {
        result = false;
    }
    
    if (num % 4 == 0)
    {
        result = true;
    }
    else
    {
        result = false;
    }

    if (result == true)
        cout << "Leap year";
    else
        cout << "Not a leap year";
    return 0;
}
