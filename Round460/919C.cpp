#include<bits/stdc++.h>
using namespace std;

int n,m,k;
char s[2001];
int ans,row[2001];

int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s+1);

        int col = 0;
        for (int j = 1; j <= m; j++)
        {
            if(s[j] == '.')
            {
                col++, row[j]++;
            }
            else
            {
                col=0, row[j]=0;
            }

            if(k > 1)
            {
                ans += (col >= k);
            }

            ans += (row[j] >= k);
        }
    }

    printf("%d\n",ans);
}
