#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  vector<int> p(n + 1), deg(n + 1), leaves(n);
  
  for (int i = 2; i <= n; i++) 
  {
    cin >> p[i];
    deg[p[i]]++;
  }
  
  for (int i = 1; i <= n; i++) 
  {
    if (deg[i] == 0) 
	{
      leaves[p[i]]++;
    }
  }
  
  for (int i = 1; i <= n; i++) 
  {
    if (deg[i] > 0 && leaves[i] < 3) 
	{
      puts("No");
      return 0;
    }
  }
  
  puts("Yes");
  
  return 0;
}
