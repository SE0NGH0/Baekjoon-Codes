n = int(input())

for i in range(n):
    a, b = map(int, input().split())
    total = a * b
    while b:
        if a > b:
            a, b = b, a
        b %= a
        
    print(total // a)