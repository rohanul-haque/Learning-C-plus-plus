#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        cout << i << endl;
    };

    for (int j = 0; j <= 10; j++)
    {
        if (j == 4)
        {
            continue;
        }
        cout << j << endl;
    }
}