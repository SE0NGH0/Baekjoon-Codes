import sys
input = sys.stdin.readline

n = int(input())

a = []

for i in range(n):
    b = list(map(int, input().split()))
    a.append(b)
    
a.sort()
for i in a:
    print(i[0], i[1])