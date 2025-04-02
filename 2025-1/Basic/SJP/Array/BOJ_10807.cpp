#include <iostream>
using namespace std;

int main(){
    int N, v;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cin >> v;
    int result = 0;
    for (int i = 0; i < N; i++){
        if (v == arr[i]) result ++;
    }
    cout << result;
}
