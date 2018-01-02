#include <iostream>
#include <string>
using namespace std;

#define MAX 50

int main()
{
	int cnt = 0;
	string s;
	cin >> s;
	
	for(int i = 0; i < s.length(); i++) 
	{
		if('a' <= s.at(i) <= 'z')
		{
			if('a' == s.at(i)|| 'e' == s.at(i) || 'i' == s.at(i) || 'o' == s.at(i) || 'u' == s.at(i))
			{
				cnt++;
			}
		}
		
		if('0' <= s.at(i) <= '9')
		{
			if('1' == s.at(i) || '3' == s.at(i) || '5' == s.at(i) || '7' == s.at(i) || '9' == s.at(i))
			{
				cnt++;
			}
		}
	}
	
	cout << cnt;
}

