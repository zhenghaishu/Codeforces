#include<bits/stdc++.h>
using namespace std;

const int N = 200001;

int main()
{
	int height; 	// 树的高度 = 层数 - 1 
	int cnt[N];		// 每一层的节点总数 
	int parent = 0;	// 根结点为1，其父节点为0 
	bool flag = 1;

	cin >> height;
	for(int layer = 0; layer <= height; layer++)
	{
		cin >> cnt[layer];
		if(layer == 0) 
		{
			continue;
		}
		
		if(cnt[layer - 1] != 1 && cnt[layer] != 1)
		{
			flag = 0;
		}
	}
	
	if(flag)
	{
		puts("perfect");
		return 0;
	}
	
	puts("ambiguous");
	
	for(int layer = 0; layer <= height; layer++)
	{
		// 输出该层节点的父节点 
		for(int node = 1; node <= cnt[layer]; node++)
		{
			cout << parent << " ";
		}
		
		// 父节点指向该层的最右的那个节点 
		parent += cnt[layer];
	}
	
	printf("\n");
	
	parent = 0;
	for(int layer = 0; layer <= height; layer++)
	{
		if(layer != 0 && cnt[layer - 1] != 1 && cnt[layer] != 1)
		{
			// 前n-1个节点的父节点还是原样输出 
			for(int node = 1; node <= cnt[layer] - 1; node++)
			{
				cout << parent << " ";
			}
			
			// 最后节点的父节点往左移一个位置 
			cout << parent - 1 << " ";
			parent += cnt[layer];
			continue; 
		}
		
		for(int node = 1; node <= cnt[layer]; node++)
		{
			cout << parent << " ";
		}
		
		
		parent += cnt[layer];
	}
	
	return 0;
}
