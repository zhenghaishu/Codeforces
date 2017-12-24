#include <bits/stdc++.h>
using namespace std;

#define MAX_N 10001

int c[MAX_N];
bool vis[MAX_N];
vector<int> adjvex[MAX_N];

int ans = 1;

void dfs(int v)
{
    vis[v] = true;
    for (int i = 0; i < adjvex[v].size(); i++) {
        int u = adjvex[v][i];
        if (!vis[u]) {
            if (c[u] != c[v]) ans++;
            dfs(u);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int p;
        scanf("%d", &p);
        adjvex[i].push_back(p);
        adjvex[p].push_back(i);
    }
    for (int i = 1; i <= n; i++)
        scanf("%d", &c[i]);
    dfs(1);
    printf("%d\n", ans);
    return 0;
}
