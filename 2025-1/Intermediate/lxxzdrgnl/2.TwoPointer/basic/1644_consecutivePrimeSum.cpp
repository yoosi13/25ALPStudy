#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    // 에라토스테레스의 체로 소수 배열 구함
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int en = 0;
    for (int st = 0; st < N; st++) {
    }
}