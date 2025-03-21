//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int func(int N, int R, int C)
//{
//    if (N == 0)
//        return 0;
//    int half = 1 << (N - 1);
//
//    if (R < half && C < half)
//        return func(N - 1, R, C);
//    if (R < half && C >= half)
//        return half * half + func(N - 1, R, C - half);
//    if (R >= half && C < half)
//        return 2 * half * half + func(N - 1, R - half, C);
//    if (R >= half && C >= half)
//        return 3 * half * half + func(N - 1, R - half, C - half);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int n, r, c;
//    cin >> n >> r >> c;
//    cout << func(n, r, c);
//
//    return 0;
//}