#include <iostream>

using namespace std;
int main()
{
    int num,a=1,sum=0,backup;
    cout << "Enter a number: ";
    cin >> num;
    backup = num;

    while (a != 0)
    {
        a = num % 10;
        num = num / 10;
        sum = sum+(a * a * a);

    }
    if (backup == sum)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
    
    return 0;
}