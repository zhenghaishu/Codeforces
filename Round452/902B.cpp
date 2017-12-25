#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

int c[MAX];
bool visited[MAX];
vector<int> adjvex[MAX];

int ans = 1;

void dfs(int v)
{
    visited[v] = true;
    for (int i = 0; i < adjvex[v].size(); i++) 
	{
        int u = adjvex[v][i];
        if (!visited[u]) 
		{
            if (c[u] != c[v]) 
			{
				ans++;
			}
            dfs(u);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) 
	{
        int p;
        scanf("%d", &p);
        adjvex[i].push_back(p);
        adjvex[p].push_back(i);
    }
    
    for (int i = 1; i <= n; i++)
    {
    	scanf("%d", &c[i]);
	}
	
    dfs(1);
    printf("%d\n", ans);
    
    return 0;
}
