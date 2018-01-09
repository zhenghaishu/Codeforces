#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, L;
  scanf("%d %d", &n, &L);
  vector<int> c(n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &c[i]);
  }

  for (int i = 0; i < n - 1; i++)
  {
    c[i + 1] = min(c[i + 1], 2 * c[i]);
  }

  long long ans = (long long) 1e18;
  long long sum = 0;

  for (int i = n - 1; i >= 0; i--)
  {
    int need = L / (1 << i);
    sum += (long long) need * c[i];
    L -= need << i;
    // more than L
    int extraCost = (L > 0) * c[i];
    ans = min(ans, sum + extraCost);
  }

  cout << ans << endl;

  return 0;
}
