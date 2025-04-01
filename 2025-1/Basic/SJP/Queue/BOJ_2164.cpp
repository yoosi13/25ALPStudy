#include <iostream>
#include <queue>
using namespace std;

queue <int> Q;
int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++){
        Q.push(i);
    }
    while (Q.size() > 1){
        Q.pop();
        if (Q.size() > 1){
            Q.push(Q.front());
            Q.pop();
        }
    }
    cout << Q.front();
}
