
// 2점
// 문제점 : remain의 역할 (딱히 필요도 없을 뿐더러, 논리적인 결함이 생김)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    int room=0;
    cin >> N >> K;
    
    int student[2][6]={0,};
    
    int S,Y;
    for(int i=0; i<N; i++){
        cin >> S >> Y;
        student[S][Y-1]++;
    }
    
    for(int i=0; i<6; i++){
        int remain=0;
        
        room += student[0][i]/K;
        remain = student[0][i]%K;
        if(student[0][i]%K != 0) room+=remain;
        
        room += student[1][i]/K;
        remain = student[1][i]%K;
        if(student[1][i]%K != 0) room+=remain;
    }
    
    cout << room;

    return 0;
}



// 100점

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    int room=0;
    cin >> N >> K;
    
    int student[2][6]={0,};
    
    int S,Y;
    for(int i=0; i<N; i++){
        cin >> S >> Y;
        student[S][Y-1]++;
    }
    
    for(int i=0; i<6; i++){
        room += student[0][i]/K;
        if(student[0][i]%K != 0) room++;
        
        room += student[1][i]/K;
        if(student[1][i]%K != 0) room++;
    }
    
    cout << room;

    return 0;
}
