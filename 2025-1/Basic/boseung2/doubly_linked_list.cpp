#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
      Node* prev;
      Node* next;

      Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
  private:
    Node* head;
    Node* tail;
  
  public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

  void push_front(int value) {
    Node* newNode = new Node(value);
    if(!head) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  }

  void push_back(int value) {
    Node* newNode = new Node(value);
    if(!tail) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  void remove(int value) {

  }

  void printForward() {

  }

  void printBackward() {

  }

  // 메모리 해제
  ~DoublyLinkedList() {

  }
};

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cout << "hello";
  
  
  

};