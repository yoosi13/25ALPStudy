#include <iostream>
#define MX 10002
using namespace std;

int st[MX];
int pos = 0;

void push(int n){
    st[pos++] = n;
}

int pop(){
    if(pos == 0) return -1;
    else return st[(pos--) - 1];
}

int size(){
    return pos;
}

bool empty(){
    return pos == 0;
}

int top(){
    if(pos == 0) return -1;
    else return st[pos - 1];
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, x;
    string str;

    cin >> n;

    while(n--){
        cin >> str;
        if(str == "push"){
            cin >> x;
            push(x);
        }
        else if(str == "pop")   cout << pop() << endl;
        else if(str == "size") cout << size() << endl;
        else if(str == "empty") cout << empty() << endl;
        else if(str == "top")   cout << top() << endl;
    }
    return 0;
}
