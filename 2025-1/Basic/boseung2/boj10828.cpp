#include <bits/stdc++.h>
using namespace std;

class Stack {
  private:
    int data[100000];
    int index;

  public:
    Stack() {index = 0;}
    ~Stack(){}

    void push(int value) {
      data[index++] = value;
    }

    int empty() {
      return index == 0;
    }

    int pop() {
      if(empty()) return -1;
      return data[--index];
    }

    int size() {
      return index;
    }    

    int top() {
      if(empty()) return -1;
      return data[index-1];
    }
};



int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  Stack stack;

  int n;
  cin >> n;
  string s;

  for(int i=0; i<n; i++) {
    cin >> s;
    if(s == "push") {
      int v;
      cin >> v;
      stack.push(v);
    }
    else if (s == "top") {
      cout << stack.top() << "\n";
    }
    else if (s == "size") {
      cout << stack.size() << "\n";
    }
    else if(s == "empty") {
      cout << stack.empty() << "\n";
    }
    else if (s == "pop") {
      cout << stack.pop() << "\n";
    }
  }
  



  return 0;

}