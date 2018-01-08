#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int64_t n, k;
    scanf("%I64d, %I64d", &n, &k);
    
    if (1 == k) 
	{
        printf("%I64d\n", n);
        
        return 0;
    }
    
    int64_t bit = 0;
    for (; n >> bit; bit++);
    
    printf("%I64d\n", (1LL << bit) - 1);
    
    return 0;
}
