#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int n, m;
	cin >> n >> m;
	cout << (n >= 27 ? m : m % (1 << n));
	
	return 0;
}
