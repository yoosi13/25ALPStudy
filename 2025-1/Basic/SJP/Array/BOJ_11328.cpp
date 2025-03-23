#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    while (N--){
        
        string x, y;
        int D[26] = {0};

        cin >> x >> y;

        for (char c : x)
            D[c - 'a']++;
        for (char c : y)
            D[c - 'a']--;

        bool det = true;
        for (int i : D){
            if (i != 0){
                det = false;
                break;
            }
        }

        if (det)
            cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
}
