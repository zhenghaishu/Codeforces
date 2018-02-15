n, m = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
res = [max([ax*bx for bx in b]) for ax in a]
res.sort(reverse=True)
print(res[1])