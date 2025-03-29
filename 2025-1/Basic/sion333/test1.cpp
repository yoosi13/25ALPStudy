#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define X first 
#define Y second 

string start = "01234567"; // 시작 배열
queue<pair<string, vector<int>>> Q;
unordered_set<string> visited; // set보다 빠른 unordered_set

// 최소 횟수를 찾기 위한 함수

void A(string a, int b, vector<int>& seq) {
    string re = a;
    swap(re[0], re[4]);
    swap(re[1], re[5]);
    swap(re[2], re[6]);
    swap(re[3], re[7]);
    if (visited.find(re) == visited.end()) {
        visited.insert(re);
        seq.push_back(1);
        Q.push({ re, seq });
        seq.pop_back();
    }
}

void B(string a, int b, vector<int>& seq) {
    string re = "";
    re += a[3];
    re += a[0];
    re += a[1];
    re += a[2];
    re += a[7];
    re += a[4];
    re += a[5];
    re += a[6];
    if (visited.find(re) == visited.end()) {
        visited.insert(re);
        seq.push_back(2);
        Q.push({ re, seq });
        seq.pop_back();
    }
}

void C(string a, int b, vector<int>& seq) {
    string re = "";
    re += a[0];
    re += a[2];
    re += a[6];
    re += a[3];
    re += a[4];
    re += a[1];
    re += a[5];
    re += a[7];
    if (visited.find(re) == visited.end()) {
        visited.insert(re);
        seq.push_back(3);
        Q.push({ re, seq });
        seq.pop_back();
    }
}

void D(string a, int b, vector<int>& seq) {
    string re = a;
    swap(re[0], re[7]);
    if (visited.find(re) == visited.end()) {
        visited.insert(re);
        seq.push_back(4);
        Q.push({ re, seq });
        seq.pop_back();
    }
}

// 최소 횟수를 찾은 후 순서대로 바뀐 배열을 출력하는 함수 

void ans_A(string& a) {
    swap(a[0], a[4]);
    swap(a[1], a[5]);
    swap(a[2], a[6]);
    swap(a[3], a[7]);
    cout << a << "\n";
} 

void ans_B(string& a) {
    string re = "";
    re += a[3];
    re += a[0];
    re += a[1];
    re += a[2];
    re += a[7];
    re += a[4];
    re += a[5];
    re += a[6];
    cout << re << "\n";
    a = re;
}

void ans_C(string& a) {
    string re = "";
    re += a[0];
    re += a[2];
    re += a[6];
    re += a[3];
    re += a[4];
    re += a[1];
    re += a[5];
    re += a[7];
    cout << re << "\n";
    a = re;
}

void ans_D(string &a){
    swap(a[0], a[7]);
    cout << a << "\n";
}

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N; 
    while (N--) { // 테스트 케이스
        
        visited.clear(); // set 비우기
        queue<pair<string, vector<int>>> tq;
        swap(Q, tq); // Q 비우기(빈 Q와 스왑)
        
        string arr;
        cin >> arr;  // 목표 배열 입력

        Q.push({ start, {} });
        visited.insert(start);

        string answer = "01234567"; // 변형해서 출력할 답

        while (!Q.empty()) {
            pair<string, vector<int>> cur = Q.front(); Q.pop();

            if (cur.X == arr) { // 만약 답이라면
                cout << cur.Y.size() << "\n"; // 최소 횟수 출력
                for (int op : cur.Y) {
                    cout << op << " "; // 돌리는 방법 출력
                }
                cout << "\n";
                for (int op : cur.Y) {
                    switch (op) { // 돌리는 방법에 맞춰 함수 설정
                    case 1:
                        ans_A(answer);
                        break;
                    case 2:
                        ans_B(answer);
                        break;
                    case 3:
                        ans_C(answer);
                        break;
                    case 4:
                        ans_D(answer);
                        break;
                    }
                }
                break;
            }
            // 답이 아니라면 다시 함수로
            A(cur.X, 1, cur.Y);
            B(cur.X, 2, cur.Y);
            C(cur.X, 3, cur.Y);
            D(cur.X, 4, cur.Y);

        }
    }
    return 0;
}