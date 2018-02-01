#include<iostream>
using namespace std;

int main()
{
	int i = 18;
	int cnt = 0;
	int n;
	cin >> n;

	while(i++)
	{
		int x = i;
		int sum = 0;

		while(x)
        {
            sum += x % 10;
            x /= 10;
        }

		if (sum == 10)
        {
            cnt++;
            if (cnt == n)
            {
                cout << i;
                break;
            }
        }
	}

	return 0;
}
