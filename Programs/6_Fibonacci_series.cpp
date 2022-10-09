#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int num;
        int n1=0, n2=1, n=0;
        bool rst;
    
        cout << "Enter a number: ";
        cin >> num;

        while (n <= num)
        {
            n = n1 + n2;
            n1 = n2;
            n2 = n;

            if (n == num)
            {
                rst = true;
                break;
            }

            rst = false;
        }

        if (rst)
            cout << "The entered value is in the Fibanocci series"<<endl;
        else
            cout << "The entered value is not in the Fibanocci series"<<endl;
    }
    return 0;
}
