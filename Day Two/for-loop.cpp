#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
        /* code */
    }

    int sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}