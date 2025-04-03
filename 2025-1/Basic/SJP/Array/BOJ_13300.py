import sys
input = sys.stdin.readline

N, K = map(int, input().split())

M = [0] * 6
F = [0] * 6

for _ in range(N):
    a, b = map(int, input().split())
    if a == 0:
        F[b-1] += 1
    else:
        M[b-1] += 1

for i in range(6):
    M[i] = M[i] // K + bool(M[i] % K)
    F[i] = F[i] // K + bool(F[i] % K)

result = sum(M) + sum(F)

print(result)
