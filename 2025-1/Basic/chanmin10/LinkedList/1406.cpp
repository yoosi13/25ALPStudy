#include <iostream>
#include <list>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string tmp;
    list<char> str;
    list<char>::iterator cur;
    char cmd, w;
    int n;

    cin >> tmp;
    cin >> n;

    for(int i = 0; i < tmp.size(); i++) str.push_back(tmp[i]);
    cur = str.end();

    while(n--){
        cin >> cmd;
        if(cmd == 'P'){
            cin >> w;
            str.insert(cur, w);
        }
        else if(cmd == 'L' && cur != str.begin())
            cur--;
        else if(cmd == 'D' && cur != str.end())
            cur++;
        else if(cmd == 'B' && cur != str.begin()){
            cur = str.erase(--cur);
        }
    }

    for(char e : str)
        cout << e;
    return 0;
}
