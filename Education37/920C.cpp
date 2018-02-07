#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN=200001;

int n;
int a[MAXN];
char op[MAXN];

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

	scanf("%s", op + 1);

	int Max = -1;
	for(int i = 1; i <= n; i++)
    {
		Max = max(Max, a[i]);
		if(Max > i && op[i] == '0')
		{
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");
}
