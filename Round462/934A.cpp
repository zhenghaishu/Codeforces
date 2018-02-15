#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j;
    long long a[51], b[51], c[51];
	cin >> n >> m;

	for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

	for(j = 0; j < m; j++)
    {
        cin >> b[j];
    }

	for(i = 0; i < n; i++)
	{
		c[i] = a[i] * b[0];
		for(j = 0; j < m; j++)
		{
			c[i] = max(a[i] * b[j], c[i]);
		}
	}

	sort(c, c + n);

	cout << c[n - 2];

	return 0;
}
