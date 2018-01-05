#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m = 1000000000;
	int a;
	vector <int> vec;
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &a);
		if (a < m) 
		{ 
			m = a; 
			vec.clear(); 
		}
		if (a == m) 
		{
			vec.push_back(i);			
		}
	}
	
	int distance  = 100000;
	for (int i = 0; i + 1 < vec.size(); i++)
	{
		distance = min(distance, vec[i + 1] - vec[i]);
	}
		
	printf("%d\n", distance);
	
	return 0;
}
