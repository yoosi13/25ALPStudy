#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int result;
    result = A * B * C;
    int number[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (result > 0){
        number[result % 10] += 1;
        result /= 10;
    }
    for (int i = 0; i < 10; i++)
        cout << number[i] << endl;
}
