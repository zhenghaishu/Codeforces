#include<cstdio>
int main()
{
	int n, i;
	scanf("%d", &n);
	if(n > 36)
	{
		puts("-1");

		return 0;
	}

	for(i = 2; i <= n; i += 2)
	{
        putchar('8');
	}

	if(n & 1)
    {
        putchar('6');
    }

	return 0;
}
