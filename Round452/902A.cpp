#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int right = 0;
    
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        if(a <= right)
        {
            right = max(b, right);
        }
    }
    
    if(right >= m)
    {
    	cout << "YES" << endl;
	} 
    else
    {
    	cout << "NO" << endl;
	}
        
    return 0;
}
