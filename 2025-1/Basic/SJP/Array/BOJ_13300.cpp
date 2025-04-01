#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    int M[6] = {0};
    int F[6] = {0};

    int a, b;

    for (int i = 0; i < N; i++){
        cin >> a >> b;
        if (a == 0) F[b - 1]++;
        else M[b-1]++;
    }

    int result = 0;

    for (int i = 0; i < 6; i++){
        result += F[i] / K + (F[i] % K != 0);
        result += M[i] / K + (M[i] % K != 0);
    }
    cout << result;
}
