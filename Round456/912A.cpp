#include <iostream>
using namespace std;

int main() 
{
	long long A, B;
	long long x, y, z;
	cin >> A >> B;
	cin >> x >> y >> z; 
	
	long long yellow = max(2 * x + y - A, 0LL);
	long long blue = max(y + 3 * z - B, 0LL);
	
	cout << yellow + blue;
	
	return 0;	
}
