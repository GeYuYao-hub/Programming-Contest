//#include <iostream>
//#include <cstdio>
//using namespace std;
//
///*
//先手必胜状态：先手操作完，可以走到某一个必败状态
//先手必败状态：先手操作完，走不到任何一个必败状态
//先手必败状态：a1 ^ a2 ^ a3 ^ ... ^an = 0
//先手必胜状态：a1 ^ a2 ^ a3 ^ ... ^an ≠ 0
//*/
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    int res = 0;
//    for (int i = 0; i < n; i++) {
//        int x;
//        scanf_s("%d", &x);
//        res ^= x;
//    }
//    if (res == 0) puts("No");
//    else puts("Yes");
//}
//
//
