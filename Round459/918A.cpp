#include <iostream>
using namespace std;

#define FSIZE 18    // fibonacci数列的第17个数大于1000
int fibo[FSIZE];
int n;
char res[1001];

void calcFibo()
{
    fibo[1] = 1;
    fibo[2] = 2;
    for(int i = 3; i < FSIZE; i++)
    {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        res[i] = 'o';
    }

    for (int i = 1; i < FSIZE; ++i)
    {
        if (fibo[i] > n)
        {
            break;
        }

        res[fibo[i]] = 'O';
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << res[i];
    }
}

int main()
{
    calcFibo();
    solve();

    return 0;
}
