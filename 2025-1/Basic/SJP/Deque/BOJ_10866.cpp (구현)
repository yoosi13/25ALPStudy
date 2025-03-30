#include <iostream>
using namespace std;

const int MX = 1000005;
int deque[2 * MX + 2];

int head = MX + 1, tail = MX + 2;

void push_front(int X){
    deque[head] = X;
    head--;
}
void push_back(int X){
    deque[tail] = X;
    tail++;
}
void pop_front(){
    if (tail - head > 1){ 
        cout << deque[head + 1] << endl;
        head++;
    }
    else cout << -1 << endl;
}
void pop_back(){
    if (tail - head > 1){ 
        cout << deque[tail - 1] << endl;
        tail--;
    }
    else cout << -1 << endl;
}
void size(){
    cout << tail - head - 1 << endl;
}
void empty(){
    if (tail - head > 1) cout << 0 << endl;
    else cout << 1 << endl;
}
void front(){
    if (tail - head > 1) cout << deque[head + 1] << endl;
    else cout << -1 << endl;
}
void back(){
    if (tail - head > 1) cout << deque[tail - 1] << endl;
    else cout << -1 << endl;
}
int main() {
    int N;
    cin >> N;
    while (N--) {
        string command;
        cin >> command;
        
        if (command == "push_front") {
            int X;
            cin >> X;
            push_front(X);
        } else if (command == "push_back") {
            int X;
            cin >> X;
            push_back(X);
        } else if (command == "pop_front") {
            pop_front();
        } else if (command == "pop_back") {
            pop_back();
        } else if (command == "size") {
            size();
        } else if (command == "empty") {
            empty();
        } else if (command == "front") {
            front();
        } else if (command == "back") {
            back();
        }
    }
}
