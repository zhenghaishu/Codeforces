import sys

n, k = map(int, raw_input().split())

if k == 1:
    print n
    sys.exit(0)

res = 1
while res < n:
    res = res * 2 + 1

print res