#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define MAX 1000

int dp[MAX + 1];
long long com[MAX + 1][MAX + 1];

int ones(int n)
{
  int cnt = 0;
  while(n)
  {
    if(n%2 == 1)
    {
      cnt++;
    }
    n /= 2;
  }

  return cnt;
}

void combination()
{
  for(int i = 0; i <= MAX; i++)
  {
    com[i][0] = 1;
  }
  for(int i = 1; i <= MAX; i++)
  {
    for(int j = 1; j <= MAX; j++)
    {
      com[i][j] = (com[i - 1][j - 1] + com[i - 1][j]) % MOD;
    }
  }
}

int main()
{
  string n;
  int k;

  combination();

  dp[1] = 0;
  for(int i = 2; i <= MAX; i++)
  {
    dp[i] = dp[ones(i)] + 1;
  }

  cin >> n >> k;

  if(k == 0)
  {
    cout << "1\n";
    return 0;
  }

  long long oneCnt = 0, ans = 0;
  for(int i = 0; i < n.size(); i++)
  {
    if(n[i] == '0')
    {
      continue;
    }

    // 把第j位上的1用0来代替
    for(int j = max(oneCnt, 1LL); j <= n.size(); j++)
    {
      if(dp[j] == k - 1)
      {
        long long temp = com[n.size() - i - 1][j - oneCnt];
        ans = (ans + temp) % MOD;

        // 1-->0，需要0步，需要把这种情况排除掉
        if(i == 0 && k == 1)
        {
          ans = (ans + MOD - 1) % MOD;
        }
      }
    }
    oneCnt++;
  }

  int cnt = 0;
  for(int i = 0; i < n.size(); i++)
  {
    if(n[i] == '1')
    {
      cnt++;
    }
  }

  // 最后要考虑n本身，能否构成一个special number
  if(dp[cnt] == k - 1)
  {
    ans = (ans + 1) % MOD;
  }
  cout << ans << endl;

  return 0;
}

