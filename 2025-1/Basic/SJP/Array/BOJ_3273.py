import sys
input = sys.stdin.readline
n = int(input())
list = [*sorted((map(int, input().split())))]
x = int(input())
result = 0
L = 0
R = n-1
while L < R:
    if list[L] + list[R] < x:
        L += 1
    elif list[L] + list[R] > x:
        R -= 1
    else:
        L += 1
        R -= 1
        result += 1
print(result)
