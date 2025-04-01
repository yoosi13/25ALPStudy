#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

void option_1(){
    dq.pop_front();
}

void option_2(){
    int temp = dq.front();
    dq.pop_front();
    dq.push_back(temp);
}

void option_3(){
    int temp = dq.back();
    dq.pop_back();
    dq.push_front(temp);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, count = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }
    
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;

        int index = 0;

        while (dq[index] != x) {
            index++;
        }
        while(dq.front() != x){
            if(index < dq.size() - index){
                option_2();
            }
            else{
                option_3();
            }
            count++;   
        } 
        option_1();
    }
    cout << count;
    return 0;
}
