#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    cin >> text;
    int count[26] = {0};
    for (char i : text)
        count[i - 97]++;
    for (int i = 0; i < 26; i++)
        cout << count[i] << ' ';
}
