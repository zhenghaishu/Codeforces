#include<bits/stdc++.h>
using namespace std;

const int N = 200001;

int main()
{
	int height; 	// ���ĸ߶� = ���� - 1 
	int cnt[N];		// ÿһ��Ľڵ����� 
	int parent = 0;	// �����Ϊ1���丸�ڵ�Ϊ0 
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
		// ����ò�ڵ�ĸ��ڵ� 
		for(int node = 1; node <= cnt[layer]; node++)
		{
			cout << parent << " ";
		}
		
		// ���ڵ�ָ��ò�����ҵ��Ǹ��ڵ� 
		parent += cnt[layer];
	}
	
	printf("\n");
	
	parent = 0;
	for(int layer = 0; layer <= height; layer++)
	{
		if(layer != 0 && cnt[layer - 1] != 1 && cnt[layer] != 1)
		{
			// ǰn-1���ڵ�ĸ��ڵ㻹��ԭ����� 
			for(int node = 1; node <= cnt[layer] - 1; node++)
			{
				cout << parent << " ";
			}
			
			// ���ڵ�ĸ��ڵ�������һ��λ�� 
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
