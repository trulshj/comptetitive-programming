from collections import Counter


n = int(input())

seen = []

for i in range(n):
    curr = int(input())
    seen.append(curr)

c = Counter(seen)

if 1 not in c.values():
    print(-1)
    exit()

for k, v in sorted(c.items()):
    if v == 1:
        print(k)
        exit()
