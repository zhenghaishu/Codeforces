#include <bits/stdc++.h>
using namespace std;

enum Dir{DOWN, UP, RIGHT, LEFT};
const int maxn = 50;
char grid[maxn][maxn];
int n, m;						// n for rows, m for columns
int digit[4] = {0, 1, 2, 3};
int startX, startY, exitX, exitY;
string instructions;

int move() 
{
    int row = startX, col = startY;
    
    for (int i = 0; i < instructions.size(); ++i) 
	{
        int d = instructions[i] - '0';
        for (int j = 0; j < 4; ++j) 
		{
            if (d == digit[j]) 
			{
                if (j == DOWN)
                {
                	row++;
				}
                    
                if (j == UP)
                {
                	row--;
				}
				
                if (j == RIGHT)
                {
                	col++;
				}

                if (j == LEFT)
                {
                	col--;
				}
            }
            
            if (row > n || row < 1 || col > m || col < 1)
            {
            	return 0;
			}      
            else if (grid[row][col] == 'E') 
			{
                return 1;
            }
            else if (grid[row][col] == '#')
            {
            	 return 0;
			}   
        }
    }
    
    return 0;
}

int main() 
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) 
	{
        for (int j = 1; j <= m; ++j) 
		{
            cin >> grid[i][j];
            if (grid[i][j] == 'S') 
			{
                startX = i;
                startY = j;
            }
            else if (grid[i][j] == 'E') 
			{
                exitX = i;
                exitY = j;
            }
        }
    }
    
    cin >> instructions;
    int res = 0;
    do 
	{
        res += move();
    } while (next_permutation(digit, digit + 4));
    
    cout << res << endl;
    
    return 0;
}

