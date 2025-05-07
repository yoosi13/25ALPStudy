#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string x, y;
    cin >> x >> y;

    int count[26] = {0};

    for (char c : x)
        count[c - 'a']++;
    for (char c : y)
        count[c - 'a']--;
    
    int result = 0;
    for (int i : count)
        result += abs(i);
    cout << result;
}
