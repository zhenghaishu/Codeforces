 #include<bits/stdc++.h>
using namespace std;

int t, n, l, r;
int main()
{
	scanf("%d", &t);
	while(t--)
    {
		scanf("%d", &n);
		int res = 0;
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d %d", &l, &r),
			res = max(res, l),
			printf("%d ", res > r ? 0 : res++);
		}

		printf("\n");
	}
	
}
