#include <iostream>
using namespace std;

#define MAX_N 200
int p[MAX_N][MAX_N];

int main()
{
	// ����������ʽ�Ĵ��� 
    int deg;
    cin >> deg;
    
    // P(0) = 1, P(x) = x
    p[0][0] = 1;
    p[1][1] = 1;
    
    // p[i + 1] = {x * p[i] + p[i - 1]} % 2;
    // �ӵ�2��һֱ���㵽��n�� 
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
    
    // ��ӡ����������ʽ�Ĵ��� 
    cout << deg << "\n";
    // ��ӡ����������ʽ��ϵ���������ϵ������ߴ�ϵ����˳�� 
    for (int i = 0; i <= deg; i++)
    {
    	cout << p[deg][i] << " ";
	}
    cout << "\n";
    
    // ��ӡ��������ʽ�Ĵ������ȱ���������ʽ�Ĵ�����1 
    cout << deg - 1 << "\n";
    
    // ��ӡ��������ʽ��ϵ�����������ϵ������ߴ�ϵ����˳��
    for (int i = 0; i <= deg - 1; i++)
    {
    	cout << p[deg - 1][i] << " ";
	}
    cout << "\n";
	    
    return 0;
}
