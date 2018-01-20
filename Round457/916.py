x = int(input())
hh, mm = map(int, raw_input().split())
minute, cnt = 60 * hh + mm, 0

while '7' not in str(minute // 60) + str( minute % 60):
	cnt += 1
	minute -= x
	if minute < 0:
		minute += 1440
		
print(cnt)