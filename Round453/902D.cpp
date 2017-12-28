#include <iostream>
using namespace std;

#define MAX_N 200
int p[MAX_N][MAX_N];

int main()
{
	// 被除数多项式的次数 
    int deg;
    cin >> deg;
    
    // P(0) = 1, P(x) = x
    p[0][0] = 1;
    p[1][1] = 1;
    
    // p[i + 1] = {x * p[i] + p[i - 1]} % 2;
    // 从第2行一直计算到第n行 
    for (int i = 1; i < deg; i++) 
	{
        // x * p[i] 
        for (int j = 0; j <= i; j++)
        {
        	p[i + 1][j + 1] += p[i][j];
		}
        
		// + p[i - 1]    
		for (int j = 0; j <= i - 1; j++)
        {
        	p[i + 1][j] += p[i - 1][j];
		}
              
        // % 2 
        for (int j = 0; j <= i + 1; j++)
        {
        	p[i + 1][j] %= 2;
		}
            
    }
    
    // 打印被除数多项式的次数 
    cout << deg << "\n";
    // 打印被除数多项式的系数，最常数项系数到最高次系数的顺序 
    for (int i = 0; i <= deg; i++)
    {
    	cout << p[deg][i] << " ";
	}
    cout << "\n";
    
    // 打印除数多项式的次数，比被除数多项式的次数少1 
    cout << deg - 1 << "\n";
    
    // 打印除数多项式的系数，按最常数项系数到最高次系数的顺序
    for (int i = 0; i <= deg - 1; i++)
    {
    	cout << p[deg - 1][i] << " ";
	}
    cout << "\n";
	    
    return 0;
}
