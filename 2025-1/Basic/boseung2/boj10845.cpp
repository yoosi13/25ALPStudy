#include <bits/stdc++.h>
using namespace std;

class Queue {
  private:
    int data[100000];
    int head, tail;

  public:
    Queue() {head = 0; tail = 0;}
    ~Queue(){}

    void push(int value) {
      data[tail++] = value;
    }

    int empty() {
      return head == tail;
    }

    int pop() {
      if(empty()) return -1;
      return data[head++];
    }

    int size() {
      return tail-head;
    }    

    int front() {
      if(empty()) return -1;
      return data[head];
    }

    int back() {
      if(empty()) return -1;
      return data[tail-1]; 
    }
};



int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  Queue q;

  int n;
  cin >> n;
  string s;

  for(int i=0; i<n; i++) {
    cin >> s;
    if(s == "push") {
      int v;
      cin >> v;
      q.push(v);
    }
    else if (s == "front") {
      cout << q.front() << "\n";
    }
    else if (s == "back") {
      cout << q.back() << "\n";
    }
    else if (s == "size") {
      cout << q.size() << "\n";
    }
    else if(s == "empty") {
      cout << q.empty() << "\n";
    }
    else if (s == "pop") {
      cout << q.pop() << "\n";
    }
  }
  



  return 0;

}