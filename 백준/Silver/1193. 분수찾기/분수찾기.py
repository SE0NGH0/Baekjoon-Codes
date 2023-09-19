n = int(input())

line = 1

while n > line:
    n -= line
    line += 1

if line % 2 == 0:
    print(n, '/', line - n + 1, sep = '')
elif line % 2 == 1:
    print(line - n + 1, '/', n, sep = '')