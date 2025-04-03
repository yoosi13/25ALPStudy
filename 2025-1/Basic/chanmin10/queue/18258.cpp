#include <iostream>
#define MX 2000001
using namespace std;

int stc[MX];
int head = 0, tail = 0;

void push(int x){
    stc[tail++] = x;
}

int size(){
    return (tail - head);
}

bool empty(){
    return tail == head;
}

int pop(){
    if(empty()) return -1;
    else    return stc[head++];
}

int front(){
    if(empty()) return -1;
    else    return stc[head];
}

int back(){
    if(empty()) return -1;
    else return stc[tail - 1];
}


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, x;
    string cmd;

    cin >> n;
    while(n--){
        cin >> cmd;
        if(cmd == "push"){
            cin >> x;
            push(x);
        }
        else if(cmd == "pop")   cout << pop() << '\n';
        else if(cmd == "size") cout << size() << '\n';
        else if(cmd == "empty") cout << empty() << '\n';
        else if(cmd == "front") cout << front() << '\n';
        else if(cmd == "back") cout << back() << '\n';
    }
    return 0;
}
