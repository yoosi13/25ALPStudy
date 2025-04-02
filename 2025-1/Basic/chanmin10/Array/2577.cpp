#include <iostream>
using namespace std;

int cnt[10];
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int mul = 1, num;
    for(int i = 0; i < 3; i++){
        cin >> num;
        mul *= num;
    }
    while(mul>0){
        cnt[mul%10]++;
        mul/=10;
    }
    for(int i = 0; i < 10; i++)
        cout << cnt[i] << '\n';
    return 0;
}
