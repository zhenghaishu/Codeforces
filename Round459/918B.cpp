#include <iostream>
#include <map>
using namespace std ;

map <string,string> mp ;

int main()
{
	int n , m ;
	cin >> n >> m ;

	for(int i = 0 ; i < n ; ++i)
	{
		string server , ip ;
		cin >> server >> ip ;
		server = "#" + server ;
		mp[ip] = server ;
	}

	for(int i = 0 ; i < m ; ++i)
	{
		string command , ip;
		cin >> command >> ip ;
		ip.erase(ip.size()-1,1) ;
		cout << command << ' ' << ip << "; " << mp[ip] << '\n' ;
	}

	return 0;
}
