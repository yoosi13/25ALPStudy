#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N, h;
    cin >> N;

    long long count = 0;
    stack <int>S;
    cin >> h;
    S.push(h); // 첫 번째 친구
    // 전략 : 새로 온 친구를 몇 명이 볼 수 있는지 센다.
    for (int i = 1; i < N; i++){
        cin >> h; // 등장
        while (!S.empty()){
            if (h >= S.top()){
                S.pop();
            }
            else break;
        }
        count += S.size();
        S.push(h);
    }
    cout << count;
}
