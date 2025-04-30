#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2; cin >> s1 >> s2;
    int cnt=0;
    
    int arr1[26]={0,}, arr2[26]={0,};
    // 정렬 필요 없이, 각 문자열에 해당하는 알파벳 배열 카운트하고,
    // 카운트 배열에서 철자 개수 다르면, 각 차이만큼 절대값으로 제거해야 할 개수 세기
    
    for(int i=0; i<s1.length(); i++)
        arr1[s1[i]-'a']++;
    for(int i=0; i<s2.length(); i++)
        arr2[s2[i]-'a']++;
    for(int i=0; i<26; i++){
        if(arr1[i] != arr2[i])
            cnt += abs(arr1[i] - arr2[i]);
    }
    cout << cnt;
    return 0;
}
