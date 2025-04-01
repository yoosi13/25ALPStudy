#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int count[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (num > 0){
        if (num % 10 == 9){
            count[6] ++;
        }
        else count[num % 10] ++;
        num /= 10;
    }
    count[6] = (count[6] + 1)/2;
    
    // count의 최댓값 출력
    int max;
    max = count[0];
    for (int i = 1; i < 9; i ++){
        if (count[i] > max) max = count[i];
    }
    cout << max << endl;
}
