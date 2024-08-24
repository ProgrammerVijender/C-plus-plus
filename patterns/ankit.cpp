#include <iostream>
using namespace std;

int main()
{

    int n = 4, c = 1, i;
    int a = 0;
    for (i = 1; i < n; i++)
    {

        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            
        }

        cout << endl;
    }
    return 0;
}